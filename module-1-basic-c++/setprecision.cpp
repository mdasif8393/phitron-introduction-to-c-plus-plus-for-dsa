#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double d = 12.123456789;

    cout << fixed << setprecision(5) << d << endl;
    return 0;
}