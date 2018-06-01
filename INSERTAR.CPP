#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int ar[50],item,i,n,index,pos;
cout<<"\n Enter size of array (max 50) ";
cin>>n;
cout<<"\n Enter elements of array: ";
for(i=0;i<n;i++)
cin>>ar[i];
cout<<"\n Enter element to be inserted:";
cin>>item;
int p;
for(i=n;i>0;i--)
{
if(ar[i-2]<item&&ar[i-1]>item)
p=i;
if(ar[i-1]>item)
ar[i]=ar[i-1];

//and
ar[p-1]=item;
}

cout<<"\n The new array is: ";
for(i=0;i<n+1;i++)
cout<<ar[i]<<endl;
getch();

}


