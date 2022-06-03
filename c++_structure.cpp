/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h> //for strcpy(char *, const char *)function 
using namespace std;

struct rectangle
{
    int len;
    int wid;
};// need to add the ; here otherwise won't work

struct student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};
int main()
{
    //declaration
    struct rectangle r;
    //struct rectangle r={10,5} //declaration+inttialization
    r.len=15;
    r.wid=10;
    printf("Area of the Rectangle is %d",r.len*r.wid);
    
    struct student s1;
    s1.roll=10;
    strcpy(s1.name,"john");
    cout<<endl<<s1.name;
    struct student s2={10,"John"}; //using this we don't need strcpy fnction
    cout<<s2.name;

    return 0;
}
