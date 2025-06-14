// #include<iostream>
// using namespace std;
// void func(int n){
//     if(n==0)return;
//     cout<<"ananya \n";
//     func(n-1);
// }
// int main(){
// int n;
// cin>>n;
// func(n);
// return 0;
// }
// #include<iostream>
// using namespace std;
// void func(int n){
//     if(n==0)return;
//     cout<<n<<endl;
//     func(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     func(n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void func(int n,int i){
//     if(i>n)return;
//     cout<<i<<endl;
//     func(n,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"recursion"<<endl;
//     func(n,0);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void func(int n){
//     if(n<0)return;
//     func(n-1);
//     cout<<n;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<< "backtrack"<<endl;
//     func(n);
//     return 0;
// }
#include<iostream>
using namespace std;
void func(int n,int i){
    if(i>n)return;
    func(n,i+1);
    cout<<i;
}
int main(){
    int n;
    cin>>n;
    cout<< "backtrack"<<endl;
    func(n,1);
    return 0;
}