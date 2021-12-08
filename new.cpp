#include<iostream>

using namespace std;

class node{

public:

  int data;

  node* next;

  node(int d)

  {

    data=d;

    next=NULL;

  }

};

node *createll(int n){

int x;

node *head=NULL;

node *tail=NULL;

for(int i=0;i<n;i++)

{

  cin>>x;

    node *n=new node(x);

    if(head==NULL)

    {

      head=n;

      tail=n;

    }

  else

  {

    tail->next=n;

    tail=tail->next;

  }

}

return head;

}

void display(node *head)

{

  node *temp=head;

  while(temp!=NULL)

  {

    cout<<temp->data<<"-->";

    temp=temp->next;

  }

cout<<endl;

}

int countrepetition(node *head,int num,int count)

{

  if(head->next==NULL)

    return count;

  if(head->data==num)

  {

    count++;

  }

  count=countrepetition(head->next,num,count);

  return count;

}

int main()

{

  int n;

  cin>>n;

  node *head=createll(n);

  cout<<"Our linked list is:"<<endl;

  display(head);

  int num;

  cin>>num;

  int count=countrepetition(head,num,0);

  cout<<num<<" occurs "<<count<<" times ";

}