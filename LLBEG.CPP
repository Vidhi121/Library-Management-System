//insertion into beginning
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node
{
int info;
node* next;
}*save,*start,*newptr,*ptr;

node* cnn(int);
void insert(node*);
void display(node*);

void main()
{
clrscr();
start=NULL; int inf; char ch='y';
do
{
cout<<"\n enter data for new node";
cin>>inf;
cout<<"\n creating new node";
newptr=cnn(inf);
cout<<"\n inserting..";
insert(newptr);
cout<<"\n linked list is..";
display(start);
getch();
cout<<"\n enter more?";
cin>>ch;
}while(ch=='y'||ch=='Y');

}

node* cnn(int n)
{
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr;
}

void insert(node* np)
{
if(start==NULL)
start=np;
else
{
save=start;
start=np;
np->next=save;
}
}
void display(node*np)
{
while(np!=NULL)
{
cout<<"\n"<<np->info;
np=np->next;
}}