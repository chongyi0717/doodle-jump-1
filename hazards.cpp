#include "hazards.h"

Hazards::Hazards()
{
    setShapeMode(QGraphicsPixmapItem::HeuristicMaskShape);
    setData(TYPE, HAZARD);

    setZValue(1);
}

Hazards::~Hazards()
{
}

void Hazards::setCoordinate(qreal x, qreal y)
{
    xPos=x;
    yPos=y;
}
