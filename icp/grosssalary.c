#include <stdio.h>
int main() 
{
    float basicSalary, hra, da, grossSalary;
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    
    hra = basicSalary * 20/100;
    da = basicSalary * 80/100;
    
    grossSalary = basicSalary + hra + da;
    
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", grossSalary);
    
    return 0;

}
