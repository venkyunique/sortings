#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
}*head,*temp,*newnode;
void insert_begin();
void insert_middle();
void insert_end();
void delete_begin();
void delete_middle();
void delete_end();
void print_();
int main(){
	int n;
	while(1){
		printf("\n1.insert at begin\n2.insert at middle\n3.insert at end\n4.delete at begin\n5.delete at middle\n6.delete at end\n7.print\n");
		scanf("%d",&n);
		switch(n){
			case 1:insert_begin();break;
			case 2:insert_middle();break;
			case 3:insert_end();break;
			case 4:delete_begin();break;
			case 5:delete_middle();break;
			case 6:delete_end();break;
			case 7:print_();break;
			default:printf("choose correct option\n");
		}
	}
}
void insert_begin(){
	int data;
	printf("enter value:");
	scanf("%d",&data);
	newnode=(struct node *)malloc(sizeof(struct node*));
	newnode->value=data;
	newnode->next=NULL;
	if(head==NULL)
		head=newnode;
	else{
		newnode->next=head;
		head=newnode;
	}
}
void insert_middle(){
	int data,pos,i;
	printf("enter value:");
	scanf("%d",&data);
	printf("enter position:");
	scanf("%d",&pos);
	newnode=(struct node *)malloc(sizeof(struct node*));
	newnode->value=data;
	temp=head;
	for(i=2;i<pos;i++){
		if(temp->next!=NULL){
			temp=temp->next;
		}
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void insert_end(){
	int data;
	printf("enter value:");
	scanf("%d",&data);
	newnode=(struct node *)malloc(sizeof(struct node *));
	newnode->value=data;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void delete_begin(){
	if(head==NULL) printf("empty\n");
	else{
		head=head->next;
	}
}
void delete_middle(){
	int pos,i;
	printf("enter position:");
	scanf("%d",&pos);
	if(head==NULL) printf("empty\n");
	else{
	temp=head;
	for(i=0;i<pos-1;i++){
		temp=temp->next;
	}
	temp->next=temp->next->next;
}
}
void delete_end(){
	if(head==NULL) printf("empty\n");
	else{
		temp=head;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		temp->next=NULL;
	}
}
void print_(){
	if(head==NULL) printf("NULL\n");
	else{
	temp=head;
	while(temp!=NULL){
		printf("%d-->",temp->value);
		temp=temp->next;
	}
}
}
