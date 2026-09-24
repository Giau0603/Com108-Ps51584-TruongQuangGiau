#include <stdio.h>
int main() {
    float diemToan, diemLy, diemHoa, diemTrungBinh;
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);
    diemTrungBinh = (diemToan * 3 + diemLy * 2 + diemHoa) / 6;
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);
    return 0;
}