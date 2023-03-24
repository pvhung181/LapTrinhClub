package main;

import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

public class XayThapChanLe {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		TreeSet<Long> ts = new TreeSet<>(Collections.reverseOrder());
		for(int i = 0; i < n; i++) ts.add(sc.nextLong());
		Iterator<Long> it = ts.iterator();
		long s = it.next();
		long flag = s % 2;
		while(it.hasNext()) {
			long tmp = it.next();
			if(tmp % 2 == flag) continue;
			
			flag = Math.abs(flag - 1);
			s += tmp;
		}
		System.out.println(s);
		sc.close();
	}
}
