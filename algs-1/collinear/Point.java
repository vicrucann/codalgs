import java.util.Comparator;
import java.util.Arrays;

public class Point implements Comparable<Point> {
    public final Comparator<Point> SLOPE_ORDER = new BySlope();
    
    private class BySlope implements Comparator<Point>{
        public int compare(Point p1, Point p2){
            double s1 = slopeTo(p1);
            double s2 = slopeTo(p2);
            
            if (s1 < s2) return -1;
            else if (s1 > s2 ) return +1;
            else return 0;
        }
    }
    
    private final int x, y;
    
    public Point(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void draw(){
        StdDraw.point(this.x, this.y);
    }
    
    public void drawTo(Point that){
        StdDraw.line(this.x, this.y, that.x, that.y);
    }
    
    public String toString(){
        return "(" + x + ", " + y + ")";
    }

    public int compareTo(Point that){
        if ( (this.y < that.y) || ((this.y == that.y) && (this.x < that.x)) )
            return -1;
        if ((this.y == that.y) && (this.x == that.x))
            return 0;
        return 1;
    }
    
    public double slopeTo(Point that){
        if ((this.y == that.y) && (this.x == that.x))
            return Double.NEGATIVE_INFINITY;
        if (this.y == that.y)
            return +0.0;
        if (this.x == that.x)
            return Double.POSITIVE_INFINITY;
        return (double)(this.y - that.y) / ((double)(this.x - that.x));
    }
    
    public static void main(String[] args) {
        // rescale coordinates and turn on animation mode
        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);
        StdDraw.show(0);
        StdDraw.setPenRadius(0.01);  // make the points a bit larger
        
        String filename = args[0];
        In in = new In(filename);
        int N = in.readInt();
        Point arp[] = new Point[N];
        for (int i = 0; i < N; i++) {
            int x = in.readInt();
            int y = in.readInt();
            arp[i] = new Point(x, y);
        }
        Arrays.sort(arp, arp[0].SLOPE_ORDER);
        for (int i = 0; i < N; i++) {
            arp[i].draw();
        }
        StdDraw.show(0);
        StdDraw.setPenRadius();
    }
}