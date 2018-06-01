//insertion into end
#include<iostream.h>
#include<conio.h>
#include<process.h>

struct node
{int info;
node* next;
}*save,*start,*rear,*newptr,*ptr;

node* cnn(int);
void insert(node*);
void display(node*);

void main()
{
start=rear=NULL;
clrscr();
char ch='y'; int inf;
do{
cout<<"\n enter data for new node:";
cin>>inf;
cout<<"\n creating new node...";
newptr=cnn(inf);
cout<<"\n inserting into list...";
insert(newptr);
cout<<"\n the list is now \n";
display(start);
getch();
cout<<"\n do you want to continue?";
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
cout<<np->info<<"\n";
np=np->next;
}
}
