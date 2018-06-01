//Q4
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void search(int [],int,int);

void main()
{
clrscr();
int ar[50],b,i,j;

cout<<"\n enter size of array";
cin>>b;
cout<<"\n enter elements of array";
for(i=0;i<b;i++)
cin>>ar[i];

cout<<"\n enter element to be searched  ";
cin>>j;
cout<<"\n beginning program for searching...";
search(ar,b,j);
getch();
}

void search(int a[50],int size,int ele)
{
int flag=0,pos;
for(int j=0;j<size;j++)
{
if(a[j]==ele)
{
flag++; pos=j+1;
}
}
cout<<"\n element found at position "<<pos;
getch();
}
