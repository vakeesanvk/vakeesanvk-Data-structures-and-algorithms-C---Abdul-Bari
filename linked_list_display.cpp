/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first;
void create(int a[], int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
int main()
{
    int a[]={3,5,7,10,15};
    create(a,5);
    display(first);
    return 0;
}
