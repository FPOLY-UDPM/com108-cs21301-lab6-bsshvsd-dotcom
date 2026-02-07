/******************************************************************************
 * Họ và tên: [Võ Quốc Thịnh]
 * MSSV:      [PS48006]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

// Hàm hoán vị hai số nguyên (sử dụng con trỏ)
void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng giảm dần
void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu phần tử đứng sau lớn hơn phần tử đứng trước thì đổi chỗ
            if (arr[j] > arr[i]) {
                hoanVi(&arr[i], &arr[j]);
            }
        }
    }
}

// Hàm xuất mảng
void xuatMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) return 0;

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nMang truoc khi sap xep: ");
    xuatMang(a, n);

    // Gọi hàm sắp xếp
    sapXepGiamDan(a, n);

    printf("Mang sau khi sap xep giam dan: ");
    xuatMang(a, n);

    return 0;
}

