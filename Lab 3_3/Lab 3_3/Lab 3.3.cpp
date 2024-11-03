#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, R, y;
    cout << "Enter R: ";
    cin >> R;
    cout << "Enter x: ";
    cin >> x;

    if (x <= -8) {
        y = -R;
    }
    else if (-8 < x && x <= -R) {
        y = (R / (8 - R)) * (x + 8) - R;
    }
    else if (-R < x && x < R) {
        y = -sqrt(pow(R, 2) - pow(x, 2));
    }
    else if (R <= x && x <= 5) {
        y = ((2 - R) / (5 - R)) * (x - R) + R;
    }
    else {
        y = 2;
    }

    cout << "y = " << y << endl;
    return 0;
}