#ifndef gridIncluded
#define gridIncluded

#include <vector>
#include "cell.h"
namespace GCA{
    class Grid {
        public:
            //Constructor
            Grid(int width, int height);
            
            //Operator overload to allow for requesting individual cells
            Cell* operator[](int y, int x);

            //Get and Set methods
            std::vector<Cell*> getCells();
            
            Cell* getCell(int index);
            Cell* getCell(int y, int x);
            
            int getWidth();
            int getHeight();
            int getSize();
            int size();

            //Iterators
            iterator begin();
            iterator end();

        protected:
            std::vector<Cell*> cells;
            int width, height, size;

    };
}
#endif
