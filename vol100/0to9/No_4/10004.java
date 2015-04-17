import java.util.*;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[3];
		for (int i = 0; i < 3; i++) {
			int a = sc.nextInt();
			arr[i] = a;
		}
		Arrays.sort(arr);
		for (int i = 0; i < 2; i++) {
			System.out.print(arr[i] + " ");
		}
		System.out.println(arr[2]);
	}
}
