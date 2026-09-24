#include <stdio.h>
#define PI 3.14159
 int main() {
    float chieu_dai, chieu_rong, ban_kinh;
    float chu_vi_hcn, dien_tich_hcn;
    float chu_vi_hinhtron, dien_tich_hinhtron;     
    
     printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieu_dai);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieu_rong);
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &ban_kinh);
    
    chu_vi_hcn =  2 * (chieu_dai + chieu_rong);
    dien_tich_hcn = chieu_dai * chieu_rong;
    chu_vi_hinhtron = 2 * PI * ban_kinh;
    dien_tich_hinhtron = PI * ban_kinh * ban_kinh;
    
    printf("Chu vi hinh chu nhat: %.2f\n", chu_vi_hcn);
    printf("Dien tich hinh chu nhat: %.2f\n", dien_tich_hcn);
    printf("Chu vi hinh tron: %.2f\n", chu_vi_hinhtron);
    printf("Dien tich hinh tron: %.2f\n", dien_tich_hinhtron);
  
    return 0;
 }