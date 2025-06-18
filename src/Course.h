
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <sstream>

class Course {

  public:
    Course();

    Course(std::string courseName, double creditHours, std::string grade, double gradePoint) {
      this->courseName = courseName;
      this->creditHours = creditHours;
      this->grade = grade;
      this->gradePoint = gradePoint;
    }

    std::string getCourseName() {
      return courseName;
    }

    double getCreditHours() {
      return creditHours;
    }

    std::string getGrade() {
      return grade;
    }

    double getGradePoint(){
      return gradePoint;
    }

    void setCourseName(std::string name) {
      this->courseName = name;
    }

    void setCreditHours(double hours) {
      this->creditHours = hours;
    }

    void setGrade(std::string grade) {
      this->grade = grade;
    }

    void setGradePoint(double gradePoint) {
      this->gradePoint = gradePoint;
    }

    std::string toString() const {
      std::stringstream ss;
      ss << "Course: " << courseName
         << ", Credit Hours: " << creditHours
         << ", Grade: " << grade
         << ", GradePoint: " << gradePoint;

      return ss.str();
    }

  private:
    std::string courseName;
    double creditHours;
    std::string grade;
    double gradePoint;
  };


#endif //COURSE_H
