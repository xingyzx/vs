#include<iostream>

using namespace std;

int main(){
    int len;
    cin>>len;
    int* da=new int[len];
    
    for(int i=1;i<=len;i++){
        cout<<da[i]<<'\t';
    }
    cout<<endl;
    
    
    
    
    
    delete []da;
    da=NULL;
    cout<<da;
}

//动态数组使用后要释放内存，并将指针置空！！！