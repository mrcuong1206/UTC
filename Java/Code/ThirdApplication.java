package week_01;

/*
 * Cho mảng số nguyên a, hãy tính tổng các phần tử lẻ
 * Tính trung bình cộng các phần tử lẻ
 */
public class ThirdApplication {

	public static void main(String[] args) {
		// 3.1 Khai báo biến
		int[] a = { -1, 1, 3, 2, 10, 15, 18 };
		int S = 0;
		int count = 0;

		// 3.2 Bỏ qua - nhập dữ liệu

		// 3.3 Algorithms
		for (int i = 0; i < a.length; i++) {
			if (!(a[i] % 2 == 0)) {
				S += a[i];
				count++;
			}
		}

		if (count == 0) {
			System.out.println("Không tồn tại phần tử thỏa mãn!");
		} else {
			// 3.4 Xuất kết quả
			System.out.println("Tổng các phần tử lẻ S = " + S);
			System.out.println("Trung bình công các phần tử lẻ S = " + (float)S/count);
		}

	}

}
