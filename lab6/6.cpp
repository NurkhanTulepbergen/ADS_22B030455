#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


std::map<std::string, double> gradeToGPA = {
    {"A+", 4.00},
    {"A", 3.75},
    {"B+", 3.50},
    {"B", 3.00},
    {"C+", 2.50},
    {"C", 2.00},
    {"D+", 1.50},
    {"D", 1.00},
    {"F", 0.00}
};

struct Student {
    std::string lastName;
    std::string firstName;
    double gpa;

    bool operator<(const Student& other) const {
        if (gpa != other.gpa) {
            return gpa < other.gpa;
        }
        if (lastName != other.lastName) {
            return lastName < other.lastName; 
        }
        return firstName < other.firstName;
    }
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Student> students;

    for (int i = 0; i < n; ++i) {
        std::string lastName, firstName;
        int m;
        std::cin >> lastName >> firstName >> m;

        double totalGPA = 0.0;
        int totalCredits = 0;

        for (int j = 0; j < m; ++j) {
            std::string grade;
            int credits;
            std::cin >> grade >> credits;
            totalGPA += gradeToGPA[grade] * credits;
            totalCredits += credits;
        }

   
        double gpa = (totalCredits > 0) ? (totalGPA / totalCredits) : 0.0;

        students.push_back({lastName, firstName, gpa});
    }


    std::sort(students.begin(), students.end());

    for (const Student& student : students) {
        std::cout << student.lastName << " " << student.firstName << " ";
        printf("%.3f\n", student.gpa);
    }

    return 0;
}
