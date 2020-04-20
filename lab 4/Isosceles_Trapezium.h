#pragma once

#include "Interface.h"

class IsoscelesTrapezium : public IFigureUnion {

private:
    double _mass{};
    std::string _name = "IsoscelesTrapezium";
    CVector2D _pos{};
    CVector2D a{};
    CVector2D b{};
    CVector2D c{};
    CVector2D d{};
    double firstVector, secondVector, thirdVector, fourthVector;
    void getVertex();

public:
    IsoscelesTrapezium();
    IsoscelesTrapezium(CVector2D&, CVector2D&, double, double, double, double, double);
    ~IsoscelesTrapezium();

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