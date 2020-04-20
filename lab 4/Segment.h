#pragma once

#include "Interface.h"

class Segment : public IFigureUnion {

private:
    double _mass;
    std::string _name = "Segment";
    CVector2D _pos{};
    CVector2D a{};
    CVector2D b{};
    double firstVector;
    void getVertex();

public:
    Segment();
    Segment(CVector2D&, CVector2D&, double, const CVector2D&);
    ~Segment();

    double square() override;
    double perimeter() override;
    [[nodiscard]] double mass() const override;
    [[nodiscard]] CVector2D position() override;
    bool operator==(const IPhysObject& ob) const override;
    bool operator<(const IPhysObject& ob) const override;
    void draw() override;
    void initFromDialog() override;
    [[nodiscard]] unsigned int size() const override;
    [[nodiscard]] std::string classname() const override;
};