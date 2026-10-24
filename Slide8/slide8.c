#include <stdio.h>
int main () {
     struct sinhvien {
        char* mssv;
        char* tensv;
        float diem;
     } sv1;
       
        printf("Nhap mssv: ");
        gets(sv1.mssv);
        printf("Nhap ten sv: ");
        gets(sv1.tensv);
        printf("Nhap diem sv: ");
        scanf("%f", &sv1.diem);
        printf("MSSV: %s\n", sv1.mssv);
        printf("Ten SV: %s\n", sv1.tensv);
        printf("Diem: %.2f\n", sv1.diem);

    return 0;
}