package disjoint_set;

import java.util.Scanner;

//----------------------------------------------GYAAN-----------------------------------------------------------//
// -> Disjoint set data structure is used to find loop in the graph;
// -> It has two methods Union() and Parent()
// -> Union() is used to combine two elements and make single parent  of them 
// -> Parent() is used to find the parent of given element
//--------------------------------------------------------------------------------------------------------------//

class DisJoint_Set{
	
	int[] parent = new int[100];
	int[] rank = new int[100];
	
	void MakeSet()
	{
		for( int i = 0; i < 100; i++)
		{
			parent[i] = i;
			rank[i] = 0;
		}
	}
	
	int FindParent(int node)
	{
		if(node == parent[node]) return node;
		
		// return FindParent(parent[node]);   // this will return parent but will not perform path compression
		return parent[node] = FindParent(parent[node]); // for path compression
	}
	
	void union(int src, int dest)
	{

		
		int u = FindParent(src);
		int v = FindParent(dest);
		
		System.out.println("Parent of src is " + u + "Parent of dest is " + v );
		
		if(rank[u] < rank[v])
		{
			parent[u] = v;
		}
		else if(rank[v] < rank[u])
		{
			parent[v] = u;
		}
		else {
			parent[u] = v;
			rank[v]++;
		}
	}
	
}




public class DisjointSet {

	public static void main(String[] args) {
		DisJoint_Set d = new DisJoint_Set();
		
		d.MakeSet();
		
		Scanner s = new Scanner(System.in);
		int m = s.nextInt();
		
		while(m > 0)
		{
			int src = s.nextInt();
			int dest = s.nextInt();
			
			d.union(src, dest);
			m--;
		}
		
		System.out.println("ENter nodes to match their parents");
		int a = s.nextInt();
		int b= s.nextInt();
		
		
	    System.out.println("Parent of a is " + d.FindParent(a));
	    System.out.println("Parent of b is " + d.FindParent(b));
	    
	    s.close();
		

	}

}
