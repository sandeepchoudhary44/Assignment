#include<stdio.h>
int main()
{
float basicpay, hra, ta, GrossSalary,
ProffesionalTax, NetSalary;

  printf("Enter Basic Pay:");
  scanf("%f", &basicpay);

  hra=0.10*basicpay;
  ta=0.05*basicpay;

GrossSalary = basicpay+hra+ta;
ProffesionalTax = 0.02*GrossSalary;
NetSalary = GrossSalary-ProffesionalTax;

printf("Basic Pav = %f",basicpay);
printf("HRA = %f",hra);
printf("TA = %f",ta);
printf("Gross salary = %f",GrossSalary);
printf("Proffesional tax = %f",ProffesionalTax);
printf("Net salary = %f",NetSalary);
}
