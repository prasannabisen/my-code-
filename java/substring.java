import java.util.*;
class substring {
	public static void sub(String s, int index, String curr) {
		int l = s.length();
		if (l == index) {
			System.out.print(curr + " ");
		}
		sub(s, index + 1, curr + s.charAt(index));
		sub(s, index + 1, curr);
	}
	public static void main(String args[]) {
		String s;
		Scanner sc = new Scanner(System.in);
		s = sc.nextLine();
		int l = s.length();
		sub(s, 0, "");

		// for (int i = 0; i < l; i++) {
		// 	System.out.println(s.charAt(i));
		// }
	}
}