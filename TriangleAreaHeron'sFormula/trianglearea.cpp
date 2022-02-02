#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double side1 = 4;
    double side2 = 13;
    double side3 = 15;

    double s = (side1 + side2 + side3) / 2;

    double area = sqrt(s * (s-side1) * (s- side2) * (s- side3));

    cout << "Area is:" << area << endl;

}