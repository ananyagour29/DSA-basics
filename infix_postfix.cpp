#include<iostream>
#include<stack>
using namespace std;
//// Function to return precedence of operators
int prec(char c){ 
if(c=='^') return 3;
else if(c=='*'|| c=='/') return 2;
else if(c=='+'||c=='-') return 1;
else return -1;
}
// Function to convert infix to postfix
string infix_postfix(string s){
    stack<char>st;
    string  result="";
    for(char c:s){
         // If operand, add to result
         if((c>='A'&& c<='Z')||(c>='a'&& c<='z')||(c>='0'&&c<='9') ){
            result+=c;
         }  
         //if '('
         else if(c=='('){
            st.push(c);
         }
         else if(c==')'){
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
         }
         else{
            while(!st.empty()&&prec(c)<=prec(st.top())){
                result+=st.top();
                st.pop();
            }
            st.push(c);
         }
        }
         while(!st.empty()){
            result+=st.top();
            st.pop();
         }
         return result;
    }
int main() {
    string exp = "a+b*(c^d-e)";
    cout << "Infix expression: " << exp << endl;
    string postfix = infix_postfix(exp);
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
