import java.util.Iterator;
import java.util.NoSuchElementException;

public class Deque<Item> implements Iterable<Item> {
    
    private int N;
    private Node nill;
    
    private class Node {
        Item item;
        Node next; 
        Node prev; }
    
    public Deque() {
        N = 0;
        nill = new Node();
        nill.next = nill;
        nill.prev = nill; }
    
    public boolean isEmpty() {
        return N == 0; }
    
    public int size() {
        return N; }
    
    public void addFirst(Item item) {
        if (item == null)
            throw new NullPointerException("Null items are not acceptable");
        Node front = new Node();
        front.item = item;
        front.next = nill.next;
        front.prev = nill;
        nill.next.prev = front;
        nill.next = front;
        N++; }
    
    public void addLast(Item item) {
        if (item == null)
            throw new NullPointerException("Null items are not acceptable");
        Node back = new Node();
        back.item = item;
        back.prev = nill.prev;
        back.next = nill;
        nill.prev.next = back;
        nill.prev = back;
        N++; }
    
    public Item removeFirst() {
        if (isEmpty()) 
            throw new NoSuchElementException("Stack underflow");
        Node first = nill.next;
        Item item = first.item;
        first.next.prev = first.prev;
        first.prev.next = first.next;
        N--;
        return item; }
    
    public Item removeLast() {
        if (isEmpty()) 
            throw new NoSuchElementException("Stack underflow");
        Node last = nill.prev;
        Item item = last.item;
        last.prev.next = last.next;
        last.next.prev = last.prev;
        N--;
        return item; }
       
    public Iterator<Item> iterator(){
        return new ListIterator(); }
    
    private class ListIterator implements Iterator<Item> {
        private Node current = nill.next;
        public boolean hasNext() { return current != nill; }
        public void remove() { throw new UnsupportedOperationException(); }
        public Item next() {
            if (!hasNext()) throw new NoSuchElementException();
            Item item = current.item;
            current = current.next;
            return item; }
    }
        
    public static void main(String[] args)   // unit testing
    {
        int N = Integer.parseInt(args[0]);
        
        Deque<Integer> deck = new Deque<Integer>();
        
        for (int i = 0; i < N; i++) {
            Integer item = StdIn.readInt();
            deck.addFirst(item); }

        for (int i = 0; i < N; i++) {
            Integer item = deck.removeFirst(); 
            StdOut.println(item);
        }
        
        //for (Integer item : deck)
        //    StdOut.println(item);
        
        
    }
}