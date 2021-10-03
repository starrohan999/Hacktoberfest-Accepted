import java.util.*;
public class Main{
    public static void main(String[] args){
        int v = 5;
        ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(v);
        for(int i = 0; i < v; i++){
            adj.add(new ArrayList<Integer>());
        }
        addEdge(adj,0,1);
        addEdge(adj,1,3);
        addEdge(adj,2,3);
        addEdge(adj,3,4);
        addEdge(adj,2,4);
        Stack s = new Stack();
        boolean[] visited = new boolean[v];
        for(int i = 0; i < v; i++){
            if(!visited[i]){
                dfs(adj,visited,i,s);
            }
        }
        while(!s.isEmpty()){
            System.out.print(s.pop()+" ");
        }
    }
        public static void addEdge(ArrayList<ArrayList<Integer>> adj,int u,int v){
            adj.get(u).add(v);
        }
        public static void dfs(ArrayList<ArrayList<Integer>> adj,boolean[] visited,int i,Stack s){
            visited[i] = true;
            for(int v : adj.get(i)){
                if(!visited[v]){
                    dfs(adj,visited,v,s);
                }
            }
            s.push(i);
        }
      
}
