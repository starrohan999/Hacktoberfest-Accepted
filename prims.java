import java.util.Scanner;

public class Solution {
    
    public static void prims(int edges[][])
    {
        int v=edges.length;
        boolean visited[]=new boolean[v];
        int weight[]=new int[v];
        int parent[]=new int[v];
        weight[0]=0;
        parent[0]=-1;
        for(int i=1;i<v;i++)
        {
            weight[i]=Integer.MAX_VALUE;
        }
        for(int i=0;i<v;i++)
        {
            int minVertex=findMinVertex(weight,visited);
            visited[minVertex]=true;
            for(int j=0;j<v;j++)
            {
                if(edges[minVertex][j]!=0 && !visited[j])
                    if(edges[minVertex][j]<weight[j])
                    {
                        weight[j]=edges[minVertex][j];
                        parent[j]=minVertex;
                    }
            }
        }
        
        //print
        for(int i=1;i<v;i++)
        {
            if(parent[i]<i)
                System.out.println(parent[i] +" "+ i +" "+ weight[i]);
            else
                System.out.println(i +" "+ parent[i] +" "+ weight[i]);
        }
    }
    
    public static int findMinVertex(int weight[], boolean visited[])
    {
        int minVertex=-1;
        for(int i=0;i<weight.length;i++)
        {
            if(!visited[i] && (minVertex==-1 || weight[minVertex]>weight[i]))
                minVertex=i;
        }
        return minVertex;
        
    }

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int V = s.nextInt();
		int E = s.nextInt();
        int[][] edges = new int[V][V];
        for(int i=0;i<E;i++) {
            int sv = s.nextInt();
            int ev = s.nextInt();
            int weight = s.nextInt();
            edges[sv][ev] = weight;
            edges[ev][sv] = weight;
        }
        prims(edges);


		/* Write Your Code Here
		 * Complete the Rest of the Program
		 * You have to take input and print the output yourself
		 */
	}
}
