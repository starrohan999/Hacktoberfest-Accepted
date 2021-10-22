public class Inorder_Binary_Traversal{
    static class node{
        int data;
        node left,right;
        node(int d){
            data=d;
            left=null;
            right=null;
        }
    }
    static void inorder(node root){
        if(root==null)
            return;
            
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
        
    }
    public static void main(String args[]){
        node tree;
        tree =new node(1);
        tree.left = new node(2); 
        tree.right = new node(3); 
        tree.left.left = new node(4); 
        tree.left.right = new node(5);
        tree.right.left = new node(6); 
        tree.right.right = new node(7);
        inorder(tree);
    }
}