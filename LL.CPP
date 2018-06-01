
#include<iostream.h>
#include<conio.h>

struct node
{
int info;
node* next;
}*start,*newptr,*save,*ptr;
node* cnn(int);
void insert(node*);
void display(node*);

void main()
{
clrscr();
int inf;
char ch='y';

while(ch=='y'||ch=='Y')
{
cout<<"\n enter information:";
cin>>inf;
cout<<"\n creating new node...";
newptr=cnn(inf);
cout<<"\n inserting into beginning";
insert(newptr);
cout<<"\n new list is:";
display(start);
cout<<"\n do you want to continue?";
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
cout<<np->info<<endl;
np=np->next;
}
getch();
}
