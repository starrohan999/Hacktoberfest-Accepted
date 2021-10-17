import java.util.*;
public class coprime_euler_phi 
{
    public static int GCD(int Num1, int Num2) 
    {
		int Temp, GCD = 0;
		while (Num2 != 0) 
        {
			Temp = Num2;
			Num2 = Num1 % Num2;
			Num1 = Temp;
		}
		GCD = Num1;
		return GCD;
	}
	public static void main(String[] args) 
    {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int c = 0;
		for (int i = 1; i < n; i++) 
        {
			if (GCD(i, n) == 1) 
            {
				c++;
			}
		}
		System.out.println(c);
		sc.close();
	}
}