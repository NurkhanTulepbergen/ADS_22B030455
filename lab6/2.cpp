#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> first_person(n);
    std::vector<int> second_person(m);

    for (int i = 0; i < n; ++i) {
        std::cin >> first_person[i];
    }

    for (int i = 0; i < m; ++i) {
        std::cin >> second_person[i];
    }

    std::unordered_map<int, int> first_person_counts;
    std::unordered_map<int, int> second_person_counts;

    for (int i = 0; i < n; ++i) {
        first_person_counts[first_person[i]]++;
    }

    for (int i = 0; i < m; ++i) {
        second_person_counts[second_person[i]]++;
    }

    std::vector<int> common_numbers;

    for (const auto& entry : first_person_counts) {
        int number = entry.first;
        int count_in_first_person = entry.second;
        int count_in_second_person = second_person_counts[number];
        int common_count = std::min(count_in_first_person, count_in_second_person);

        for (int i = 0; i < common_count; ++i) {
            common_numbers.push_back(number);
        }
    }

    std::sort(common_numbers.begin(), common_numbers.end());

    for (int i = 0; i < common_numbers.size(); ++i) {
        std::cout << common_numbers[i] << " ";
    }

    return 0;
}
