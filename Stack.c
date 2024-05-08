#include<stdio.h>
#define Max_Stack 5

int top = -1;
int stack[];;

void push(int value){
if(top==Max_Stack-1){
    printf("Overflow\n");
}
else{
    top++;
    stack[top]=value;
}
}

void pop(){
if(top==-1){
    printf("Underflow\n");
}
else{
    top--;
}
}

void display(){
    if(top==-1){
        printf("Stack is Emty\n");
    }
    else {

for(int i=0; i<Max_Stack; i++){
printf("%d ",stack[i]);
}
}
}

int main(){
push(5);
push(36);
push(55);
push(66);
push(4);
push(6);
display();

return 0;
}

