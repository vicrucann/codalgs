public class RectHV {
    private final double xmin, ymin, xmax, ymax;
    
    public    RectHV(double xmin, double ymin,
                     double xmax, double ymax) {
        if (xmax < xmin || ymax < ymin) {
            throw new IllegalArgumentException("Invalid rectangle");
        }
        this.xmin = xmin;
        this.ymin = ymin;
        this.xmax = xmax;
        this.ymax = ymax;
    }
    
    public  double xmin() { return xmin; }
    public  double ymin() { return ymin; }
    public  double xmax() { return xmax; }
    public  double ymax() { return ymax; }
    
    public boolean contains(Point2D p) {
        return (p.x() >= xmin) && (p.x() <= xmax)
            && (p.y() >= ymin) && (p.y() <= ymax);
    }
    
    public boolean intersects(RectHV that) {
        return this.xmax >= that.xmin && this.ymax >= that.ymin
            && that.xmax >= this.xmin && that.ymax >= this.ymin;
    }
    
    public  double distanceTo(Point2D p) {
        return Math.sqrt(this.distanceSquaredTo(p));
    }
    
    public  double distanceSquaredTo(Point2D p) {
        double dx = 0.0, dy = 0.0;
        if      (p.x() < xmin) dx = p.x() - xmin;
        else if (p.x() > xmax) dx = p.x() - xmax;
        if      (p.y() < ymin) dy = p.y() - ymin;
        else if (p.y() > ymax) dy = p.y() - ymax;
        return dx*dx + dy*dy;
    }
    
    public boolean equals(Object that) {
        if (that == this) return true;
        if (that == null) return false;
        if (that.getClass() != this.getClass()) return false;
        RectHV rect = (RectHV) that;
        if (this.xmin != rect.xmin) return false;
        if (this.ymin != rect.ymin) return false;
        if (this.xmax != rect.xmax) return false;
        if (this.ymax != rect.ymax) return false;
        return true;
    }
    
    public    void draw() {
        StdDraw.line(xmin, ymin, xmax, ymin);
        StdDraw.line(xmax, ymin, xmax, ymax);
        StdDraw.line(xmax, ymax, xmin, ymax);
        StdDraw.line(xmin, ymax, xmin, ymin);
    }
    
    public  String toString() {
        return "[" + xmin + ", " + xmax + "] x [" + ymin + ", " + ymax + "]";
    }
}