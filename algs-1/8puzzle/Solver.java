import java.util.Comparator;

public class Solver {
    private boolean feasible;
    private SearchNode solution;
    
    private class SearchNode implements Comparable<SearchNode>{
        public int nmoves;
        public Board tiles;
        public SearchNode prev;
                
        SearchNode(Board bd_){
            tiles = bd_;
            this.prev = null;
            nmoves = 0;
        }
        
        public int compare(SearchNode n1, SearchNode n2){
                int d1 = n1.tiles.manhattan()+n1.nmoves;
                int d2 = n2.tiles.manhattan()+n2.nmoves;
                if (d1 < d2) return -1;
                else if (d1 > d2) return +1;
                else return 0;
            }
            
            public int compareTo(SearchNode node){
                int d1 = tiles.manhattan()+nmoves;
                int d2 = node.tiles.manhattan() + node.nmoves;
                if (d1 < d2) return -1;
                else if (d1 > d2) return +1;
                else return 0;
            }
    }    
    
    private class GameTree{
        private MinPQ<SearchNode> pq;
        
        GameTree(SearchNode node){
            pq = new MinPQ<SearchNode>();
            pq.insert(node);
        }
        
        public SearchNode dequeue(){
            if (pq.isEmpty()) 
                return null;
            SearchNode node = pq.delMin();
           
            for (Board bd : node.tiles.neighbors()){
                if (node.prev == null){
                    SearchNode neigh = new SearchNode(bd);
                    neigh.prev = node;
                    neigh.nmoves = node.nmoves+1;
                    pq.insert(neigh);
                }
                else if (!node.prev.tiles.equals(bd)){
                    SearchNode neigh = new SearchNode(bd);
                    neigh.prev = node;
                    neigh.nmoves = node.nmoves+1;
                    pq.insert(neigh);
                }                                              
            }
            return node;
        }
        
    }
    
    public Solver(Board initial){
        SearchNode node = new SearchNode(initial);
        GameTree PQ = new GameTree(node);
        Board twin = initial.twin();
        SearchNode node_ = new SearchNode(twin);
        GameTree PQ_ = new GameTree(node_);
                     
        while (!node.tiles.isGoal() && !node_.tiles.isGoal() ) {  
            node = PQ.dequeue();
            node_ = PQ_.dequeue();
        }
        if (node.tiles.isGoal()){
            solution = node;
            feasible = true;
        }
        else{
            solution = null;
            feasible = false;
        }
        
    }            // find a solution to the initial board (using the A* algorithm)
    
    public boolean isSolvable(){
        return feasible;
    }             // is the initial board solvable?
    
    public int moves(){
        if (!feasible)
            return -1;
        else
            return solution.nmoves;        
    }
    
    public Iterable<Board> solution(){
        if (!feasible)
            return null;
        Stack<Board> stack = new Stack<Board>();
        SearchNode node = solution;
        stack.push(node.tiles);
        while (node.prev != null){
            node = node.prev;
            stack.push(node.tiles);
        }
        return stack;
    }
        
    public static void main(String[] args){
        // create initial board from file
        In in = new In(args[0]);
        int N = in.readInt();
        int[][] blocks = new int[N][N];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
            blocks[i][j] = in.readInt();
        Board initial = new Board(blocks);
        
        // solve the puzzle
        Solver solver = new Solver(initial);
        
        // print solution to standard output
        if (!solver.isSolvable())
            StdOut.println("No solution possible");
        else {
            StdOut.println("Minimum number of moves = " + solver.moves());
            for (Board board : solver.solution())
                StdOut.println(board);
        }
    }
}