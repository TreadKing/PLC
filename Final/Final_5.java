/**Devang Patel
 * PLC final Question 5
 */

import java.util.*;
public class Final_5{
    public static void main(String[] args){
       int j;
       int i;
       int n = 3;
       int[][] x = {{1,2,3}, {0,0,0}, {23,51,74}};

       for(i = 0; i< n; i++){
           for(j = 0; j <n; j++){
               if(x[i][j] == 0)
                   j++;

               else 
                   break;
           }
       if(j == n)
           System.out.println("Firat all zero row is at row: " + i);
       }
       
    }

}
