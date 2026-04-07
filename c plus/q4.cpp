#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    int N = 1000000;  // large N

    // Measure O(N)
    auto start1 = high_resolution_clock::now();
    long long sum1 = 0;
    for(int i = 0; i < N; i++) {
        sum1 += i;
    }
    auto end1 = high_resolution_clock::now();
    cout << "O(N) sum: " << sum1 << ", time: "
         << duration_cast<milliseconds>(end1 - start1).count() << " ms\n";

    // Measure O(N + log N)
    auto start2 = high_resolution_clock::now();
    long long sum2 = 0;
    for(int i = 0; i < N; i++) {
        sum2 += i;
    }
    for(int i = 1; i <= N; i *= 2) {  // log N loop
        sum2 += i;
    }
    auto end2 = high_resolution_clock::now();
    cout << "O(N + log N) sum: " << sum2 << ", time: "
         << duration_cast<milliseconds>(end2 - start2).count() << " ms\n";

    return 0;
}
