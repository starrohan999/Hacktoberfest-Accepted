import java.util.*;

class Main {
static int primeNum(int arr[], int n) {

	int max = Arrays.stream(arr).max().getAsInt();

	Vector<Boolean> prime = new Vector<>(max + 1);
	for(int i = 0; i < max + 1; i++)
		prime.add(i,Boolean.TRUE);

	prime.add(0,Boolean.FALSE);
	prime.add(1,Boolean.FALSE);

	for (int p = 2; p * p <= max; p++) {

		if (prime.get(p) == true) {
			for (int i = p * 2; i <= max; i += p)
				prime.add(i,Boolean.FALSE);
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		if (prime.get(arr[i]))
			sum += arr[i];

	return sum;
}

public static void main(String[] args)
{
    Scanner sc = new Scanner(System.in);
    int size = sc.nextInt();

	int arr[] = new int[size];

    for (int i=0; i<size; i++) {
        arr[i] = sc.nextInt();
    }

	System.out.print(primeNum(arr, size));
}
}
