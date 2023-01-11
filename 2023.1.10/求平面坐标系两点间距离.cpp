#include<iostream>
#include<cmath>
using namespace std;

float distance(double ax,double ay,double bx=0,double by=0){
    return sqrt(pow(ax-bx,2)+pow(ay-by,2));
}

class cordinate {
public:
    double x,y;
public:

    void InputCordinate(){
        double xi;
        double yi;
        cout<<"input x :";
        cin>>xi;
        cout<<"input y :";
        cin>>yi;
        x = xi;
        y = yi;
    }

};

int main(){
    cordinate _1,_2;
    _1.InputCordinate();
    _2.InputCordinate();
    cout<<distance(_1.x,_1.y,_2.x,_2.y)<<endl;
}