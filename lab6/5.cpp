#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < m; ++j) {
        std::vector<int> column;
        for (int i = 0; i < n; ++i) {
            column.push_back(matrix[i][j]);
        }
        std::sort(column.rbegin(), column.rend()); // Sort in descending order
        for (int i = 0; i < n; ++i) {
            matrix[i][j] = column[i];
        }
    }

   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
