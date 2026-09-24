#include <stdio.h>
int main() {
    float a, b;
    float x;    
    printf("Nhap he so a (a != 0 ): ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    x = -b / a;
    printf("Nghiem cua phuong trinh la: %.2f\n", x);
    return 0;
}