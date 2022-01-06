#include <stdio.h>
void main()
{
    int x, y;
    printf("Enter the values for X and Y\n");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("Point  lies in the first quandrant\n");
    else if (x < 0 && y > 0)
        printf("Point lies in the Second quandrant\n");
    else if (x < 0 && y < 0)
        printf("Point lies in the third quandrant\n");
    else if (x > 0 && y < 0)
        printf("Point lies in the fourth quandrant\n");
    else if (x == 0 && y == 0)
        printf("Point lies at the origin\n");
}



#include <stdio.h>
int main()
{
int cp,sp, amt;
printf("Enter cost price: ");
scanf("%d", &cp);
printf("Enter selling price: ");
scanf("%d", &sp);
if(sp > cp)
{
amt = sp - cp;
printf("Profit = %d", amt);
}
else if(cp > sp)
{
amt = cp - sp;
printf("Loss = %d", amt);
}
else
{
printf("No Profit No Loss.");
}
return 0;
}



#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if (n1 >= n2)
    {
        if (n1 >= n3)
            printf("%.2lf is the largest number.", n1);
        else
            printf("%.2lf is the largest number.", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.", n3);
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter Two Integers\n");
    scanf("%d %d", &a, &b);
    switch (a > b)
    {
    case 1:
        printf("%d is Maximum", a);
        break;
    case 0:
        printf("%d is maximum", b);
        break;
    }
    return 0;
}


#include <stdio.h>
void main()

{
    int car = 10, bus = 20, bi = 5, noofhours, fine = 0;
    char n;
    printf("Please enter vehicle details c-car b-bus and B-bike :-");
    scanf("%c", &n);
    printf("Please enter no of hours");
    scanf("%d", &noofhours);
    if (n == 'c')
    {
        fine = car * noofhours;
    }
    else if (n == 'b')
    {
        fine = bus * noofhours;
    }
    else if (n == 'B')
    {
        fine = bi * noofhours;
    }
    printf("%d", fine);
}


#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }
    return 0;
}



#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1)
        {
            if ((side1 + side3) > side2)
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}


#include <stdio.h>
int main()
{
int phy, chem, bio, math, comp;
float percentage;
printf("Enter five subjects marks: ");
scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);
percentage = (phy + chem + bio + math + comp) / 5;
printf("Percentage = %.2f\n", percentage);
if(percentage >= 90)
{
printf("Grade A");
}
else if(percentage >= 80)
{
printf("Grade B");
}
else if(percentage >= 70)
{
printf("Grade C");
}
else if(percentage >= 60)
{
printf("Grade D");
}
else if(percentage >= 40)
{
printf("Grade E");
}
else
{
printf("Grade F");
}
return 0;
}



#include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);

if (year % 400 == 0) {

printf("%d is a leap year.", year);
}

else if (year % 100 == 0) {
printf("%d is not a leap year.", year);
}
else if (year % 4 == 0) {
printf("%d is a leap year.", year);
}
else {
printf("%d is not a leap year.", year);
}
return 0;
}




#include <stdio.h>
int main()
{
int unit;
float amt, total_amt, sur_charge;
printf("Enter total units consumed: ");
scanf("%d", &unit);
if(unit <= 50)
{
amt = unit * 0.50;
}
else if(unit <= 150)
{

amt = 25 + ((unit-50) * 0.75);
}
else if(unit <= 250)
{
amt = 100 + ((unit-150) * 1.20);
}
else
{
amt = 220 + ((unit-250) * 1.50);
}
sur_charge = amt * 0.20;
total_amt = amt + sur_charge;
printf("Electricity bill = Rs. %.2f", total_amt);
return 0;
}



#include <stdio.h>
int main()
{
    int x, y, z, total;
    printf("Enter the marks for all three subjects");
    scanf("%d %d %d", &x, &y, &z);
    total = x + y + z / 3;
    if (x >= 65 && y >= 55 && z >= 50 && total >= 180)
        printf("Admission Granted");
    else
        printf("Admission not granted");
    return 0;
}

