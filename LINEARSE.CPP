//linear search
#include<iostream.h>
#include<conio.h>
int lsearch(int [],int, int);
void main()
{
clrscr();
int a[50],i,j,b;
cout<<"\n Enter no. of elements (max 50):";
cin>>b;
cout<<"\n Enter elements of array:";
for(i=0;i<b;i++)
cin>>a[i];
cout<<"\n Enter element to be searched:";
cin>>j;
cout<<"\n Running program for linear search";
lsearch(a,b,j);
getch();
}

lsearch(int r[],int size,int item)
{
int flag=0;
for(int y=0;y<size;y++)
{
if(r[y]==item)
{
cout<<"\n Element found at position"<<y+1;
flag++;
}
}
if(flag==0)
cout<<"\n Element not found!";
else
cout<<"\n Search finished!";
getch();
}