import java.util.Arrays;

public class Brute{
    
    public static void main(String[] args) {
        
        String filename = args[0];
        In in = new In(filename);
        int N = in.readInt();
        int arx[] = new int[N];
        int ary[] = new int[N];
        boolean arf[] = new boolean[N];
        for (int i = 0; i < N; i++) {
            arx[i] = in.readInt();
            ary[i] = in.readInt();
            arf[i] = false;
        }
        
        StdDraw.setXscale(0, 32768);
        StdDraw.setYscale(0, 32768);
        StdDraw.show(0);
        StdDraw.setPenRadius(0.01);  // make the points a bit larger
        
        Point arp[] = new Point[4];
        Point pref = new Point(0, 0);
        for (int i = 0; i < N; ++i){
            Point pdr = new Point(arx[i], ary[i]);
            pdr.draw();            
            for (int j = i+1; j < N; ++j){       
                for (int k = j+1; k < N; ++k){
                    for (int m = k+1; m < N; ++m){
                        arp[0] = new Point(arx[i], ary[i]);
                        arp[1] = new Point(arx[j], ary[j]);
                        arp[2] = new Point(arx[k], ary[k]);
                        arp[3] = new Point(arx[m], ary[m]);
                        
                        int sl1 = arp[0].SLOPE_ORDER.compare(arp[1], arp[2]);
                        int sl2 = arp[0].SLOPE_ORDER.compare(arp[2], arp[3]);
                        if ((sl1 == 0) && (sl2 == 0)){ // print the segment?
                            double d0 = pref.slopeTo(arp[0]);
                            double d1 = pref.slopeTo(arp[1]);
                            double d2 = pref.slopeTo(arp[2]);
                            double d3 = pref.slopeTo(arp[3]);
                            if ((d0 <= d1) && (d1 <= d2) && (d2 <= d3)){
                                if (arf[i] && arf[j] && arf[k] && arf[m]){continue;} 
                                arf[i] = true; arf[j] = true; arf[k] = true; arf[m] = true;
                                
                                StdOut.println(arp[0].toString() + " -> " + arp[1].toString() + " -> " +
                                               arp[2].toString() + " -> " + arp[3].toString());
                                
                                arp[0].drawTo(arp[3]);
                            }  
                        }
                    }
                }
            }
        }
        
        StdDraw.show(0);
        StdDraw.setPenRadius();
    }
}