//Q2
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node
{
int info;
node* next;
}*save,*start,*rear,*newptr,*ptr;

node* cnn(int);
void insert(node*);
void display(node*);

void main()
{
clrscr();      start=rear=NULL;
int inf;
char ch='y';
do{
cout<<"\n enter element for insertion:";
cin>>inf;
cout<<"\n creating new node";
newptr=cnn(inf);
cout<<"\n inserting into list";
insert(newptr);
cout<<"\n the array is";
display(start);
cout<<"\n continue?";
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
start=rear=np;
else
{
rear->next=np;
rear=np;
}
}

void display(node* np)
{
while(np!=NULL)
{
cout<<"\n"<<np->info<<"->";
np=np->next;
}
}
