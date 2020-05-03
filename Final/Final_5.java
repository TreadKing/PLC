/**Devang Patel
 * PLC final Question 5
 */

 import java.util.*;
 public class Final_5{
     public static void main(String[] args){

        int n = 3;
        int[][] x = {{1,2,3}, {0,0,0}, {23,51,74}};

        for(int i = 0; i<= n; i++){
            for(int j = 0; j <=n; j++){
                if(x[i][j] != 0){
                    break;
                else if(j == n)
                    System.out.println("First all-zero row is: " + i);
                }
            }
        }

     }
 }