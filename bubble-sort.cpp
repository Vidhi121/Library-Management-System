//bubble
#include<iostream.h>
#include<conio.h>
void sort(int[],int);
void main()
{
clrscr();
int a[50],b,i,j;
cout<<"\n enter size of array";
cin>>b;
cout<<"\n enter elements of array";
for(i=0;i<b;i++)
cin>>a[i];
cout<<"\n beginning program for sorting";
sort(a,b);
cout<<"\n new array is";
for(j=0;j<b;j++)
cout<<a[j]<<"\n";
getch();
}

void sort(int ar[],int size)
{
int tmp;
for(int i=0;i<size;i++)
{
for(int j=0;j<size-1;j++)
{
if(ar[j]>ar[j+1])
{
tmp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=tmp;
}
}
}}

