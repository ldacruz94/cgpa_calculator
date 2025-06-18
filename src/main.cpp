#include <iomanip>
#include <iostream>
#include <vector>

#include "CGPACalculator.h"
#include "Course.h"

int main() {

  bool run = true;

  std::cout << "CGPA Calculator" << std::endl;

  std::vector<Course> courses;

  while (run) {
    std::string courseName;
    std::cout << "Enter your course name: " << std::flush;
    std::getline(std::cin >> std::ws, courseName);

    double creditHours;
    std::cout << "Enter your credit hours: " << std::flush;
    std::cin >> creditHours;

    char grade;
    std::cout << "Enter your grade: " << std::flush;
    std::cin >> grade;

    double gradePoint;
    std::cout << "Enter your grade point: " << std::flush;
    std::cin >> gradePoint;

    Course course(courseName, creditHours, grade, gradePoint);
    courses.push_back(course);

    std::cout << "Input more (y/n)?";
    std::string input;
    std::cin >> input;

    if (input == "n") {
      run = false;
    }
  }

  const double cgpa = CGPACalculator::calculateCGPA(courses);

  std::cout << "Here are all the courses:\n";
  for (const Course& course : courses) {
    std::cout << course.toString() << std::endl;
  }
  std::cout << "Your total CGPA is: " << std::fixed << std::setprecision(2) << cgpa << std::endl;

  return 0;
}