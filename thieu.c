#include <stdio.h>

// Định nghĩa chương trình con để tính tổng của hai số nguyên
int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("nhap so nguyen: ");
    scanf("%d %d", &x, &y);

    // Gọi chương trình con để tính tổng và lưu kết quả
    int ketQua = tinhTong(x, y);
    printf("tong cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}
