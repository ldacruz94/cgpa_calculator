//
// Created by lucas on 6/18/2025.
//

#include "CGPACalculator.h"

CGPACalculator::CGPACalculator() = default;

double CGPACalculator::calculateCGPA(const std::vector<Course>& courses) {

    double totalGpCh = 0.0;
    double totalCreditHours = 0.0;

    for (Course course : courses) {
        totalGpCh += course.getGradePoint() * course.getCreditHours();
        totalCreditHours += course.getCreditHours();
    }

    return totalGpCh / totalCreditHours;
}

