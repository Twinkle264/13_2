#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> cost = {2.5, 4.25, 3.0, 10.0};
    vector<int> basket = {1, 1, 0, 3};

    float sum = 0.f;

    for (int i = 0; i < basket.size(); ++i) {
    sum += cost[basket[i]];
    }

    cout << "Sum: " << sum << endl;
    return 0;
}
