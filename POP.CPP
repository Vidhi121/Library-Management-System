//popping
#include<iostream.h>
#include<conio.h>

void push(int[],int&,int);
void display(int[],int);
void pop(int[],int&);

void main()
{
clrscr();
int stack[50],top=-1,item;
char ch='y';
do
{
cout<<"\n enter element for insertion";
cin>>item;
push(stack,top,item);
cout<<"\n item pushed!";
cout<<"\n the stack is now:";
display(stack,top);
cout<<"\n do you want to continue?";
cin>>ch;
}while(ch=='y'||ch=='Y');

cout<<"\n beginning program for popping...";
do
{
pop(stack,top);
cout<<"\n the stack is now:";
display(stack,top);
cout<<"\n do you want to continue?";
cin>>ch;
}while(ch=='y'||ch=='Y');
}

void push(int a[50],int& beg,int ele)
{
beg++;
a[beg]=ele;
}

void display(int stack[50],int top)
{
for(int i=top;i>=0;i--)
cout<<"\n"<<stack[i]<<"->";
}

void pop(int stack[50],int& top)
{
cout<<"\n element deleted is"<<stack[top];
top--;
}