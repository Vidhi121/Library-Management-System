//pass values using pointers
#include<iostream.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
clrscr();
int a,b;
cout<<"\n ENTER VALUE OF A";
cin>>a;
cout<<"\n ENTER VALUE OF B";
cin>>b;
clrscr();
cout<<"\n Originally...";
cout<<"value of a"<<a<<endl;
cout<<"value of b"<<b<<endl;
getch();
swap(&a,&b);
cout<<"\n Finally...";
cout<<"value of a"<<a<<endl;
cout<<"value of b"<<b<<endl;
getch();
}

void swap(int *x,int *y)
{
int *tmp;
*tmp=*x;
*x=*y;
*y=*tmp
;
}