

//class basic

#include <iostream>
using namespace std;


class log {

};
class Player {
public:
    int x,y;
    void move(int xa,int ya){
        x+=xa;
        y+=ya;
    }
};



int main(){
    Player player;
    cin>>player.x>>player.y;
    int xa,ya;
    cin>>xa>>ya;
    player.move(xa,ya);
    cout<<player.x<<","<<player.y<<endl;



}