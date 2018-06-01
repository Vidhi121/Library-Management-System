#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<fstream.h>
#include<stdio.h>

void main()
{
clrscr();
char a[50],b;
int i=0,j;
ofstream fout;
fout.open("avv.txt",ios::out);
cout<<"\n enter string ";
gets(a);
fout<<a<<"\n";
fout.close();

ifstream fin;
fin.open("avv.txt",ios::in);
fin.seekg(0);
while(!fin.eof())
{
fin>>b;
if(isalpha(b))
i++;
}
fin.close();
cout<<"\n there are "<<i<<" alphabets";
getch();
}
