//
// Created by lucas on 6/18/2025.
//

#ifndef CGPACALCULATOR_H
#define CGPACALCULATOR_H

#include <vector>
#include "Course.h"


class CGPACalculator {

public:
    CGPACalculator();

    static double calculateCGPA(const std::vector<Course>& courses);
};



#endif //CGPACALCULATOR_H
