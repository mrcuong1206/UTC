package homeworks;

import java.util.Scanner;

public class ptrinhbac2 {
	public static void main(String[] args) {
//		3.1 Khai báo biến
		double a,b,c,x,x1,x2,delta;
		
//		3.2 Nhập dữ liệu
		Scanner sc = new Scanner (System.in);
		System.out.println("Nhap he so x^2");
		a = sc.nextDouble();
		System.out.println("Nhap he so x^1");
		b = sc.nextDouble();
		System.out.println("Nhap he so x^0");
		c = sc.nextDouble();
		
//		3.3 Xuất phương trình
		System.out.println("Phương trình vừa nhập là : " + a + "x^2 + " + b + "x + " + c + " =0");

//		3.4 Algorithms

		if (a == 0)
		{
			x = -c / b ;
			System.out.println("Phương trình vừa nhập là phương trình bậc 1");
			System.out.println("Nghiệm của phương trình là: " + x);
		}
		else
		{
			System.out.println("Phương trình vừa nhập là phương trình bậc 2");
			delta = Math.pow(b, 2) - 4 * a * c;
			System.out.println("DELTA = " + delta);
			if (delta < 0)
			{
				x = -b / (2*a);
				System.out.println("Phương trình vừa nhập có 2 nghiệm phức là:");
				System.out.println("x1: " + x + " + " + (double)Math.sqrt(Math.abs(delta))/(2*a) + "i");
				System.out.println("x2: " + x + " - " + (double)Math.sqrt(Math.abs(delta))/(2*a) + "i");
			}
			if (delta > 0)
			{
				x1 = (-b + Math.sqrt(delta)) / (2*a);
				x2 = (-b - Math.sqrt(delta)) / (2*a);
				System.out.println("Phương trình vừa nhập có 2 nghiệm thực là:");
				System.out.println("x1: " + x1);
				System.out.println("x2: " + x2);
			}
			if (delta == 0)
			{
				x = -b / (2*a);
				System.out.println("Phương trình vừa nhập có nghiệm kép x= " + x);
			}
		}
		
		sc.close();
	}

}
