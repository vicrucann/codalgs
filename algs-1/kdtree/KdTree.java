public class KdTree{
    private int N;
    private RectHV urec;
    private Node root;
    private Stack<Point2D> stack;
    
    private static class Node {
        public Point2D point;      // the point
        public RectHV rect;    // the axis-aligned rectangle corresponding to this node
        public Node left;        // the left/bottom subtree
        public Node right;        // the right/top subtree
        public boolean level; // even (true) or odd (false)
        
        public Node(Point2D that, boolean even, RectHV rect) {
            this.point = new Point2D(that.x(), that.y());
            this.rect = new RectHV(rect.xmin(), rect.ymin(), rect.xmax(), rect.ymax());
            this.level = even;
        }
    }
    
    public KdTree(){
        N = 0;
        root = null;
        urec = new RectHV(0,0,1,1);
    }
    
    public boolean isEmpty() {
        return (N == 0);
    }
    
    public int size() {
        return N;
    }
    
    private int compareY(Point2D p, Point2D q) {
        if (p.y() < q.y()) return -1;
        if (p.y() > q.y()) return +1;
        return 0;
    }
    
    private int compareX(Point2D p, Point2D q) {
        if (p.x() < q.x()) return -1;
        if (p.x() > q.x()) return +1;
        return 0;
    }
    
    private Node insert(Node x, Point2D p, boolean level, RectHV rect) {
        if (x == null) {
            N++;
            return new Node(p, level, rect);
        }
        boolean eqp = p.equals(x.point);
        if (eqp)
            return x; // do not include if it's the same point as a parent
        
        level = !x.level;
        int cmp = 0;
        if (!level)
            cmp = compareY(p, x.point); // compare by y coord if even level
        else
            cmp = compareX(p, x.point); // if odd - compare by x coord
        
        if (cmp < 0) {
            if (level)
                rect = new RectHV(x.rect.xmin(), x.rect.ymin(), x.point.x(), x.rect.ymax());
            else
                rect = new RectHV(x.rect.xmin(), x.rect.ymin(), x.rect.xmax(), x.point.y());
            x.left = insert(x.left, p, level, rect); // if smaller, go left
        }
        else {
            if (level)
                rect = new RectHV(x.point.x(), x.rect.ymin(), x.rect.xmax(), x.rect.ymax());
            else
                rect = new RectHV(x.rect.xmin(), x.point.y(), x.rect.xmax(), x.rect.ymax());
            x.right = insert(x.right, p, level, rect); // if larger or equal, go right
        }
        return x;
    }
    
    public void insert(Point2D p) {
        if (p == null)
            return;
        root = insert(root, p, false, urec);
    }
        
    public boolean contains(Point2D p) {
        return get(root, p);
    }
    
    private boolean get(Node x, Point2D p) {
        if (x == null)
            return false;
        if (p.equals(x.point))
            return true;
        int cmp = 0;
        if (x.level)
            cmp = compareY(p, x.point);
        else
            cmp = compareX(p, x.point);
        if (cmp < 0)
            return get(x.left, p);
        else
            return get(x.right, p);            
    }
    
    private void draw(Node child, Node parent) {
        if (child == null)
            return; 
        if (parent == null) {
            StdDraw.setPenColor(StdDraw.BLACK);
            StdDraw.setPenRadius(.01);
            child.point.draw();
            
            StdDraw.setPenColor(StdDraw.RED);
            StdDraw.setPenRadius();
            StdDraw.line(child.point.x(), 0, child.point.x(), 1);
            draw(child.left, child);
            draw(child.right, child);
            return;
        }
        StdDraw.setPenColor(StdDraw.BLACK);
        StdDraw.setPenRadius(.01);
        child.point.draw();

        if (child.level) {            
            StdDraw.setPenColor(StdDraw.BLUE);
            StdDraw.setPenRadius();
            boolean right = (parent.point.x() > child.point.x());
            if (right) 
                StdDraw.line(parent.point.x(), child.point.y(), 0, child.point.y());
            else
                StdDraw.line(parent.point.x(), child.point.y(), 1, child.point.y());
        }
        else {
            StdDraw.setPenColor(StdDraw.RED);
            StdDraw.setPenRadius();
            boolean down = (parent.point.y() > child.point.y());
            if (down)
                StdDraw.line(child.point.x(), parent.point.y(), child.point.x(), 0);
            else
                StdDraw.line(child.point.x(), parent.point.y(), child.point.x(), 1);
        }
        draw(child.left, child);
        draw(child.right, child);
    }
    
    public void draw() {
        urec.draw();
        draw(root, null);
    }
    
    private RectHV qrect;
    
    //private void range(Node x, RectHV rect) {
    private void range(Node x) {
        if (x == null)
            return;
        if (qrect.intersects(x.rect)){
            if (qrect.contains(x.point))
                stack.push(x.point);
            //range(x.right, rect);
            //range(x.left, rect);
            range(x.right);
            range(x.left);
        }
        else
            return;
    }
    
    public Iterable<Point2D> range(RectHV rect) {
        stack = new Stack<Point2D>();
        if (N == 0)
            return stack;
        qrect = new RectHV(rect.xmin(), rect.ymin(), rect.xmax(), rect.ymax());
        //range(root, rect);
        range(root);
        return stack;
    }
    
    private Point2D nearest(Node x, Point2D p, Point2D pmin, double dmin) {
        if (x == null)
            return pmin;
        if (pmin != null)
            dmin = p.distanceSquaredTo(pmin);
        double distr = x.rect.distanceSquaredTo(p);
        if (distr < dmin) {
            double dist = x.point.distanceSquaredTo(p);
            if (dist < dmin) {
                dmin = dist;
                pmin = new Point2D(x.point.x(), x.point.y());
            }
            if (!x.level) {
                if (p.x() < x.point.x()) {
                    pmin = nearest(x.left, p, pmin, dmin);
                    pmin = nearest(x.right, p, pmin, dmin); }
                else {
                    pmin = nearest(x.right, p, pmin, dmin);
                    pmin = nearest(x.left, p, pmin, dmin); }    
            }
            else {
                if (p.y() < x.point.y()) {
                    pmin = nearest(x.left, p, pmin, dmin);
                    pmin = nearest(x.right, p, pmin, dmin); }
                else {
                    pmin = nearest(x.right, p, pmin, dmin);
                    pmin = nearest(x.left, p, pmin, dmin); }
            }
            
        }
        return pmin;
    }
    
    public Point2D nearest(Point2D p) {
        Point2D pmin = null;
        pmin = nearest(root, p, pmin, Double.POSITIVE_INFINITY);
        return pmin;
    }
    
    public static void main(String[] args){
        KdTree kd = new KdTree();
        int size = kd.size();
        Point2D p1 = new Point2D(0.7, 0.2);
        Point2D p2 = new Point2D(0.5, 0.4);
        Point2D p3 = new Point2D(0.2, 0.3);
        Point2D p4 = new Point2D(0.4, 0.7);
        Point2D p5 = new Point2D(0.9, 0.6);
        kd.insert(p1);
        size = kd.size();
        kd.insert(p2);
        size = kd.size();
        kd.insert(p3);
        size = kd.size();
        kd.insert(p4);
        size = kd.size();
        kd.insert(p5);
        size = kd.size();
        Point2D p11 = kd.nearest(p1);
        Point2D p22 = kd.nearest(p2);
        Point2D p33 = kd.nearest(p3);
        Point2D p44 = kd.nearest(p4);
        Point2D p55 = kd.nearest(p5);
        
        boolean b1 = kd.contains(p1);
        boolean b2 = kd.contains(p2);
        boolean b3 = kd.contains(p3);
        boolean b4 = kd.contains(p4);
        boolean b5 = kd.contains(p5);
        System.out.println(b1+" "+b2+" "+b3+" "+b4+" "+b5);
        kd.draw();
    }
}