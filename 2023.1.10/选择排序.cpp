#include<iostream>
using namespace std;

void selectArrange(int* a){
    for(int i=0;i<=4;i++){
        for(int j=i+1;j<=4;j++){
            if(a[i]<a[j]){    //  >:从小到大
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

}

int main(){
    int test[5]={1,2,5,34,3};
    selectArrange(test);
    for(int i=0;i<=4;i++){
        cout<<test[i]<<'\t';
    }
    cout<<endl;
}