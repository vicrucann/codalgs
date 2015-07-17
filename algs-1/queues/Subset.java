public class Subset {
    
    public static void main(String[] args)
    {
        int k = Integer.parseInt(args[0]);
        int p = 1;
        int c = 1;
        
        RandomizedQueue<String> raqu = new RandomizedQueue<String>();
        while (!StdIn.isEmpty()) {
            String item = StdIn.readString();
            if (c % p == 0) {
                if (p > 1)
                    raqu.dequeue();
                raqu.enqueue(item); }
                
            c++;
            if (c > k) {
                c = 1;
                p++; }
        }
        
        for (int i = 0; i < k; i++) {
           String item = raqu.dequeue();
           StdOut.println(item); }  
    }
}