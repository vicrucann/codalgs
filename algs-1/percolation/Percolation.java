public class Percolation //extends WeightedQuickUnionUF
{
    private WeightedQuickUnionUF wqa;
    private WeightedQuickUnionUF wqb;
    private boolean[] opn;
    private int width, n;

    public Percolation(int N) // create N-by-N grid, with all sites blocked except virtual
    {
        //super(N*N+2);
        if (N <= 0)
            throw new java.lang.IllegalArgumentException("illegal input param: N <= 0");
        wqa = new WeightedQuickUnionUF(N*N+2);
        wqb = new WeightedQuickUnionUF(N*N+1);
        width = N;
        n = N * N + 2;
        opn = new boolean[n];
        for (int i = 1; i < n - 1; i++)
            opn[i] = false;
        opn[0] = true; 
        opn[n - 1] = true; // virtual sites are open
    }
    
    public void open(int i, int j) // open site (row i, column j) if it is not already
    {
        validIdx(i, j);
        int idx = xyTo1D(i, j);
        if (!opn[idx])
        {
            opn[idx] = true; // open the site
            unionNeighbor4(i, j, idx); // see if neighbors are open and union to those
        }
    }
    
    public boolean isOpen(int i, int j)      // is site (row i, column j) open?
    {
        validIdx(i, j);
        int idx = xyTo1D(i, j);
        return opn[idx];
    }
    
    public boolean isFull(int i, int j)      // is site (row i, column j) full?
    {
        validIdx(i, j);
        int idx = xyTo1D(i, j);
        return (wqa.connected(0, idx) && wqb.connected(0, idx));
    }
    
    public boolean percolates()              // does the system percolate?
    {
        return wqa.connected(0, n - 1);
    }
    
    private void unionNeighbor4(int i, int j, int idx) // 4-neighbor connectivity
    {
        final int[] idi = {i-1, i+1, i,   i};
        final int[] idj = {j,   j,   j-1, j+1};
        for (int k = 0; k < 4; k++)
        {
            int in = neighborIdx(idi[k], idj[k]); // calcualte the neighbor's index
            if (in != -1)
            {
                if (in != 0 && in != n - 1)
                {
                    if (!isOpen(idi[k], idj[k]))
                        continue;
                }
                wqa.union(idx, in); // union if the neighbor is open
                if (in != n - 1)
                    wqb.union(idx, in);
            }
        }
    }
    
    private int neighborIdx(int i, int j)
    {
        if ((j == 0) || (j == width + 1))
            return -1;
        if (i == 0)
            return 0;
        if (i == width + 1)
            return n - 1;
        return (i - 1) * width + j;
    }
    
    private int xyTo1D(int i, int j)
    {
        return (i - 1) * width + j; // idx is within [1..N]
    }
    
    private void validIdx(int i, int j)
    {
        if (i < 1 || i > width) 
            throw new IndexOutOfBoundsException("row index i out of bounds");
        if (j < 1 || j > width)
            throw new IndexOutOfBoundsException("column index j out of bounds");
        return;
    }
    
    public static void main(String[] args) 
    { 
        int N = 3; 
        Percolation perc = new Percolation(N);
        perc.open(3, 1);
        perc.open(1, 3);
        perc.open(3, 3);
        perc.open(2, 3);
        
        boolean bc = perc.wqa.connected(7, 10);
        boolean bw = perc.isFull(3, 1);
        boolean bp = perc.percolates();
        
        System.out.println("connected: " + bc);
        System.out.println("backflush: " + bw);
        System.out.println("percolates: " + bp);
    }
}