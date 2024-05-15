#include "Circleclass.h"
#include "SquareClass.h"
#include "Triangleclass.h"


class Area {
   public:
   static double calcSquareArea(const shapes::Square& square);
   static double calcTriangleArea(const shapes::Triangle& trianlge);
   static double calcCircleArea(const shapes::Circle& circle);
};