#include<iostream>

using namespace std;

int main(){
    int len;
    cin>>len;
    int* da=new int[len];
    //int da[len];
    for(int i=1;i<=len;i++){
        cout<<da[i]<<'\t';
    }
    cout<<endl;
    delete []da;
    da=NULL;
    cout<<da;
}