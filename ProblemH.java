/*
	Author: Amir Aghazadeh

*/

import java.util.Arrays;
import java.util.Scanner;

public class ProblemH {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		char[] chars = scan.next().toCharArray();

		char[] charsTemp = new char[chars.length - (chars.length) / 2];
		int j = -1;
		for (int i = 0; i < chars.length; i++)
			if (chars[i] != '+') charsTemp[++j] = chars[i];
		Arrays.sort(charsTemp);

		j = 0;
		for (int i = 0; i < charsTemp.length; i++) {
			chars[j] = charsTemp[i];
			j += 2;
		}
		System.out.println(String.valueOf(chars));
	}
}