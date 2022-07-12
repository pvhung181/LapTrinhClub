import java.util.*;
public class MaHoaChuiThe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int n = sc.nextInt();
        String[] words = str.split(" ");
        String[] sensitive = new String[n];
        for(int i = 0; i < n; i++)
            sensitive[i] = sc.next();
        for(String w:words)
        {
            if(Arrays.asList(sensitive).contains(w))
            {
                for(int i = 0; i < w.length();i++)
                    System.out.print('*');
                System.out.print(' ');
            }
            else {
                System.out.print(w + ' ');
            }

        }
    }

}
