import java.util.Iterator;
import java.util.NoSuchElementException;

public class RandomizedQueue<Item> implements Iterable<Item> {
    private Item[] a;
    private int N;
    
    public RandomizedQueue() { 
        a = (Item[]) new Object[2];}
    
    public boolean isEmpty() { 
        return N == 0; }
    
    public int size() {
        return N; }
    
    private void resize(int capacity) {
        assert capacity >= N;
        Item[] temp = (Item[]) new Object[capacity];
        for (int i = 0; i < N; i++) {
            temp[i] = a[i];
        }
        a = temp; }
    
    public void enqueue(Item item) {
        if (item == null)
            throw new NullPointerException("Null items are not acceptable");
        if (N == a.length) resize(2*a.length);
        a[N++] = item; }
    
    public Item dequeue() {
        if (isEmpty()) 
            throw new NoSuchElementException("Stack underflow");
        int idx = StdRandom.uniform(0, N);
        Item item = a[idx];
        a[idx] = a[N-1];
        a[N-1] = null;
        N--;
        if (N > 0 && N == a.length/4) 
            resize(a.length/2);
        return item; }
    
    public Item sample() {
        if (isEmpty()) 
            throw new NoSuchElementException("Stack underflow");
        int idx = StdRandom.uniform(0, N);
        return a[idx];
    }
    
    public Iterator<Item> iterator() {
        return new RandIterator(); }
    
    private class RandIterator implements Iterator<Item> { 
        private int i;
        private int[] rndi;
        
        public RandIterator() {
            rndi = new int[N];
            for (int j = 0; j < N; j++)
                rndi[j] = j;
            StdRandom.shuffle(rndi);
            i = N; }
        
        public boolean hasNext() {
            return i > 0; }
        
        public void remove() {
            throw new UnsupportedOperationException(); }
        
        public Item next() {
            if (!hasNext()) throw new NoSuchElementException();
            return a[rndi[--i]]; }
    }
    
    public static void main(String[] args)   // unit testing
    {
        int N = Integer.parseInt(args[0]);
        RandomizedQueue<Integer> raqu = new RandomizedQueue<Integer>();
        
        for (int i = 0; i < N; i++) {
            Integer item = StdIn.readInt();
            raqu.enqueue(item); }
        
        //StdOut.println("iterator 1");
        //for (Integer item : raqu)
        //    StdOut.println(item);
        
        //StdOut.println("iterator 2");
        //for (Integer item : raqu)
        //    StdOut.println(item);
        
        for (int i = 0; i < N; i++) {
            Integer item = raqu.dequeue();
            StdOut.println(item);
        }
    }
}