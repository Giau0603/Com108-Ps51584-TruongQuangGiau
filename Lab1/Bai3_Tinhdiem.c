#include <stdio.h>
int main()
{
  char mssv[10] = "PS51584";
  char fullName[20] = "Truong Quang Giau";
  float toan = 6;
  float ly = 6.5;
  float hoa = 7;

  float dtb = ((toan * 2) + ly + hoa) / (float)4;

  printf("Ma so sinh vien: %s\n", mssv);
  printf("Ho va ten: %s\n", fullName);
  printf("Diem trung binh: %.2f\n", dtb);

  return 0;
}