//pushing
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
void push(int[],int&,int);
void display(int[],int);
int size=50;
void main()
{
int stack[50],item,top=-1;
char ch='y';
clrscr();
do
{
cout<<"\n enter element for insertion:";
cin>>item;
push(stack,top,item);
cout<<"\n the stack is now:";
display(stack,top);
cout<<"\n continue?";
cin>>ch;
}while(ch=='y'||ch=='Y');
}

void push(int a[50],int& beg,int index)
{
beg++;
a[beg]=index;
}

void display(int a[50],int be)
{
for(int i=be;i>=0;i--)
cout<<"\n "<<a[i];
}

