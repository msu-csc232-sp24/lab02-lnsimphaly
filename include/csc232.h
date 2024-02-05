/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file    csc232.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.1
 * @date    9/10/2021
 *
 * @copyright Copyright (c) 2021 James R. Daehn
 */

#ifndef CSC232_COMMON_H_
#define CSC232_COMMON_H_

#define FALSE 0
#define TRUE 1
#define EXECUTE_BLOCK FALSE

#define FINISHED_PART_1 TRUE
#define FINISHED_PART_2 TRUE
#define FINISHED_PART_3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

/**
 * @brief Common namespace for CSC232 identifiers.
 */
namespace csc232
{

class Shape {
public:
    virtual double area() const = 0;   // calculates the area of the shape
    virtual double perimeter() const = 0;  // calculates the perimeter of the shape
    virtual ~Shape() = default; // destructor
};
    
class Square : public Shape {
    public:
        Square() : side(1.0) {} // constructor initializing the side to 1.0

        double area() const override { // calculates the area of the square
            return side * side;
     }

        double perimeter() const override { // calculates the perimeter of the square
            return 4 * side;
    }

        ~Square() = default; // destructor

    private:
        double side;
};

class Circle : public Shape {
    public:
        Circle() : radius(1.0) {} // constructor initializing the radius to 1.0
        Circle(double radius) : radius(radius) {} // contstructor that allows the radius to be adjusted

        double area() const override { // calculates the area of the circle
            return M_PI * radius * radius;
        }

        double perimeter() const override { // calculates the perimeter of the cirlce
            return 2 * M_PI * radius;
        }

        ~Circle() = default; // destructor

    private:
        double radius;
};
    // DO NOT Modify anything below this line
} // namespace csc232

#endif // CSC232_COMMON_H_
