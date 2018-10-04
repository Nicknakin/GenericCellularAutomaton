#ifndef cellIncluded
#define cellIncluded

#include <vector>

class Cell {
    public:
        Cell(int xPosition, int yPosition, int value);
        int getValue();
        bool getActive();
        std::vector<int>position getPosition();
        void setValue(int value);
        void setActive(bool active);
        void setPosition(int x, int y);
        void setPosition(std::vector<int> position);

    protected:
        std::vector<int> position;
        bool active;
        int value;
};

#endif
