#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
//// Function to do Preorder, Inorder, and Postorder in one traversal
    vector<vector<int>>prepostin(Node* root){
        stack<pair<Node*,int>>st;
        if(root==NULL) return {};
        st.push({root,1});
        vector<int>preorder ,inorder,postorder;
        while(!st.empty()){
            auto &it=st.top();
            st.pop();
            // this is part of preorder
            //increemnt from 1 to 2
            // push the left side of the tree
            if(it.second==1){
                preorder.push_back(it.first->data);
                it.second++;
                st.push(it);
                if(it.first->left!=NULL){
                    st.push({it.first->left,1});
                }
            }
            //this is part of inorder
            // increement from 2 to 3
            //puzh right side if exists
            else if(it.second==2){
                inorder.push_back(it.first->data);
                it.second++;
                st.push(it);
                if(it.first->right!=NULL){
                    st.push({it.first->right,1});
                }
            }
            // this is postorder
            // no increase
            else{
                postorder.push_back(it.first->data);
            }

        }
        return {preorder,inorder,postorder};
    }

int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    vector<vector<int>>result=prepostin(root);
    cout<<"preorder"<<endl;
    for(int val:result[0]) cout<<val<<" ";
    cout<<endl;
     cout<<"inorder"<<endl;
    for(int val:result[1]) cout<<val<<" ";
    cout<<endl;
    cout<<"postorder"<<endl;
    for(int val:result[2]) cout<<val<<" ";
    return 0;
    

}

