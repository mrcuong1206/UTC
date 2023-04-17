package week_01;

import java.util.Scanner;

/*
 * Bài toán: tính diện tích và chu vi hình tròn thông qua bán kính
 */
public class FirstApplication {
	// Khai báo hằng số PI
	public static final double PI = 3.14;

	public static void main(String[] args) {
		// 3.1 Khai báo biến
		double r;
		double S, C;

		// 3.2 Nhập dữ liệu
		Scanner sc = new Scanner(System.in);
		System.out.print("Nhập bán kính r = ");
		r = sc.nextDouble();

		// 3.3 Algorithms
		C = 2.0 * PI * r;
		S = PI * r * r;

		// 3.4 Xuất dữ liệu
		System.out.println("Chu vi C = " + C);
		System.out.println("Diện tích S = " + S);

		// Chú ý: nếu dùng scanner thì phải close
		sc.close();
	}

}
