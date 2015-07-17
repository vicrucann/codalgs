import java.util.Comparator;
public class Point2D implements Comparable<Point2D> {
    private final double x, y;
    
    public static final Comparator<Point2D> X_ORDER = new XOrder();
    public static final Comparator<Point2D> Y_ORDER = new YOrder();
    public final Comparator<Point2D> DISTANCE_TO_ORDER = new DistanceToOrder();
    
    private static class XOrder implements Comparator<Point2D> {
        public int compare(Point2D p, Point2D q) {
            if (p.x < q.x) return -1;
            if (p.x > q.x) return +1;
            return 0;
        }
    }

    private static class YOrder implements Comparator<Point2D> {
        public int compare(Point2D p, Point2D q) {
            if (p.y < q.y) return -1;
            if (p.y > q.y) return +1;
            return 0;
        }
    }
    
    private class DistanceToOrder implements Comparator<Point2D> {
        public int compare(Point2D p, Point2D q) {
            double dist1 = distanceSquaredTo(p);
            double dist2 = distanceSquaredTo(q);
            if      (dist1 < dist2) return -1;
            else if (dist1 > dist2) return +1;
            else                    return  0;
        }
    }
    
    public Point2D(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public  double x(){
        return this.x;
    }
    
    public  double y() {
        return this.y;
    }
    
    public  double distanceTo(Point2D that) {
        double dx = this.x - that.x;
        double dy = this.y - that.y;
        return Math.sqrt(dx*dx + dy*dy);
    }
    
    public  double distanceSquaredTo(Point2D that) {
        double dx = this.x - that.x;
        double dy = this.y - that.y;
        return dx*dx + dy*dy;
    }
    
    public     int compareTo(Point2D that) {
        if (this.y < that.y) return -1;
        if (this.y > that.y) return +1;
        if (this.x < that.x) return -1;
        if (this.x > that.x) return +1;
        return 0;
    }
    
    public boolean equals(Object that) {
        if (that == this) return true;
        if (that == null) return false;
        if (that.getClass() != this.getClass()) return false;
        Point2D pnt = (Point2D) that;
        return this.x == pnt.x && this.y == pnt.y;
    }
    
    public    void draw() {
        StdDraw.point(x, y);
    }
    
    public  String toString() {
        return "(" + x + ", " + y + ")";
    }
}