#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int *val;
int maxr,maxc,i,j;
cout<<"\n Enter dimensions: ";
cin>>maxr>>maxc;
val=new int [maxr*maxc];

for(i=0;i<maxr;i++)
{
cout<<"\n Enter elements of row "<<i+1;
for(j=0;j<maxc;j++)
{
cin>>val[i*maxc+j];
}
}
clrscr();
for(i=0;i<maxr;i++)
{
for(j=0;j<maxc;j++)
cout<<val[i*maxc+j];
cout<<endl;
getch();
}
}
