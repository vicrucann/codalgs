public class PercolationStats
{   
    private int t, n;
    private double[] openid;
    
    public PercolationStats(int N, int T)    // perform T independent computational experiments on an N-by-N grid
    {
        if (T <= 0) 
            throw new java.lang.IllegalArgumentException("illegal input param: T <= 0");
        if (N <= 0)
            throw new java.lang.IllegalArgumentException("illegal input param: N <= 0");
        t = T;
        n = N*N;
        openid = new double[T];
        for (int i = 0; i < T; i++)
        {
            Percolation perc = new Percolation(N);
            do
            {
                int row = StdRandom.uniform(1, N+1);
                int col = StdRandom.uniform(1, N+1);
                if (perc.isOpen(row, col))
                    continue;
                perc.open(row, col);
                openid[i] = openid[i] + 1.0;
            } while (!perc.percolates());
            
        }
    }
    
    public double mean()                     // sample mean of percolation threshold
    {
        return StdStats.mean(openid) / n;
    }
    
    public double stddev()                   // sample standard deviation of percolation threshold
    {
        return StdStats.stddev(openid) / n;
    }
    
    public double confidenceLo()             // returns lower bound of the 95% confidence interval
    {
        double mn = mean();
        double std = stddev();
        return mn - 1.96 * std / Math.sqrt(t);
    }
   
    public double confidenceHi()             // returns upper bound of the 95% confidence interval
    {
        double mn = mean();
        double std = stddev();
        return mn + 1.96 * std / Math.sqrt(t);
    }
   
    public static void main(String[] args)   // test client, described below
    {
        int N = Integer.parseInt(args[0]);
        int T = Integer.parseInt(args[1]);
        
        PercolationStats percst = new PercolationStats(N, T);
        System.out.println("mean                    = " + percst.mean());
        System.out.println("stddev                  = " + percst.stddev());
        System.out.println("95% confidence interval = " + percst.confidenceLo() + ", " + percst.confidenceHi());
        
    }
}