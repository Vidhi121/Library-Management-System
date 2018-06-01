//details of flight
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
class flight
{
int fno;
char from[20];
char to[20];
public:
char* getfrom()
{return from;}
char* getto()
{return to;}
void enter()
{cout<<"\n flight no, from, to";
cin>>fno; gets(from); gets(to);}
void display()
{cout<<fno; cout<<from; cout<<to;}
}f;

void main()
{
clrscr();
cout<<"\n enter details of flight";
f.enter();
ofstream fout;
fout.open("flight.dat",ios::out);
fout.write((char*)&f,sizeof(f));
fout.close();

ifstream fin;
fin.open("flight.dat",ios::in);
fin.seekg(0);
while(fin.read((char*)&f,sizeof(f)))
{
if(strcmpi(f.getto(),"Mumbai")==0)
f.display();
};
fin.close();                    getch();
}