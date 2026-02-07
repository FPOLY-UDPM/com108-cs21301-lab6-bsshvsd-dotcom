/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

// Hàm tìm giá trị lớn nhất
int timMax(int arr[], int n) {
    int max = arr[0]; // Giả sử phần tử đầu là lớn nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Cập nhật max nếu tìm thấy số lớn hơn
        }
    }
    return max;
}

// Hàm tìm giá trị nhỏ nhất
int timMin(int arr[], int n) {
    int min = arr[0]; // Giả sử phần tử đầu là nhỏ nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Cập nhật min nếu tìm thấy số nhỏ hơn
        }
    }
    return min;
}

int main() {
    int n;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu khong hop le!");
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Gọi hàm và xuất kết quả
    int max = timMax(a, n);
    int min = timMin(a, n);

    printf("\n--- Ket qua ---\n");
    printf("Gia tri lon nhat (Max): %d\n", max);
    printf("Gia tri nho nhat (Min): %d\n", min);

    return 0;
}
