#include <iostream>
#include <cmath>

#include "Isosceles_Trapezium.h"

IsoscelesTrapezium::IsoscelesTrapezium() : _mass(0), _pos(0,0), a(0, 0), b(0, 0), c(0, 0), d(0, 0),
firstVector(0), secondVector(0), thirdVector(0), fourthVector(0) {}

IsoscelesTrapezium::IsoscelesTrapezium(CVector2D& coordinate, CVector2D& pos, double a_, double b_, double c_, double d_, double mass_) :
a(coordinate), b(coordinate), c(coordinate), d(coordinate), _pos(pos),
firstVector(a_), secondVector(b_), thirdVector(c_), fourthVector(d_) {}

IsoscelesTrapezium::~IsoscelesTrapezium() = default;

double IsoscelesTrapezium::square() {
    return (((firstVector + thirdVector) / 2) * (sqrt(pow(secondVector, 2) - pow(firstVector - thirdVector, 2) / 4)));
}

double IsoscelesTrapezium::perimeter() {
    return (firstVector + secondVector + thirdVector + fourthVector);
}

double IsoscelesTrapezium::mass() const {
    return this->_mass;
}

CVector2D IsoscelesTrapezium::position() {
    return this->_pos;
}

bool IsoscelesTrapezium::operator==(const IPhysObject& ob) const {
    return mass() == ob.mass();
}

bool IsoscelesTrapezium::operator<(const IPhysObject& ob) const {
    return mass() < ob.mass();
}

void IsoscelesTrapezium::draw() {
    std::cout << "FirstVector = " << firstVector << std::endl << "SecondVector = " << secondVector << std::endl << "ThirdVector = " << thirdVector << std::endl <<
    "FourthVector" << fourthVector << std::endl;
    std::cout << "Square: " << square() << std::endl << "Perimeter: " << perimeter() << std::endl;
    std::cout << "Mass: " << this->_mass << std::endl << "Position: {" << this->_pos.x << "," << this->_pos.y << "}" << std::endl;
}

void IsoscelesTrapezium::getVertex() {
    firstVector = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    secondVector = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
    thirdVector = sqrt(pow(d.x - c.x, 2) + pow(d.y - c.y, 2));
    fourthVector = sqrt(pow(a.x - d.x, 2) + pow(a.y - d.y, 2));
}

void IsoscelesTrapezium::initFromDialog() {
    std::cout << "Enter first vertex: ";
    std::cin >> this->a.x >> this->a.y;
    std::cout << std::endl;
    std::cout << "Enter second vertex: ";
    std::cin >> this->b.x >> this->b.y;
    std::cout << std::endl;
    std::cout << "Enter third vertex: ";
    std::cin >> this->c.x >> this->c.y;
    std::cout << std::endl;
    std::cout << "Enter fourth vertex: ";
    std::cin >> this->d.x >> this->d.y;
    std::cout << std::endl;
    getVertex();
    std::cout << "Enter mass: ";
    std::cin >> this->_mass;
    std::cout << std::endl;
    std::cout << "Enter position x: ";
    std::cin >> this->_pos.x;
    std::cout << std::endl;
    std::cout << "Enter position y: ";
    std::cin >> this->_pos.y;
    std::cout << std::endl;
}

std::string IsoscelesTrapezium::classname() const {
    return this->_name;
}

unsigned int IsoscelesTrapezium::size() const {
    return sizeof(*this);
}