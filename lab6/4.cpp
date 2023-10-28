#include <iostream>
#include <vector>
#include <algorithm>

struct Date {
    int day, month, year;

    bool operator<(const Date& other) const {
        if (year != other.year) {
            return year < other.year;
        }
        if (month != other.month) {
            return month < other.month;
        }
        return day < other.day;
    }
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Date> dates(n);

    for (int i = 0; i < n; ++i) {
        int day, month, year;
        char separator;
        std::cin >> day >> separator >> month >> separator >> year;
        dates[i] = {day, month, year};
    }

    std::sort(dates.begin(), dates.end());

    for (const Date& date : dates) {
        printf("%02d-%02d-%04d\n", date.day, date.month, date.year);
    }

    return 0;
}
