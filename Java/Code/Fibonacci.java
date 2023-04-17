package homeworks;

import java.util.Scanner;

public class Fibonacci {
//		3.1 Thuật toán tìm số fibonacci
	    public static int fibonacci(int n) 
	    {
	        if (n < 0) 
	        {
	            return -1;
	        } 
	        else if (n == 0 || n == 1) 
	        {
	            return n;
	        } 
	        else 
	        {
	            return fibonacci(n - 1) + fibonacci(n - 2);
	        }
	    }	    
	    
	    public static void main(String[] args) {
//	    	3.2 Khai báo biến
	    	int n;
//	    	3.3 Nhập dữ liệu
	    	Scanner sc = new Scanner (System.in);
	    	System.out.println("Nhập phần tử fibonacci muốn tìm kiếm");
	    	n = sc.nextInt();

//	    	3.4 Xuất dãy fibonacci 
	        System.out.print("Dãy " + (n) + " số fibonacci: ");
	        for (int i = 1 ; i <= n ; i ++ ) 
	        {
	            System.out.print(fibonacci(i) + " ");
	        }
	        System.out.println("\nGiá trị phần tử thứ " + (n) + " của dãy: " + fibonacci(n));

//	        3.5 Tìm phần tử fibonacci có giá trị gần với n nhất

//	        3.5.1 Khai báo biến
	    	int min = Math.abs(fibonacci(1) - n) ;
	    	int fibo = 0;
	        
//	        3.5.1 Algorithms
	        for (int i = 1 ; i <= n ; i ++ ) 
	        {
	        	if ( min > Math.abs(fibonacci(i) - n))
	        		{
	        			min = Math.abs(fibonacci(i) - n);
	        			fibo = fibonacci(i);
	        		}
	        	
	        }

//	        3.5.2 Xuất kết quả
	        System.out.println("Phần tử fibonacci có giá trị gần với n nhất là: " + fibo);
	        sc.close();
	    }
	   

}
