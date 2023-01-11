#include<iostream>
#include"my_baisc.cpp"
using namespace std;

void bubble(int* a){
    for (int n=0;n<=7;n++){
        for (int i=0;i<=6-n;i++){
            if (a[i]<a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
}

int main(){
    int test[8]={25,57,23,34,78,36,67,45};
    bubble(test);
    for (int i=0;i<=7;i++){
        cout<<test[i]<<'\t';
    }
    cout<<endl;
    
}