//to count number of this
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>

void main()
{
clrscr();
char line[50];
ofstream fout;
fout.open("avv.dat",ios::out);
cout<<"\n Enter string to be inserted into file";
gets(line);
fout<<line<<'\n';
fout.close();

char a[50]; int flag=0;
ifstream fin;
fin.open("avv.dat",ios::in);
fin.seekg(0);
while(!fin.eof())
{
fin>>a;
if(strcmp(a,"this")==0)
flag++;
}
fin.close();

if(flag==0)
cout<<"\n No word starting with 's'";
else
cout<<"\n Required words occur "<<flag<<" times";
getch();
}
