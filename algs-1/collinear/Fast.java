import java.util.Arrays;

public class Fast {
    
    public static void main(String[] args){
        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);
        StdDraw.show(0);
        StdDraw.setPenRadius(0.01);  // make the points a bit larger
        
        String filename = args[0];
        In in = new In(filename);
        int N = in.readInt();
        Point points[] = new Point[N];
        Point pcpy[] = new Point[N];
        for (int i = 0; i < N; i++) {
            int x = in.readInt();
            int y = in.readInt();
            points[i] = new Point(x, y);
            pcpy[i] = new Point(x, y);
            points[i].draw();
        }
        
        Point pref = new Point(0, 0);
        for (int i = 0; i < N; i++){ // first loop
            // copy array
            
            // sort according to element
            Arrays.sort(points, i, N, points[i].SLOPE_ORDER);
            // search the next line segment
            int j = i+1;            
            while(j < N-1) { // 2nd nested "for" loop
                int npoints = 1; // there is always line segment of length 2, so additional npoints: 1
                double gamma1 = points[i].slopeTo(points[j]); // p
                double gamma2 = points[i].slopeTo(points[j+1]);
                while ((gamma1 == gamma2)) { // search for next line segment
                    npoints++;
                    if (j+npoints < N) {
                        gamma1 = gamma2;
                        gamma2 = points[i].slopeTo(points[j+npoints]);
                    }
                    else
                        break;
                } // {p1, ..., pn}
                j += npoints;
                // to print - see if there is p0 before p
                boolean printed = false;
                if (npoints >= 3){
                    for (int m = 0; m < i; ++m) {
                        gamma2 = points[i].slopeTo(points[m]);
                        if (gamma2 == gamma1) {
                            printed = true; }
                    }
                }
                
                // print if long enough and was not printed before
                if (!printed && (npoints >= 3)){
                    Point pts_tmp[] = new Point[npoints+1];
                    pts_tmp[0] = points[i];
                    for (int s = 1; s <= npoints; s++){
                        pts_tmp[s] = points[j-s];
                    }
                    Arrays.sort(pts_tmp);
                    //Arrays.sort(pts_tmp, 0, npoints+1, pref.SLOPE_ORDER);                  
                    for (int s = 0; s <= npoints; ++s){
                        StdOut.print(pts_tmp[s].toString());
                        if (s != npoints){
                            StdOut.print(" -> "); } }
                    StdOut.print("\n");
                    pts_tmp[0].drawTo(pts_tmp[npoints]);
                }
            }
            
        }
        StdDraw.show(0);
        StdDraw.setPenRadius(); 
            
    }
    
}