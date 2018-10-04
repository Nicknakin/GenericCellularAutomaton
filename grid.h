#ifndef gridIncluded
#define gridIncluded

#include <vector>
#include "cell.h"

class Grid {
    public:
        Grid(int width, int height);
        

    protected:
        std::vector<Cell*> cells;

};

#endif
