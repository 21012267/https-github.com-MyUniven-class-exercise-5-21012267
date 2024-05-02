

#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
int distance(T x1, T y1, T x2, T y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {

    int x1, y1, x2, y2;




    cout<<"Enter the value of  x1:";
    cin>>x1;

    cout<<"enter the value of  x2:";
    cin>>y1;

    cout << "Enter the value of y1:";
    cin >> y1;

    cout<<"Enter the value of  y2:";
    cin>>y2;


    cout << "Distance between point 1 and point 2 is: " << distance(x1, y1, x2, y2) << endl;

    return 0;
}
