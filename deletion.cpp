//deletion
#include<iostream.h>
#include<conio.h>

void del(int[],int,int);
void main()
{
clrscr();
int a[50],b,i,j;
cout<<"\n enter size of array (max 50)";
cin>>b;
cout<<"\n enter elements";
for(i=0;i<b;i++)
cin>>a[i];
cout<<"\n enter element to be deleted";
cin>>j;
cout<<"\n running program for deletion";
del(a,b,j);
getch();
}

void del(int ar[],int size,int item)
{
for(int i=0;i<size;i++)
{
if(ar[i]==item)
{
for(int r=i;r<size;r++)
ar[r]=ar[r+1];
}
}
cout<<"\n deleted!";
cout<<"\n new array is";
for(int u=0;u<size-1;u++)
cout<<ar[u]<<"\n";
getch();
}
