public class Board {
    private int N;
    private int[][] goal;
    private int[][] board;
    
    public Board(int[][] blocks){
        N = blocks.length;
        goal = new int[N][N];
        board = new int[N][N];
        
        for (int y = 0; y < N; ++y){
            for (int x = 0; x < N; ++x){
                goal[y][x] = y*N+x+1;
                board[y][x] = blocks[y][x];
            }
        }
        goal[N-1][N-1] = 0;
    }
    
    public int dimension(){ 
        return N; 
    }
    
    public int hamming(){
        int dist = 0;
        for (int y = 0; y < N; ++y){
            for (int x = 0; x < N; ++x){
                if ((board[y][x] != y*N+x+1) && (board[y][x] != 0))
                    dist++;
            }
        }        
        return dist;
    }
    
    public int manhattan(){
        int dist = 0;
        for (int y = 0; y < N; ++y){
            for (int x = 0; x < N; ++x){
                if (board[y][x] != 0){
                    int x_ = (board[y][x]-1) % N;
                    int y_ = (board[y][x]-1) / N;
                    dist += Math.abs(x-x_) + Math.abs(y-y_);
                }              
            }
        }
        return dist;
    }
    
    public boolean isGoal(){
        for (int j = 0; j < N; ++j){
            for (int i = 0; i < N; ++i){
                if (board[j][i] != goal[j][i])
                    return false;
            }
        }        
        return true;
    }
    
    public Board twin(){
        int[][] tw = new int[N][N];
        boolean flipped = false;
        for (int j = 0; j < N; ++j){
            for (int i = 0; i < N; ++i){
                tw[j][i] = board[j][i];
                if ((board[j][i] != 0) && (!flipped) && (i > 0)){
                    if (board[j][i-1] != 0){
                        flipped = true;
                        int tmp = tw[j][i];
                        tw[j][i] = tw[j][i-1];
                        tw[j][i-1] = tmp;
                    }
                }
            }
        }
        Board brd = new Board(tw);
        return brd;
    } 
    
    public boolean equals(Object y){
        if (y == this) return true;
        if (y == null) return false;
        if (y.getClass() != this.getClass()) return false;
        Board that = (Board) y;
        if (this.dimension() != that.dimension()) return false;
        for (int j = 0; j < N; j++){
            for (int i = 0; i < N; ++i){
                if (this.board[j][i] != that.board[j][i])
                    return false;
            }
        }        
        return true;
    }
    
    private int[][] copyTile(){
        int[][] t = new int[N][N];
        for (int j = 0; j < N; ++j){
            for (int i = 0; i < N; ++i){
                t[j][i] = board[j][i];
            }
        }
        return t;
    }
    
    public Iterable<Board> neighbors(){
        Stack<Board> ngh = new Stack<Board>();
        int x=0,y=0;
        outer:
        for (y = 0; y < N; y++){
            for (x = 0; x < N; x++){
                if (board[y][x] == 0) 
                    break outer;
            }
        }
        if (x-1 >= 0){
            int[][] n = copyTile();
            int tmp = n[y][x-1];
            n[y][x-1] = n[y][x];
            n[y][x] = tmp;
            Board b = new Board(n);
            ngh.push(b);
        }
        if (y-1 >= 0){
            int[][] n = copyTile();
            int tmp = n[y-1][x];
            n[y-1][x] = n[y][x];
            n[y][x] = tmp;
            Board b = new Board(n);
            ngh.push(b);
        }
        if (x+1 < N) {
            int[][] n = copyTile();
            int tmp = n[y][x+1];
            n[y][x+1] = n[y][x];
            n[y][x] = tmp;
            Board b = new Board(n);
            ngh.push(b);
        }
        if (y+1 < N) {
            int[][] n = copyTile();
            int tmp = n[y+1][x];
            n[y+1][x] = n[y][x];
            n[y][x] = tmp;
            Board b = new Board(n);
            ngh.push(b);
        }
        return ngh;
    }
    
    public String toString(){
        StringBuilder s = new StringBuilder();
        s.append(N + "\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                s.append(String.format("%2d ", board[i][j] ));
            }
            s.append("\n");
        }
        return s.toString();
    }
}