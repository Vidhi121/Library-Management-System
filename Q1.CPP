//Q1
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
int inf; char ch='y';    start=NULL;
do
{
cout<<"\n enter element to be inserted:";
cin>>inf;
cout<<"\n creating node..";
newptr=cnn(inf);
cout<<"\n inserting into list";
insert(newptr);
cout<<"\n the list is now:";
display(start);
cout<<"\n do you want to continue?";
cin>>ch;
getch();
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

void display(node* np)
{
while(np!=NULL)
{
cout<<"\n"<<np->info;
np=np->next;
}
}

