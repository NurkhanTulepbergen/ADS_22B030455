#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
int main() {
    int N;
    std::cin >> N;

    std::vector<int> points(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> points[i];
    }

    std::sort(points.begin(), points.end());

    int minAbsDiff = INT_MAX;
    std::vector<std::pair<int, int>> pairs;

    for (int i = 1; i < N; ++i) {
        int absDiff = points[i] - points[i - 1];
        if (absDiff < minAbsDiff) {
            minAbsDiff = absDiff;
            pairs.clear();
            pairs.push_back(std::make_pair(points[i - 1], points[i]));
        } else if (absDiff == minAbsDiff) {
            pairs.push_back(std::make_pair(points[i - 1], points[i]));
        }
    }

    for (const auto& pair : pairs) {
        std::cout << pair.first << " " << pair.second << " ";
    }

    return 0;
}
