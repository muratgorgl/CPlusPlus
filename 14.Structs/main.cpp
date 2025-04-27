#include <stdio.h>
#include <iostream>

using namespace std;

struct Point
{
    // üye değişkenler
    int x;
    int y;
};

struct Rectangle{
    double width;
    double height;
};



int main(){
    Point pt;
    pt.x = 3;
    pt.y = 4;

    Point pt2;
    pt2.x = 72;
    pt2.y = 58;

    Rectangle rct;
    rct.width = 10.2;
    rct.height = 5.8;



    cout <<"pt1 => x: " << pt.x << " y: " << pt.y << endl;
    cout <<"pt2 => x: " << pt2.x << " y: " << pt2.y << endl;
    cout <<"rct => width: " << rct.width << " height: " << rct.height << endl;

    return 0;
}