//binary search
#include<iostream.h>
#include<conio.h>
int search(int [],int,int);
void main()
{
clrscr();
int a[50],b,i,j;
cout<<"\n Enter array size (max 50)";
cin>>b;
cout<<"\n Enter elements of array:(WARNING:enter sorted array)";
for(i=0;i<b;i++)
cin>>a[i];
cout<<"\n Enter element to be searched";
cin>>j;
cout<<"\n Running program for binary search...";
search(a,b,j);
getch();
}

search(int ar[],int size, int item)
{
int flag=0;  int h;
int beg=0,last,mid;
last=size-1;
while(beg<=last)
{
mid=(beg+last)/2;
if(ar[mid]==item)
{h=mid; flag++;}
if(ar[mid]>item)
last=mid-1;
else
beg=mid+1;
}

if(flag==0)
cout<<"\n Element not found!";
else
cout<<"\n Element found at position "<<h+1;
getch();
}
