import java.util.*;
public class XuLyDonHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<String, Integer> Hm = new HashMap<String, Integer>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        for (int i = 0; i < n; i++) {
            String str = sc.next();
            int x = sc.nextInt();
            Hm.put(str, x);
        }
        int res = 0;
        for (int i = 0; i < m; i++) {
            String q = sc.next();
            if (Hm.containsKey(q))  res += Hm.get(q);
        }
        System.out.println(res);
    }
}
