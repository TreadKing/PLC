package Final;
import java.util.*;
public class Final_6_nested {
    public static void main(String[] args){

        int a;
        int b;
        int c;

        int min = 0;
        int mid = 0;
        int max = 0;

        Scanner scan = new Scanner(System.in);
        System.out.println("Please enter three integer values: ");

        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();

        if(a > b){
            if(a > c){
                if(b > c){
                    min = c;
                    mid = b;
                    max = a;
                }
                else{
                    min = b;
                    mid = c;
                    max = a;
                }
            }
        }

        if()
    }
}