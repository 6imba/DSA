#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}*save;

class linked_list
{
	private:
		node *head , *tail;
	public:
		linked_list()
		{
			head=NULL;
			tail=NULL;
		}
		
		void add_node(int i)
		{
			node *tmp=new node;
			tmp->data=i;
			tmp->next=NULL;
			if(head==NULL)
			{
				head=tmp;
				tail=tmp;
			}
			else
			{
				save=head;
				head=tmp;
				tmp->next=save;
			}
		}
		
		void display()
		{
			node *tmp;
			tmp=head;
			while(tmp!=NULL)
			{
				cout<<tmp->data<<"->";
				tmp=tmp->next;
			}
		}
};

int main()
{
	int i;
	linked_list a;
	char ch='y';
	while(ch=='y'|| ch=='Y')
	{
		cout<<"Enter the number to insert in linked list"<<endl;
		cin>>i;
		a.add_node(i);
		cout<<"Want to insert more node(y/Y)?"<<endl;
		cin>>ch;
	}
	a.display();
	return 0;
}
