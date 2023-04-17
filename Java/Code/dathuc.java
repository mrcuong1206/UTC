package homeworks;

import java.util.Scanner;

public class dathuc {
//	3.1 Tính giai thừa 
	public static long giaithua(int n)
	{
		if (n > 1)
			return n * giaithua(n - 1);
		else
			return 1;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		3.2 Khai báo biến
		double S = 1,x;
		int n;
		
//		3.3 Nhập dữ liệu
		Scanner sc = new Scanner (System.in);
		System.out.println("Nhập số phần tử n của dãy:");
		n = sc.nextInt();
		System.out.println("Nhập giá trị x của dãy:");
		x = sc.nextDouble();
//		3.4 Algorithms
		for (int i = 1 ; i <= n ; i ++)
		{
			S += (giaithua(n) * Math.pow(x, i)) / (giaithua(i) * giaithua(n-i))	; 
		}
		
//		3.5 Xuất kết quả
		System.out.println("Kết quả S = " + S);
		sc.close();
	}

}
