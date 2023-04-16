package main;

import java.util.Scanner;

public class Main {
	
	public static long sol() {
		Scanner sc = new Scanner(System.in);
		long k = sc.nextLong(), res = 1;
		if(k % 2 == 1) return 0;
		for(int i = 1; i <= 30; i++) {
			res *= 2;
			if(res == k) return k;
		}
		return 0;
	}
	
	public static void main(String[] args) {
		System.out.print(sol());
	}
}