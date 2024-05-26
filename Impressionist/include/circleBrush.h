//
// circleBrush.h
//
// The header file for Circle Brush.
//

#ifndef CIRCLEBRUSH_H
#define CIRCLEBRUSH_H

#include "impBrush.h"

class CircleBrush : public ImpBrush {
  public:
    CircleBrush(ImpressionistDoc *pDoc = NULL, const char *name = NULL);

    void BrushBegin(const Point source, const Point target);
    void BrushMove(const Point source, const Point target);
    void BrushEnd(const Point source, const Point target);
    const char *BrushName(void);
};

#endif
