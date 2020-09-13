import java.math.BigInteger;
import java.util.Scanner;


class Main {

	private static void printFact(int x) {
		BigInteger fact = BigInteger.ONE;
		for (int i = 2; i <= x; i++) 
			fact = fact.multiply(new BigInteger(Integer.toString(i)));
		
		System.out.println(fact.toString());
	}
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for (int i = 0; i < n; i++) {
			printFact(scan.nextInt());
		}
	}


}