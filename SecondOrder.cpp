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
    float min_x = 0;
    float max_x = 10.0;
    float y_old=1;
    float y_new=1;
    float x=0;
    float z_old=0;
    float z_new=0;
    int n = (max_x - min_x)/h;
    for(int i=0;i<n;i++){
        z_new=z_old-(h*y_old);
        y_new=y_old+(h*z_old);
        x=x+h;
        cout<<x<<" "<<y_new<<" "<<z_new<<endl;
        z_old=z_new;
        y_old=y_new;
        
    }
}
