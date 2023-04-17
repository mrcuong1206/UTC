package homeworks;

import java.util.Scanner;

public class mang {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		3.1 Khai báo biến
		int n, dem3=0 , s4=0 , a[];
		
//		3.2 Mảng
		Scanner sc = new Scanner (System.in);
		System.out.print("Nhập số phần tử của mảng: ");
		n = sc.nextInt();
		
//		3.2.1 Khởi tạo mảng
		a = new int[n];
		
//		3.2.2 Nhập các giá trị của mảng
		for (int i = 0 ; i < n ; i ++)
		{
			System.out.print("Nhập phần tử thứ " + (i+1) + ": ");
			a[i] = sc.nextInt();
		}
		
//		3.2.3 Xuất mảng
		System.out.print("Mảng các phần tử vừa nhập vào là: ");
		for (int i = 0 ; i < n ; i ++)
		{
			System.out.print(a[i] + " ");
		}
		
//		3.3 Không chia hết cho 3
		for (int i = 0 ; i < n ; i ++)
		{
			if (a[i] > 0 && a[i] % 3 != 0)
			{
				dem3++;
			}
		}
		System.out.print("\nSố phần tử dương không chia hết cho 3 là: " + dem3 + "\n");
		System.out.print("Các phần tử dương không chia hết cho 3: ");
		for (int i = 0 ; i < n ; i ++)
		{
			if (a[i] > 0 && a[i] % 3 != 0)
			{
				System.out.print(a[i] + " ");
			}
		}
		
//		3.4 Tổng các phần tử trong khoảng [-5,25]
		for (int i = 0 ; i < n ; i++)
		{
			if (a[i] >= -5 && a[i] <= 25)
			{
				s4+=a[i];
			}
		}
		System.out.print("\nTổng các phần tử nằm trong khoảng [-5;25] là: " + s4 + "\n");
		
//		3.5 Phần tử lớn nhất trong dãy chia hết cho 3
		int max5 = a[1], dem5=0;
		for (int i = 0 ; i < n ; i ++)
		{
			if (a[i] % 3 == 0)
			{
				max5 = a[i];
				dem5++;
			}
		}
//		System.out.println("Max5: " + max5);
		if (dem5 == 0)
			System.out.println("Dãy trên không có phần tử nào chia hết cho 3");
		else
		{
			for (int i = 0 ; i < n ; i ++)
			{
				if (a[i] % 3 == 0 && a[i] > max5)
				{
					max5 = a[i];
				}
			}
			for (int i = 0 ; i < n ; i ++)
			{
				if (a[i] == max5)
					System.out.println("Phần tử lớn nhất trong dãy chia hết cho 3 là: "+ max5);
			}
		}

//		3.6 Sắp xếp dãy số để có các phần tử có giá trị tuyệt đối tăng dần
		for (int i = 0 ; i < n - 1 ; i ++)
		{
			for (int j = i + 1 ; j < n ; j ++)
			{
				if (Math.abs(a[i]) > Math.abs(a[j]))
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		System.out.print("Dãy số đã sắp xếp theo thứ tự tăng dần của giá trị tuyệt đối: ");
		for (int i = 0 ; i < n ; i ++)
		{
			System.out.print(+ a[i] + " ");
		}

//		3.7 Loại bỏ các phần tử chia hết cho 5 nhưng không chia hết cho 3 khỏi dãy số
		int c = 0;
		for (int i = 0 ; i < n ; i ++)
		{
			if (!(a[i] % 5 == 0 && a[i] % 3 != 0))
			{
				a[c] = a[i];
				c++;
			}
//			123 145 -12 20 512 32
		}
		n = c;
		System.out.print("\nDãy không có phần tử chia hết cho 5 nhưng không chia hết cho 3 là: ");
		for (int i = 0 ; i < n ; i++)
		{
			System.out.print(a[i] + " ");
		}
	sc.close();
	}

}
