#include <stdio.h>
#define size 100
int top = -1;
int stack[size];

void Push(int x){
    stack[++top] = x;
    return;
}
void Pop(){
	top--;
	return;
}
void Display(){
	int i;
	printf("stack : ");
	for(i=0;i<=size-1;i++){
		printf("%d\t",stack[i]);
	}
}

int main(){
	int t=1,y;
	while(t==0){
		int ch;
	    printf("1.push,2.pop,3.display,4.exit\n");
	    scanf("%d",&ch);
	    switch(ch){
	    	case 1:
	    	    printf("enter element to add");
	    	    scanf("%d",&y);
	    	    Push(y);
	    	    break;
	    	case 2:
	    	    Pop();
	    	    break;
	    	case 3:
	    	    Display();
	    	    break;
	    	case 4:
	    	    t=1;
	    	    break;
	    	default:
	    	    printf("enter valid choice\n");
	    	    break;
	    }

	}
}