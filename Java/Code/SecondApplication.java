package week_01;

/*
 * Tính tổng S = 1/(1+2) + 1/(2+3) + ... + 1/(n+n+1)
 * 
 * Nếu S > 0.7: hãy tính S^2
 */

public class SecondApplication {

	public static void main(String[] args) {
		// 3.1 Khai báo biến
		int n = 5;
		double S = 0.0;
		double sSquare = 0.0;

		// 3.2 Nhập dữ liệu: bỏ qua, dùng giá trị default.

		// 3.3 Algorithms
		for (int i = 1; i <= n; i++) {
			S = S + 1.0 / (i + i + 1);
		}
		
		if (S > 0.7){
			sSquare = Math.pow(S, 2.0);
			
			// 3.4 Xuất dữ liệu
			System.out.println("Giá trị tổng S = " + S);
			System.out.println("Giá trị tổng bình phương S square = " + sSquare);
		}else{
			System.out.println("Không tính được!");
		}
		

	}

}
