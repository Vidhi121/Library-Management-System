#include<iostream.h>
#include<conio.h>

struct node
{
int info;
node* next;
}*start,*rear,*save,*ptr,*newptr;
node* cnn(int);
void insert(node*);
void display(node*);

void main()
{
clrscr();
start=rear=NULL;
int inf; char ch;
while(ch=='y'||ch=='Y')
{
cout<<"\n enter information:";
cin>>inf;
cout<<"\n creating new node";
newptr=cnn(inf);
cout<<"\n inserting node...";
insert(newptr);
cout<<"\n displaying...";
display(start);
getch();
cout<<"\n do you want to continue";
cin>>ch;
}
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

void display(node *np)
{
cout<<np->info;
np=np->next;
cout<<endl;
}