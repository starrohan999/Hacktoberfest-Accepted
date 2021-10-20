public class Solution{

    public static void ratInAMaze(int maze[][], int n)
    {
        // Write your code here
        if (maze.length == 0 || maze[0][0] == 0)
            return;
        int[][] path =new int[n][n];
        printAllPaths(maze,0,0,path,n);
    }
    public static void printAllPaths(int[][] maze, int x, int y, int[][] path, int n)
    {
        //int n=maze.length;
        if(x<0 || x>=n || y<0 || y>=n || maze[x][y]==0 || path[x][y]==1)
            return;

        path[x][y]=1;
        if(x==n-1 && y==n-1) {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    System.out.print(path[i][j] + " ");
                }
            }
            System.out.println();
            path[x][y]=0;
            return;
        }

        printAllPaths(maze,x-1,y,path, n);
        printAllPaths(maze,x,y+1,path, n);
        printAllPaths(maze,x+1,y,path, n);
        printAllPaths(maze,x,y-1,path, n);
        path[x][y]=0;
    }

}

