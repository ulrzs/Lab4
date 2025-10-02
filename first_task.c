/* Task description:

Write functions that receive a real number parameter, and return:

    cube() – its third power,
    absolute() – its absolute value (there is a fabs() library function but do not use it this time)! 

Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

*/
#include <stdio.h>
#include <math.h>

double cube(double x)//<-- Function header, input parameters and output type in this form oType NAME(iType1 iName1,iType2 iName2,...)
{//here starts what to do
    return x*x*x;
//reurn with the result of the funcion (if any)
}//that closes the function

/*Write the other functions here:*/
double absval(double x){
    if(x<0){
        return -1.0*x;
    }
    else{
        return x;
    }
}

int main() //main is a function!
{
//call the functions in a loop to print the results in the required manner
    for (double i=-1;i<=1;i=i+0.1){
        printf("%.4f\t%.4f\t%.4f\t%.4f\n",i,cube(i),absval(i),sin(i));
    }
  return 0; //it returns an integer (as promised in the header) which is 0 for now!
}
