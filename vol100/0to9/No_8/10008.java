import java.util.*;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		double a = sc.nextDouble();
		double b = sc.nextDouble();
		
		int d = (int)a / (int)b;
		int r = (int)a % (int)b;
		double f = a / b;
		System.out.printf("%d %d %.6f", d, r, f);
	}
}
