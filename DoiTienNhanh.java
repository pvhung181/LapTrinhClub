package main;

import java.util.Scanner;

public class DoiTienNhanh {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int res = 0;
		int m[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200,100};
		for(int i = 0; i < 12; i++) {
			int q = n / m[i];
			res += q;
			n -= (q * m[i]);
		}
		System.out.print((n > 0) ? -1 : res);
		sc.close();
	}
}
