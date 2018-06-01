//textbook question camera

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>


class camera
{
int modelno;
int zoom;
char details[20];

public:
int getno() {return modelno;}
void enter()
{
cout<<"\n modelno, zoom, details";
cin>>modelno>>zoom;
gets(details);
}
void display()
{
cout<<"modelno \t zoom \t details";
cout<<modelno<<"\t"<<zoom<<"\t"<<details;
}
}c;


void main()
{
clrscr();
ofstream fout;           char ch='y';
fout.open("camera.dat",ios::out);
do
{
cout<<"\n enter details";
c.enter();
fout.write((char*)&c,sizeof(c));
cout<<"\n do you want to continue?";
cin>>ch;
}while(ch=='y'||ch=='Y');
fout.close();
ifstream fin;
fin.open("camera.dat",ios::in);
cout<<"\n enter model no to be searched"; int m;
cin>>m;
fin.seekg(0);
while(fin.read((char*)&c,sizeof(c)))
{
if(m==c.getno())
c.display();
};
getch();
}