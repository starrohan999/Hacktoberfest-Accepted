import java.util.Scanner;

public class SumOfDiagonals 
{
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the numner of rows or colomns for the square matrix:");
        int n =s.nextInt();
        int[][] ar = new int[n][n];
        int z;
        System.out.println("Enter the values in a square matrix:");
        for( int i=0;i<n;i++)
        {
            for( int j=0;j<n;j++)
            {
                z = s.nextInt();
                ar[i][j]=z;

            }
        }
        int sum = 0;//for storing sum of principal diagonal
        int sum1 = 0;//sum of reversed diagonal
        for( int t=0;t<n;t++)
        {
            for( int r=0;r<n;r++)
            {
                if (t == r)//sum of diagonal elements 
                    sum = sum + ar[t][r]; 

                if ((t + r) == (n - 1)) 
                    sum1 = sum1 + ar[t][r];   

            }
        }
        int SUM = sum-sum1;
        int q;
        if(SUM<0)
        {
            q = -(SUM);
        }
        else
            q = SUM;
        System.out.print("The difference of the sum of principal diagonal and reversed diagonal is: "+q);

    }
}