//selection
#include<iostream.h>
#include<conio.h>
void sort(int [],int);
void main()
{
clrscr();
int a[50],b,i,j;
cout<<"\n enter size of array (max. 50)";
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
int small,pos,tmp;
for(int i=0;i<size-1;i++)
{
small=ar[i];
pos=i;
for(int j=i+1;j<size;j++)
{
if(ar[j]<small)
{
small=ar[j]; pos=j;
}
}
tmp=ar[i];
ar[i]=ar[pos];
ar[pos]=tmp;
}}