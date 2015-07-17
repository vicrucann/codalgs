public class PointSET {
    private SET<Point2D> pset;
    
    public PointSET() {
        pset = new SET<Point2D>();
    }
    
    public boolean isEmpty() {
        return (pset.isEmpty());
    }
    
    public int size() {
        return pset.size();
    }
    
    public void insert(Point2D p) {
        if (!this.contains(p))
            pset.add(p);
    }
    
    public boolean contains(Point2D p) {
        return pset.contains(p);
    }
    
    public void draw() {
        for (Point2D p : pset) {
            p.draw();
        }
    }
    
    public Iterable<Point2D> range(RectHV rect) {
        Stack<Point2D> stack = new Stack<Point2D>();
        for (Point2D p1 : pset) {
            if (rect.contains(p1))
                stack.push(p1);
        }
        return stack;
    }
    
    public Point2D nearest(Point2D p) {
        if (this.isEmpty())
            return null;
        Point2D pmin = null;
        double dmin = Double.POSITIVE_INFINITY;
        for (Point2D p1 : pset) {
            //if (!p.equals(p1)) {
                double d = p.distanceTo(p1);
                if (d < dmin) {
                    dmin = d;
                    pmin = new Point2D(p1.x(), p1.y());
                }
            //}
        }
        return pmin;
    }
    
    public static void main(String[] args){
        PointSET brute = new PointSET();
        Point2D p1 = new Point2D(0, 0.5);
        Point2D p2 = new Point2D(0.5, 1);
        Point2D p3 = new Point2D(0.5, 0);
        Point2D p4 = new Point2D(1, 0.5);
        brute.insert(p1);
        brute.insert(p2);
        brute.insert(p3);
        brute.insert(p4);
        Point2D p11 = brute.nearest(p1);
        Point2D p22 = brute.nearest(p2);
        Point2D p33 = brute.nearest(p3);
        Point2D p44 = brute.nearest(p4);
    }
}