#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
//// Function to return precedence of operators
int prec(char c){ 
if(c=='^') return 3;
else if(c=='*'|| c=='/') return 2;
else if(c=='+'||c=='-') return 1;
else return -1;
}

// Function to convert infix to prefix
string infix_prefix(string s){
    stack<char>st;
    string  result="";
         reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') s[i] = ')';
        else if (s[i] == ')') s[i] = '(';
    }
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
         reverse(result.begin(),result.end());
         return result;
    }
int main() {
    string exp = "(p+q)*(c-d)";
    cout << "Infix expression: " << exp << endl;
    string prefix = infix_prefix(exp);
    cout << "Prefix expression: " << prefix << endl;
    return 0;
}
