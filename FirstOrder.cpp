//
//  FirstOrder.cpp
//  
//
//  Created by Nicolas Felipe Vergara Duran on 10/04/18.
//


#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    float h=0.01;
    float min_x = 0.0;
    float max_x = 10.0;
    float y=1;
    float x=0;
    int n = (max_x - min_x)/h;
    for(int i =0;i<n;i++){
        y=y-(h*y);
        x=x+h;
        cout<<x<<" "<<y<<endl;
    }
}
