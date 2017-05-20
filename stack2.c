#include <stdio.h>


struct Node{
	int data;
	int Node* link;
};
struct Node* top = NULL; 

void Push(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
	temp->data = x;
	temp->link = top;
	top = temp;
}
void Pop(){
	struct Node *temp;
	if(top==NULL)
		printf("stack is empty\n");
	else
		temp = top;
	    top = top->link;
	    free(temp);
}

int main(){
	int i=0,n;

	while(i==0){
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		printf("\nEnter choice:");
		scanf("%d",&n);
 
		switch(n){
    		case 1: 
        		push();
        		break;
    		case 2:  
        		pop();
        		break;
    		case 3: 
        		display();
				break;
			case 4: 
				i=1;
 				break;
			default: 
				printf("Enter valid choice");
   				break;
        }
    }
}
