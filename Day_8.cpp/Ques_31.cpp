#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter number of rows : ";
    cin>>n;
    char ch;
    for(i=1;i<=n;i++){
        for(ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}