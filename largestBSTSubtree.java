public class Solution {
	/*
	 * BinaryTreeNode class
	 * 
	 * class BinaryTreeNode<T> 
	 * { 
	 * 		T data; 
	 * 		BinaryTreeNode<T> left; 
	 * 		BinaryTreeNode<T> right;
	 *		public BinaryTreeNode(T data) 
	 *		{
	 *  		this.data = data; 
	 *  	} 
	 *  }
	 */
	
    
    
	public static int largestBSTSubtree(BinaryTreeNode<Integer> root) {
		// Write your code here
        return largestBSTSubtree1(root).second.second;
	}
    
    public static Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>> largestBSTSubtree1(BinaryTreeNode<Integer> root)
    {
        if(root==null)
        {
            Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>> output=new Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>>();
            output.first=new Pair<>();
            output.first.first=Integer.MIN_VALUE;
            output.first.second=Integer.MAX_VALUE;
            output.second=new Pair<>();
            output.second.first=true;
            output.second.second=0;
            return output;
        }
        
        Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>> leftAnsPair=largestBSTSubtree1(root.left);
        Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>> rightAnsPair=largestBSTSubtree1(root.right);
        Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>> output=new Pair<Pair<Integer, Integer>, Pair<Boolean, Integer>>();
        output.first=new Pair<>();
        output.second=new Pair<>();
        int max=Math.max(root.data, Math.max(leftAnsPair.first.first,rightAnsPair.first.first));
        int min=Math.min(root.data, Math.min(leftAnsPair.first.second,rightAnsPair.first.second));
        boolean isBST=(root.data>leftAnsPair.first.first) && 
            (root.data<rightAnsPair.first.second) && 
            leftAnsPair.second.first && rightAnsPair.second.first;
        
        if(isBST)
        	output.second.second=Math.max(leftAnsPair.second.second, rightAnsPair.second.second)+1;
        else
            output.second.second=Math.max(leftAnsPair.second.second, rightAnsPair.second.second);
        output.first.first=max;
        output.first.second=min;
        output.second.first=isBST;
        
        return output;
    }

}
class Pair<T, V>
    {
        T first;
        V second;
    }
