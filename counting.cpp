#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

void main()
{
clrscr();
char line[50];
ofstream f1;
f1.open("avv.txt",ios::out);
cout<<"\n Enter Line";
gets(line);
f1<<line<<'\n';
f1.close();
int flag=0;
ifstream f2;
f2.open("avv.txt",ios::in);
while(f2>>line)
{


if(strcmpi(line,"the")==0)
{
flag++;
}
}
f2.close();
if(flag==0)
cout<<"\n No such word in file";
if(flag!=0)
cout<<"\n The word 'the' occurs "<<flag<<" times in file";
getch();
}



