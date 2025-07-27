#include <stdio.h>

int main() {
    char name[50], designation[50], empNo[50];
    float salary, da, hra, ta, tax, net;

    printf("Enter name, designation, employee number: ");
    scanf("%s %s %s", name, designation, empNo);

    printf("Enter salary, DA, HRA, TA (in %): ");
    scanf("%f %f %f %f", &salary, &da, &hra, &ta);

    da = salary * da / 100;
    hra = salary * hra / 100;
    ta = salary * ta / 100;

    if (salary < 300000) tax = 0;
    else if (salary < 700000) tax = salary * 0.05;
    else if (salary < 1000000) tax = salary * 0.1;
    else tax = salary * 0.15;

    net = salary + da + hra + ta - tax;

    printf("Name: %s\nDesignation: %s\nEmployee No: %s\n", name, designation, empNo);
    printf("Net Salary: %.2f\n", net);

    return 0;
}

