//selection sort
#include<iostream.h>
#include<conio.h>
void selsort(int[],int);
void main()
{
clrscr();
int ar[50],size;
cout<<"\n Enter size of array:";
cin>>size;
cout<<"\n Enter elements of array:";
for(int i=0;i<size;i++)
cin>>ar[i];
cout<<"\n BEGINNING SORTING...";
selsort(ar,size);
cout<<"\n The sorted array is:";
for(int l=0;l<size;l++)
cout<<ar[l]<<endl;
getch();
}

void selsort(int ar[50],int n)
{
int small,pos,o,tmp;
for(o=0;o<n-1;o++)
{
small=ar[o];
pos=o;
for(int t=o+1;t<n;t++)
{
if(ar[t]<=small)
{
small=ar[t]; pos=t;
}

tmp=ar[o];
ar[o]=ar[pos];
ar[pos]=tmp;
}
}
}
