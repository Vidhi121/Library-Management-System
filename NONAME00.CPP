#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream.h>

void main()
{
clrscr();
char cha[50];
ofstream f1;
f1.open("avv.txt",ios::out);
cout<<"\n Enter line";
gets(cha);
f1<<cha;
f1.close();

int flag=0;
ifstream f2;
f2.open("avv.txt",ios::in);
while(f2)
{
f2.get(cha);
int i=cha;
if(i>63&&i<91 || i>96&&i<123)
flag++;
}
f2.close();
if(flag==0)
cout<<"\n No alphabets!";
else
cout<<"\n There are "<<flag<<" alphabets";
}