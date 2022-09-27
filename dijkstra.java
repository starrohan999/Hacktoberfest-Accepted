import java.util.Scanner;

public class Solution {
    
    public static void dijkstra(int[][] edges) {
		
		int[] distance = new int[edges.length];
		boolean[] visited = new boolean[edges.length];
		
		distance[0] = 0;
		for(int i=1;i<distance.length;i++) {
			distance[i] = Integer.MAX_VALUE;
		}
		
		for(int i=1;i<edges.length;i++) {
			
			int minVertex = findMinDistanceUnvisitedVertex( distance,visited);
			visited[minVertex] = true;
			for(int j=0;j<edges.length;j++) {
				
				if(!visited[j] && edges[minVertex][j]!=0) {
					int d = edges[minVertex][j] + distance[minVertex];
					if( distance[j] > d  ) {
						distance[j] = d;
					}
				}
				
			}
			
		}
		
		for(int i=0;i<distance.length;i++) {
			System.out.println( i+" " + distance[i] );
		}
		
		
		
	}
	private static int findMinDistanceUnvisitedVertex(int[] distance ,boolean[] visited) {
		
		int minIndex = 0;
		int min = Integer.MAX_VALUE;
		for(int i=0;i<distance.length;i++) {
			
			if(!visited[i] &&  min > distance[i]  ) {
				min = distance[i];
				minIndex = i;
			}
			
		}
		return minIndex;
		
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int E = s.nextInt();
        int[][] edges = new int[n][n];
		for(int i=0;i<E;i++) {
			int sv = s.nextInt();
			int ev = s.nextInt();
			int weight = s.nextInt();
			edges[sv][ev] = weight;
			edges[ev][sv] = weight;
			
		}
		dijkstra(edges);

		/* Write Your Code Here
		 * Complete the Rest of the Program
		 * You have to take input and print the output yourself
		 */
	}
}
