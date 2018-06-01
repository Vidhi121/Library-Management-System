//insertion in array
#include<iostream.h>
#include<conio.h>
void insert(int [],int,int);
void main()
{
clrscr();
int a[50],b,i;
cout<<"\n enter no of elements (max 50)";
cin>>b;
cout<<"\n enter elements";
for(i=0;i<b;i++)
cin>>a[i];
cout<<"\n enter element to be inserted";
int j;
cin>>j;
cout<<"\n running program for insertion";
insert(a,b,j);
getch();
}

void insert(int ar[],int size,int item)
{
for(int t=0;t<size;t++)
{
if(ar[t-1]<=item&&ar[t]>=item)
{
for(int y=size-1;y>=t;y--)
ar[y+1]=ar[y];
ar[t]=item;
}
}

cout<<"\n the new array is";
for(int k=0;k<size+1;k++)
cout<<ar[k]<<"\n";
getch();
}
