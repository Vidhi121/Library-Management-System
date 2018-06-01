#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{
clrscr();
cout<<"\n MAIN MENU";
cout<<"\n 1. area of circle";
cout<<"\n 2. area of rectangle";
cout<<"\n 3. area of square";
cout<<"\n enter your choice: ";
int ch;
float area;
cin>>ch;

switch(ch)
{
case 1:
int r;
cout<<"\n enter radius";
cin>>r;
area=3.14*r*r;
cout<<"\n area="<<area;
getch();
break;

case 2:
int l,b;
cout<<"\n enter length";
cin>>l;
cout<<"\n enter breadth:";
cin>>b;
area=l*b;
cout<<"\n area="<<area;
getch();
break;

case 3:
int a;
cout<<"\n enter side";
cin>>a;
area=a*a;
cout<<"\n area="<<area;
getch();
break;

}
