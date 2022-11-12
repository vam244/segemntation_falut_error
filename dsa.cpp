#include<iostream>
using namespace std;
class stack{
    public:
    int top=-1;
    int* arr;
    int size;
};
void push(int a,stack* s){
s->top++;
s->arr[s->top]=a;
}
void pop(stack*s){
    cout<<s->arr[s->top]<<endl;
    free(s->arr);
    s->top--;
}
int main(){
stack* s;
s->size=100;
s->arr=new int[s->size];
push(3,s);
push(4,s);
push(5,s);
push(6,s);
push(7,s);
pop(s);
pop(s);
pop(s);

    return 0;
}