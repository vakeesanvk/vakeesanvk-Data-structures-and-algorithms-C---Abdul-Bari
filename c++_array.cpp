/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int A[5];//intiating the std::array
    int B[5]={2,3,4,4,5};//can contain 5 or less than 5 elements or else no need give the 5 in []
    //if there is less number of values then - other values show 0 ,0 in their places
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",B[i]);//print all the elements - if you miss "" then it will give error for '' 
    }
    //another way like Python
    for(int x:B)
    {
        cout<< x <<endl;
    }
    //change the values
    A[0]=12;
    //size of an array
    printf("%ld",sizeof(A));//  not working for the %d only for %ld
    // creating different values in the emplty places as values not zero
    int n=4;
    int C[n];
    //C[n]={2,4,5} #will give error
    for (int y:C)
    {
        cout<<y<<endl;
    }
    return 0;
}

