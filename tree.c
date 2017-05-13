#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *root=NULL;
int count =0;

struct node* insert(struct node*, int);
void displayinorder(struct node*);

int main(){
	int value,choice;
	printf("\n --- Binary search tree---\n");
	while(1){
	printf("\n1-insert\t2-displayInOrder\t3-exit\t\n");
	printf("\nenter your choice\n");
	scanf("%d",&choice);
    switch(choice){
    	case 1:
    	    printf("\nenter value to add\n");
    	    scanf("%d",&value);
    	    root=insert(root,value);
    	    break;
    	case 2:
    	    displayinorder(root);
    	    break;
    	case 3:
    	    exit(0);
    	    break;
    	default:
    	    printf("\nenter correct choice\n");
    	    break;
    }
    }
}

struct node* insert(struct node* root,int value){
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=value;
	if(root==NULL){
		newnode->left=newnode->right=NULL;
	    root=newnode;
	    count++;
	}
	else{
		if((count%2)!=0)
			if(root->data>value)
				root->left=insert(root->left,value) ;
			else
				root->right=insert(root->right,value) ;
		else
			if(root->data>value)
				root->left=insert(root->left,value) ;
			else
				root->right=insert(root->right,value) ;
    }
	return root;
}

void displayinorder(struct node* root){
	if(root!=NULL){
		displayinorder(root->left);
	    printf("-%d-",root->data);
	    displayinorder(root->right);
	}
}
