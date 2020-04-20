#include <iostream>
#include <cmath>

#include "Segment.h"

Segment::Segment() : a(0, 0), b(0, 0), _mass(0), _pos(0,0) {}

Segment::Segment(CVector2D& a_, CVector2D& b_, const double mass, const CVector2D& pos) : a(a_), b(b_), _mass(mass), _pos(pos) {}

Segment::~Segment() = default;

double Segment::square() {
    return 0;
}

double Segment::perimeter() {
    return 0;
}

double Segment::mass() const {
    return this->_mass;
}

CVector2D Segment::position() {
    return this->_pos;
}

bool Segment::operator==(const IPhysObject& ob) const {
    return mass() == ob.mass();
}

bool Segment::operator<(const IPhysObject& ob) const {
    return mass() < ob.mass();
}

void Segment::draw() {
    std::cout << "Vertex = " << firstVector << std::endl;
    std::cout << "Mass: " << this->_mass << std::endl << "Position: {" << this->_pos.x << "," << this->_pos.y << "}" << std::endl;
}

void Segment::getVertex() {
    firstVector = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void Segment::initFromDialog() {
    std::cout << "Enter start vertex: ";
    std::cin >> this->a.x >> this->a.y;
    std::cout << std::endl;
    std::cout << "Enter end vertex: ";
    std::cin >> this->b.x >> this->b.y;
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

std::string Segment::classname() const {
    return this->_name;
}

unsigned int Segment::size() const {
    return sizeof(*this);
}