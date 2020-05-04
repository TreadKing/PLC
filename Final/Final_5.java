//Devang Patel
//PLC Final Question 5

import java.util.*; 
public class Final_5 {
	public static void main(String[] args) {
		
		int i; int j; int n = 3; 
		
		int[][] x = {{1,2,3}, {0, 0, 0,},{10, 40, 49,}};
		

		for( i = 0; i <= n; i++) {
			for(j = 0; j < n;) {
				if(x[i][j] == 0) 
					j++;
				
				else 
					break;
				
			}
			if(j == n) {
				System.out.print("Fist row with the all zeros: Row " + i);
				break;
			} 
			else {}
		
		}
		 
	}
}