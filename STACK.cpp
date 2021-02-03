#include<iostream>
using namespace std;
//stack in chuoi string nguoc
const int MAX = 1000;
struct Stack{
    char items[MAX];
    int top;
};
typedef Stack st;

void createStack(st *s){
    s->top = -1;
}
bool isFull(st *s){
    if(s->top==MAX-1) return true;
    else return false;
}
bool isEmpty(st*s){
    if(s->top==-1) return true;
    else return false;
}
void push(st *s, char newItem){
    if(isFull(s)){
        cout << "STACK FULL";
    } else {
        s->top++;
        s->items[s->top] = newItem;
    }
}
char getTop(st*s, char getItem){
    {
        getItem = s->items[s->top];
        s->top--;
    }
    return getItem;
}
int main(){
    st *s = new st;
    createStack(s);
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); ++i){
        push(s, str[i]);
    }
    for(int i = str.length(); i >= 0; --i){
        cout << getTop(s, str[i]);
    }
}

