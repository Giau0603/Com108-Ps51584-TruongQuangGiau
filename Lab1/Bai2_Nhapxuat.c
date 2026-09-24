#include <stdio.h>
int main()
{
  char mssv[10] = "PS51584";
  char fullName[20] = "Truong Quang Giau";
  int year = 2008;
  float dtb = 7.4;

  int age = 2026 - year;

  printf("Ma so sinh vien: %s\n", mssv);
  printf("Ho va ten: %s\n", fullName);
  printf("Nam sinh: %d\n", year);
  printf("Tuoi: %d\n", age);
  printf("Diem Trung Binh: %.2f\n", dtb);

  return 0;
}