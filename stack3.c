#include<stdio.h>
int top=-1;
int max;
int stack[100];
int data;

void pop();
int peek();
void display();
void push();

int peek(){
if(top==-1){
	printf("\nStack Underflow\n");
	return 1;
	}
	else
		return stack[top];
}

void push(){
	if(top==max-1){
		printf("\nStack Overflow\n");
		}
	else{
		printf("\nEnter element to insert in stack:");
		scanf("%d",&data);
		top++;
		stack[top]=data;
		printf("\nEntered element %d inserted\n",data);
		}
}

void pop()
{
if(top==-1){
	printf("\nStack Underflow\n");
	}
else{
	data=stack[top];
	top--;
	printf("\nDeleted element :%d\n",data);
	}
}

void display(){
	int i;
	printf("\n Stack elements:\t");
	for(i=0;i<=top;i++){
		printf("%d\t",stack[i]);
		}
}

int main(){
	int i=0,n;
	printf("Enter size of stack:");
	scanf("%d",&max);

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


