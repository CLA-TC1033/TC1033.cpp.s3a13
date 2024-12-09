// Test definitions. Do NOT edit this file!

#include <string>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include <catch2/catch.hpp>

#include "../Point.hpp"
#include "../Triangle.hpp"


TEST_CASE("Ex1", "[Constructor de Trianglo por default]")
{
    Triangle t;

    SECTION("Construyendo triangulo por default") {
        REQUIRE(t.getVertex1().getX()==0);
        REQUIRE(t.getVertex1().getY()==0);
        REQUIRE(t.getVertex2().getX()==50);
        REQUIRE(t.getVertex2().getY()==30);
        REQUIRE(t.getVertex3().getX()==25);
        REQUIRE(t.getVertex3().getY()==10);
    }
}

TEST_CASE("Ex2", "[Constructor de Trianglo con puntos]")
{
    Triangle t=Triangle(Point(3,1), Point(1,2), Point(4,4));

    SECTION("Construyendo triangulo por default") {
        REQUIRE(t.getVertex1().getX()==3);
        REQUIRE(t.getVertex1().getY()==1);
        REQUIRE(t.getVertex2().getX()==1);
        REQUIRE(t.getVertex2().getY()==2);
        REQUIRE(t.getVertex3().getX()==4);
        REQUIRE(t.getVertex3().getY()==4);
    }
}

TEST_CASE("Ex3", "[Perimetro de un triangulo]")
{
    Triangle t=Triangle(Point(3,1), Point(1,2), Point(4,4));

    SECTION("Calculando el perimetro del Triangulo") {
        REQUIRE(std::to_string(t.perimeter())=="9.003897");
        
    }
}

TEST_CASE("Ex4", "[Area de un triangulo]")
{
    Triangle t=Triangle(Point(3,1), Point(1,2), Point(4,4));

    SECTION("Calculando el area del Triangulo") {
        REQUIRE(std::to_string(t.area())=="3.500000");
        
    }
}

