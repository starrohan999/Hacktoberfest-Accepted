//https://practice.geeksforgeeks.org/problems/minimum-depth-of-a-binary-tree/1#

// { Driver Code Starts
//Initial Template for Java


//Contributed by Sudarshan Sharma
import java.util.*;
import java.io.*;
class Node{
    int data;
    Node left,right;
    Node(int d){
        data=d;
        left=right=null;
    }
}


class GfG{
    
    public static void main(String[] args)throws IOException{
        //Scanner sc=new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int t=Integer.parseInt(br.readLine());
       
        while(t > 0)
           {
               Queue<Node> q = new LinkedList<>();
        
            int n = Integer.parseInt(br.readLine());
            String input[] = br.readLine().trim().split(" ");
            
            Node root = null;
            int j=0;
            while(n > 0){
            int a1 = Integer.parseInt(input[j]);
            int a2 = Integer.parseInt(input[j+1]);
            char lr = input[j+2].charAt(0);
            j+=3;
            
            if(root == null)
            {
                root = new Node(a1);
                q.add(root);
            }
            
            Node pick = q.peek();
            
            q.remove();
            
            if(lr=='L'){
                pick.left = new Node(a2);
                q.add(pick.left);
            }
            a1 = Integer.parseInt(input[j]);
            a2 = Integer.parseInt(input[j+1]);
            lr = input[j+2].charAt(0);
            j += 3;
            
            if(lr=='R'){
                pick.right = new Node(a2);
                q.add(pick.right);
            }
            
            n-=2;
        }
            new View().topView(root);
            t--;
        }
    }
}

   


// } Driver Code Ends


//User function Template for Java



/*class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}*/
class Pair {
    int hd;
    Node node;
    public Pair(Node node, int hd) {
        this.node = node;
        this.hd = hd;
    }
}
class View
{
    static void topView(Node root)
    {
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        HashMap<Integer, Integer>  map = new HashMap<>();
        ArrayDeque<Pair> q = new ArrayDeque<>();
        q.add(new Pair(root, 0));
        while(!q.isEmpty()) {
            Pair node = q.poll();
            if(!map.containsKey(node.hd)) {
                map.put(node.hd, node.node.data);
            }
            min = Math.min(min, node.hd);
            max = Math.max(max, node.hd);
            if(node.node.left != null) {
                q.add(new Pair(node.node.left, node.hd - 1));
            }
            if(node.node.right != null) {
                q.add(new Pair(node.node.right, node.hd + 1));
            }
        }
        StringBuilder res = new StringBuilder();
        for(int i = min ; i <= max ; i++) {
            res.append(map.get(i));
            if(i != max) {
                res.append(" ");
            }
        }
        System.out.println(res);
    }
}