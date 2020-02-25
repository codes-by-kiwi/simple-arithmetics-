/*
Write a program which does the following:

1. assigns 17 to x and 4 to y,
2. prints the values of x and y,
3. computes the sum of x and y,
4. computes the product of x and y,
5. computes the difference of x and y,
6.computes the divison of x and y,
7. computes the remainder of the div of x and y,
8. prints all these results with the division being in float 

*/



#include <stdio.h>
int main()
{
int x=17,y= 4,sum,difference,remainder,product;
product= x * y ; //calculates product
sum= x + y ; // calculates sum
difference= x - y ; //calculates difference 
float divide; 
divide= (float) x / y; //calculates division and casts the answer to float 
remainder= x % y; //calculates remainder 
printf("x=%d\n", x); //prints x
printf("y=%d\n", y); // prints y
printf("sum=%d\n", sum); //prints the sum
printf("product=%d\n", product); //prints the product 
printf("difference=%d\n", difference); // prints the diff
printf("division=%f\n", divide); // prints the division in float 
printf("remainder of division=%d\n", remainder); // prints remainder 


return 0;
}

/* x=17
y=4
sum=21
product=68
difference=13
division=4.25
remainder=1
*/
