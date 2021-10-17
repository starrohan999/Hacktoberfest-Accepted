//Given the root of a binary tree, return the length of the diameter of the tree.

//The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

//The length of a path between two nodes is represented by the number of edges between them.

//for eg1: root = [1,2,3,4,5]
//Output: 3
//Time : O(N)
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
  int depth=0;
  public int getDiameter(TreeNode root)
  {
    if(root == null)
    {
      return 0;
    }
    int l = getDiameter(root.left);
    int r = getDiameter(root.right);
    
    depth = Math.max(depth ,(l+r+1));
    return Math.max(l,r)+1;
    
  }
    public int diameterOfBinaryTree(TreeNode root) {
      getDiameter(root);
      return depth==0?0:depth-1;
    }
}
