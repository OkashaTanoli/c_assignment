#include <stdio.h>
#include <conio.h>

// a

// int main()
//{
//     int salary, gross, dearness, rent;
//     printf("Enter Your Salary: ");
//     scanf("%d", &salary);
//     dearness = (40 * salary) / 100;
//     rent = (20 * salary) / 100;
//     gross = salary + dearness + rent;
//     printf("Your Gross Salary : %d", gross);
//     return 0;
// }

// b

// int main(){
//	float distance,meter,centimeter,feet,inches;
//	printf("Enter Distance in KM : ");
//	scanf("%f",&distance);
//	meter = distance * 1000;
//	feet = distance * 3280.84;
//	inches = distance * 39370.1;
//	centimeter = distance * 100000;
//	printf("\nDistance in Meters : %0.1f",meter);
//	printf("\nDistance in Feets : %0.1f",feet);
//	printf("\nDistance in Inches : %0.1f",inches);
//	printf("\nDistance in Centimeter : %0.1f",centimeter);
//	return 0;
//
// }

// c

// int main()
//{
//     int english, computer, urdu, phy, maths, total;
//     float percentage;
//     printf("\nEnter maths marks : ");
//     scanf("%d", &maths);
//     printf("\nEnter english marks : ");
//     scanf("%d", &english);
//     printf("\nEnter urdu marks : ");
//     scanf("%d", &urdu);
//     printf("\nEnter physics marks : ");
//     scanf("%d", &phy);
//     printf("\nEnter computer marks : ");
//     scanf("%d", &computer);
//     total = english + maths + urdu + computer + phy;
//     percentage = (total * 100) / 500;
//
//     printf("\nTotal Marks : %d", total);
//     printf("\nPercentage : %0.2f %", percentage);
//     return 0;
// }

// d

// int main()
// {
//     int fahrenheit, celcius;
//     printf("Enter Temperature in Fahrenheit : ");
//     scanf("%d", &fahrenheit);
//     celcius = (fahrenheit - 32) * 5 / 9;
//     printf("Celcius : %dC", celcius);
//     return 0;
// }

// e

// int main()
//{
//     float length, breath, radius, area, perimeter, circumference;
//     printf("\nEnter Length of Rectangle :");
//     scanf("%f", &length);
//     printf("\nEnter Breath of Rectangle :");
//     scanf("%f", &breath);
//     printf("\nEnter Radius of Circle :");
//     scanf("%f", &radius);
//     area = length * breath;
//     perimeter = 2 * (length + breath);
//     circumference = 2 * 3.14 * radius;
//     printf("\nArea of Rectangle : %0.2f", area);
//     printf("\nPerimeter of Rectangle : %0.2f", perimeter);
//     printf("\nCircumference of circle : %0.2f", circumference);
//     return 0;
// }

// f

// int main()
// {
//     int c, d, e;
//     printf("\n Enter the number at location C :");
//     scanf("%d", &c);
//     printf("\n Enter the number at location D :");
//     scanf("%d", &d);
//     e = c;
//     c = d;
//     d = e;
//     printf("\n New Number at location C = % d", c);
//     printf("\n New Number at location D = % d", d);
//     return 0;
// }

// g

// int main()
// {
//     int num, a, b, c, d, e;
//     printf("Enter a five digit number : ");
//     scanf("%d", &num);
//     e = num % 10;
//     d = (num / 10) % 10;
//     c = (num / 100) % 10;
//     b = (num / 1000) % 10;
//     a = (num / 10000);
//     printf("\n%d is the sum of the digits of the number %d.", a + b + c + d + e, num);
//     return 0;
// }

// h

// int main()
// {
//     int number = 0, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n != 0)
//     {
//         number = number * 10;
//         number = n % 10 + number;
//         n = n / 10;
//     }
//     printf("%d", number);
//     return 0;
// }

// i

// int main(){
//     int num, a, b;
//     printf("Enter a four digit number : ");
//     scanf("%d", &num);
//     a = num % 10;
//     b = (num / 1000);
//     printf("\n%d is the sum of first and last digit of the number %d.", a + b, num);
//     return 0;
// }

// j

// int main()
// {
//    int population, literatePeople,literateWomen,literateMen;
//    population = 80000;
//    literatePeople = (48 * population) / 100;
//    literateMen = (35 * literatePeople)/48;
//    literateWomen = (13 * literatePeople)/48;
//    printf("Litarate Men : %d" , literateMen);
//    printf("\nLitarate Women : %d" , literateWomen);
//    return 0;
// }

// k

// int main()
// {
//     int amount, ten, fifty, hundred;
//     printf("\nEnter total amount to be withdrawn (100, 110, 120, .... , 10000): ");
//     scanf("%d", &amount);
//     if (amount < 100)
//     {
//         printf("Amount should be greater than 100");
//         return;
//     }
//     if (amount > 10000)
//     {
//         printf("Amount should be less than 10000");
//         return;
//     }
//     if (amount % 10 != 0)
//     {
//         printf("We Dont have coins, we have minimun note of 10");
//         return;
//     }
//     hundred = amount / 100;
//     amount = amount % 100;
//     fifty = amount / 50;
//     amount = amount % 50;
//     ten = amount / 10;

//     printf("\nNumber of RS:100 notes : %d", hundred);
//     printf("\nNumber of RS:50 notes : %d", fifty);
//     printf("\nNumber of RS:10 notes : %d", ten);
//     return 0;
// }

// l

// int main()
// {
//     int selligPrice, profit;
//     float eachCost,totalCost;
//     printf("Enter Total Selling Price of 15 Items : ");
//     scanf("%d", &selligPrice);
//     printf("Enter Total Profit of Those Items : ");
//     scanf("%d", &profit);
//     totalCost = selligPrice - profit;
//     eachCost = totalCost / 15;j
//     printf("Total Cost of Each Item : %0.2f", eachCost);
//     return 0;
// }

// m

// int main()

// {
//     int num, a, b, c, d, e;
//     printf("Enter a five digit number : ");
//     scanf("%d", &num);
//     e = (num % 10) + 1;
//     d = ((num / 10) % 10) + 1;
//     c = ((num / 100) % 10) + 1;
//     b = ((num / 1000) % 10) + 1;
//     a = (num / 10000) + 1;

//     e = e == 10 ? 0 : e;
//     d = d == 10 ? 0 : d;
//     c = c == 10 ? 0 : c;
//     b = b == 10 ? 0 : b;
//     printf("\n%d%d%d%d%d",a,b,c,d,e);
//     return 0;
// }
