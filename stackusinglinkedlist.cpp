#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data = val;
        next=NULL;
    }
};
class stack{
    Node *top;
    public:
    stack():top(NULL){}
    void push(int val){
        Node *new_node=new Node(val);
        new_node->next=top;
        top=new_node;

    }
    void pop(){
        if(top==NULL){
            cout<<"underflow \n";
        }else{
            Node*temp=top;
            top=top->next;
            delete temp;
        }
    }
    int peek(){
        if(top!=NULL){
            return top->data;

        }else{
            cout<<"empty";
            return-1;
        
        }
    }
    bool isEmpty(){
        return top==NULL;
    }
};
    
    int main(){
        stack s;
        s.push(1);
        s.push(2);
        s.push(3);
        cout<<s.peek()<<"\n";
        s.push(4);
        s.push(5);
        
        cout<<s.peek()<<"\n";
        s.push(8);
        s.pop();
        s.pop();
        cout<<s.peek()<<"\n";
    }



