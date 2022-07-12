import java.util.Scanner;

public class PhanLoaiDongVat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String []str = new String[3];
        for(int i = 0; i < 3; i++)
            str[i] = sc.nextLine();
        if(str[0].equals("vertebrado"))
        {
            if(str[1].equals("ave"))
            {
                if(str[2].equals("carnivoro"))
                    System.out.println("aguia");
                else
                    System.out.println("pomba");
            }
            else {
                if(str[2].equals("onivoro"))
                    System.out.println("homem");
                else
                    System.out.println("vaca");
            }
        }
        else
        {
            if(str[1].equals("inseto"))
            {
                if(str[2].equals("hematofago"))
                    System.out.println("pulga");
                else
                    System.out.println("lagarta");
            }
            else {
                if(str[2].equals("hematofago"))
                    System.out.println("sanguessuga");
                else System.out.println("minhoca");
            }
        }
    }

}
