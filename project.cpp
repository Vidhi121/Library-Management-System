#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

char password[50]="password";
char mn[50];

class issue
	{
	private:
	char namep[30];
	char bookn[50];
	int bookno;
	int issuedate;
	int returndate;
	char status;

	public:
	void getdata();
	void putdata();
	char returns()
	{ return status;}
	int returnd()
	{ return bookno; }
	}i;

void issue::getdata()
{
cout<<"\n Enter name of person issuing book: ";
gets(namep);
cout<<"\n Enter book name: ";
gets(bookn);
cout<<"\n Enter book number: ";
cin>>bookno;
cout<<"\n Enter issue date: ";
cin>>issuedate;
returndate = issuedate+7;
status='s';
}

void issue::putdata()
{
cout<<"\n The name of the person is: "<<namep;
cout<<"\n The name of the book is: "<<bookn;
cout<<"\n The book no. is: "<<bookno;
cout<<"\n The issue date is: "<<issuedate;
cout<<"\n The return date is: "<<returndate;
}

class book
	{
	private:
	char bookname[50];
	char author[50];
	int no;

	public:
	void getbook();
	void displaybook();
	int returnb()
	{ return no; }
	}b;

void book::getbook()
{
cout<<"\n Enter name of book: ";
gets(bookname);
cout<<"\n Enter name of author: ";
gets(author);
cout<<"\n Enter book number: ";
cin>>no;
}

void book::displaybook()
{
cout<<"\n Book: "<<bookname;
cout<<"\n Author: "<<author;
cout<<"\n Book No.: "<<no;
}

void main()
{
clrscr();
int ch,flag=0,o;
char k='y',r='y';
int ch1;
do
{
clrscr();

cout<<"\n \t \t \t \t Login As:";
cout<<"\n\n \t \t \t 1. Administration";
cout<<"\n\n \t \t \t 2. Student";
cout<<"\n\n \t \t \t 3. Exit";
cout<<"\n\n \t \t \t Enter your choice: ";
cin>>ch1;
char hk[50];
switch(ch1)
{

case 1:
cout<<"\n Enter password: ";
gets(hk);
if(strcmp(password,hk)==0)
{
clrscr();
do
{
clrscr();
cout<<"\n \n \t \t \t Administarion Menu";
cout<<"\n \n\t \t 1. Issue a book ";
cout<<"\n \n\t \t 2. Display issued books ";
cout<<"\n \n\t \t 3. Enter new book";
cout<<"\n \n\t \t 4. Display all books";
cout<<"\n \n\t \t 5. Display a particular book";
cout<<"\n \n\t \t 6. Edit the record of an issued book";
cout<<"\n \n\t \t 7. Edit the record of a stored book";
cout<<"\n \n\t \t 8. Delete the record of an issued book";
cout<<"\n \n\t \t 9. Delete the record of a stored book";
cout<<"\n \n\t \t 10. Go to Main menu ";
cout<<"\n\n \t Enter your choice: ";
cin>>ch;

switch(ch)
{


	//issue a book
	case 1:
	clrscr();
	ofstream fout;
	fout.open("issue.dat",ios::out);
	do
	{
	i.getdata();
	fout.write((char*)&i,sizeof i);
	cout<<"\n Do you want to continue?";
	cin>>k;
	}while(k=='y'||k=='Y');
	fout.close();

	break;




	//display issued books
	case 2:
	clrscr();
	ifstream fin;
	int yu=0;
	fin.open("issue.dat",ios::in);
	fin.seekg(0);
	while(fin.read((char*)&i,sizeof i))
	{
	if(i.returns()=='s')
	{
	i.putdata();
	yu++;
	}
	}
	if(yu==0)
	cout<<"\n No books issued! ";
	getch();
	fin.close();
	break;





	//enter new book
	case 3:

	clrscr();

	ofstream f2;
	f2.open("book.dat",ios::out);
	do
	{
	b.getbook();
	f2.write((char*)&b,sizeof b);
	cout<<"\n Do you want to continue?";
	cin>>r;
	}while(r=='y'||r=='Y');
	f2.close();

	break;





	//display all books in library
	case 4:
	clrscr();
	ifstream f4;
	f4.open("book.dat",ios::out);
	f4.seekg(0);
	while(f4.read((char*)&b, sizeof b))
	{

	b.displaybook();
	}
	f4.close();
	getch();
	break;






	//display particular book
	case 5:

	clrscr();
	ifstream f5;
	f5.open("book.dat",ios::out);
	f5.seekg(0);
	int n;
	cout<<"\n Enter book number of required book: ";
	cin>>n;
	while(f5.read((char*)&b, sizeof b))
	{

	if(b.returnb()==n)
	{
	b.displaybook();
	flag=1;
	getch();
	}
	}
	if(flag==0)
	{
	cout<<"\n Book not found! ";
	getch();
	}

	f5.close();
	break;





	//edit issued book
	case 6:
	clrscr();
	int f,q=0;
	int d;
	cout<<"\n Enter no. of book you want to edit: ";
	cin>>f;
	fstream f6;
	f6.open("issue.dat",ios::out|ios::in);
	f6.seekg(0);

	while(f6.read((char*)& i,sizeof i))
	{
	int x=f6.tellg();
	if(i.returnd()==f)
	{
	i.getdata();
	f6.seekg(x-sizeof(i));
	cout<<"\n File edited!";
	getch();
	f6.write((char*)&i,sizeof(i));
	q=1;
	}

	}
	f6.close();
	if(q==0)
	cout<<"\n Book does not exist!";
	getch();
	break;





	//edit library book
	case 7:
	clrscr();
	int h,l=0;
	int z;
	cout<<"\n Enter the no. of the book you want to edit: ";
	cin>>h;
	fstream f7;
	f7.open("book.dat",ios::out|ios::in);
	f7.seekg(0);
	while(f7.read((char*)&b,sizeof b))
	{

	if(b.returnb()==h)
	{
	b.getbook();
	z=f7.tellg();
	f7.seekg(z-sizeof(b));
	f7.write((char*)&b,sizeof b);
	l=1;
	}
	}
	if(l==0)
	cout<<"\n Book not found!";
	getch();
	f7.close();

	break;




	//delete issued book
	case 8:
	clrscr();
	int last=0;
	ifstream fi8;
	ofstream fo8;
	fi8.open("issue.dat",ios::in);
	fo8.open("temp.dat",ios::out);
	int jk;
	cout<<"\n Enter no. of book you want to delete: ";
	cin>>jk;
	while(fi8.read((char*)&i,sizeof(i)))
	{
	if(i.returnd()==jk)
	{
	cout<<"\n File deleted!";
	last++;
	}
	else
	fo8.write((char*)& i,sizeof(i));
	}
	if(last==0)
	cout<<"\n Record not found";
	fi8.close();
	fo8.close();
	remove("issue.dat");
	rename("temp.dat","issue.dat");
	getch();

	break;






	//delete stored book
	case 9:

	clrscr();

	int las=0;
	ifstream fi9;
	ofstream fo9;
	fi9.open("book.dat",ios::in);
	fo9.open("tempy.dat",ios::out);
	cout<<"\n Enter no. of book you want to delete: ";
	cin>>jk;
	while(fi9.read((char*)&b,sizeof(b)))
	{
	if(b.returnb()==jk)
	{
	cout<<"\n Record deleted!";
	las++;
	}
	else
	fo9.write((char*)& b,sizeof(b));
	}
	if(las==0)
	cout<<"\n File not found";
	fi9.close();
	fo9.close();
	remove("book.dat");
	rename("tempy.dat","book.dat");


	getch();
	break;







}
}while(ch!=10);
}
else
cout<<"\n Wrong password. Access denied!";
getch();
break;

case 2:

do
{
clrscr();

cout<<"\n \t \t \t Student Menu";
cout<<"\n\n \t \t 1. Issue a book ";
cout<<"\n\n \t \t 2. Display issued books ";
cout<<"\n\n \t \t 3. Display all books ";
cout<<"\n\n \t \t 4. Display a particular book ";
cout<<"\n\n \t \t 5. Go to Main menu ";
cout<<"\n\n \t \t Enter your choice: ";
cin>>ch;

switch(ch)

	{


	//issue a book
	case 1:
	clrscr();
	ofstream fout;
	fout.open("issue.dat",ios::out);
	do
	{
	i.getdata();
	fout.write((char*)&i,sizeof i);
	cout<<"\n Do you want to continue?";
	cin>>k;
	}while(k=='y'||k=='Y');
	fout.close();

	break;




	//display issued books
	case 2:
	clrscr();
	ifstream fin;
	int yu=0;
	fin.open("issue.dat",ios::in);
	fin.seekg(0);
	while(fin.read((char*)&i,sizeof i))
	{
	if(i.returns()=='s')
	{
	i.putdata();
	yu++;
	}
	}
	if(yu==0)
	cout<<"\n No books issued!";
	getch();
	fin.close();
	break;



	//display all books
	case 3:
	clrscr();
	ifstream f4;
	f4.open("book.dat",ios::out);
	f4.seekg(0);
	while(f4.read((char*)&b, sizeof b))
	{

	b.displaybook();
	}
	f4.close();
	getch();
	break;



	//display a particular book
	case 4:
	clrscr();
	ifstream f5;
	f5.open("book.dat",ios::out);
	f5.seekg(0);
	int n;
	cout<<"\n Enter book number of required book: ";
	cin>>n;
	while(f5.read((char*)&b, sizeof b))
	{

	if(b.returnb()==n)
	{
	b.displaybook();
	flag=1;
	getch();
	}
	}
	if(flag==0)
	{
	cout<<"\n Book not found! ";
	getch();
	}

	f5.close();
	break;




	}

}while(ch!=5);
break;


}

}while(ch1!=3);
}
