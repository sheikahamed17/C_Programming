#include<stdio.h>
void push(char element,char stack[],int*top,int stackSize)
{
    if(*top==-1)
    {
        stack[stackSize-1]=element;//stack[3]="a"
        *top=stackSize-1;//4-1=3
        printf("top value in 1st push operation:%d\n",*top);
    }
    else if(*top==0){
        printf("The stack is already full.\n");
    }
    else{
        stack[(*top)-1]=element;//stack[2]="b"
        (*top)--;
        printf("top 2nd push operation:%d\n",*top);
    }
}
void pop(char stack[],int*top,int stackSize){
    if(*top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("top value before popping B:%d\n",*top);//top=2
        printf("Element popped:%c\n",stack[(*top)]);//b
        //If the element popped was the last element in the stack
        //then set top to-1 to show that the stack is empty
        if((*top)==stackSize-1){//top=4-1=3
            (*top)=-1;
        }
        else{
            (*top)++;
            printf("top after popping operation B:%d\n",*top);
        }
    }
}
int main(){
    int stackSize=4;
    char stack[stackSize];
    //A negative index shows that the stack is empty
    int top=-1;
    push('a',stack,&top,stackSize);//TOP
    printf("Element on top:%c\n",stack[top]);
    push('b',stack,&top,stackSize);//TOP
    printf("Element on top:%c\n",stack[top]);
    pop(stack,&top,stackSize);//POPPED
    printf("Element remaining in the stack:%c\n",stack[top]);
    pop(stack,&top,stackSize);//POPPED
    printf("At last Top Value:%d\n",top);
    pop(stack,&top,stackSize);
    return 0;
}
