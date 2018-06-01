//Q3
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

void main()
{
clrscr();
char a[50];
cout<<"\n enter string:";
gets(a);
ofstream fout;
fout.open("this.dat",ios::out);
fout<<a<<"\n";
fout.close();
int flag=0;
char b[50];
ifstream fin;
fin.open("this.dat",ios::in);
fin.seekg(0);
while(!fin.eof())
{
fin>>b;
if(b[0]=='a')
flag++;
for(int i=0;i<50;i++)
{
if(b[i]==' ')
{
if(b[i+1]=='a')
flag++;}}
}
fin.close();

cout<<"\n the number of words starting with 'a' are "<<flag;
getch();
}
