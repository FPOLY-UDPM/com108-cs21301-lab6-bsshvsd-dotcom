/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

// Hàm tính trung bình cộng các số chia hết cho 3
float tinhTrungBinhChiaHetCho3(int arr[], int n) {
    int tong = 0;
    int dem = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            tong += arr[i];
            dem++;
        }
    }

    // Kiểm tra tránh lỗi chia cho 0 nếu không có số nào chia hết cho 3
    if (dem == 0) {
        return 0;
    }

    return (float)tong / dem; // Ép kiểu float để có kết quả thập phân chính xác
}

int main() {
    int n;

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int a[n];

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Gọi hàm và in kết quả
    float ketQua = tinhTrungBinhChiaHetCho3(a, n);

    if (ketQua == 0) {
        printf("\nKhong co so nao trong mang chia het cho 3.\n");
    } else {
        printf("\nTrung binh cac so chia het cho 3 la: %.2f\n", ketQua);
    }

    return 0;
}