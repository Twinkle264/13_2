#include <iostream>
using namespace std;

int main() {
    float cost[] = {2.5, 4.25, 3.0, 10.0};
    int basket[] = {1, 1, 0, 3};

    float sum = 0.f;

    for (int i = 0; i < 4; ++i) {
    sum += cost[basket[i]];
    }

    cout << "Sum: " << sum << endl;
    return 0;
}
