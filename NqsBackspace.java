package main;

import java.text.CharacterIterator;
import java.text.StringCharacterIterator;
import java.util.LinkedList;
import java.util.Scanner;

public class NqsBackspace {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		LinkedList<Character> ls = new LinkedList<>();
		CharacterIterator it = new StringCharacterIterator(str);
		while(it.current() != CharacterIterator.DONE) {
			if(it.current() == '#') {
				if(ls.size() != 0) ls.pollLast();
			}
			else ls.addLast(it.current());
			it.next();
		}
		
		for(Character ch : ls) System.out.print(ch);
		sc.close();
	}
}
