#ifndef cellIncluded
#define cellIncluded

#include <vector>
namespace GCA{
    class Cell {
        public:
            Cell(int xPosition, int yPosition, int value);
            Cell(std::vector<int> position, int value);
            int getValue();
            bool getActive();
            std::vector<int> getPosition();
            void setValue(int value);
            void setActive(bool active);
            void setPosition(int x, int y);
            void setPosition(std::vector<int> position);

        protected:
            std::vector<int> position;
            bool active;
            int value;
    };
}
#endif
