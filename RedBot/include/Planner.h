#ifndef PLANNER_H
#define PLANNER_H
#include <string>

class Planner
{
    public:
        Planner(std::string race, std::string buildOrder);
        std::string getRace();
        std::string getBuild();
        virtual ~Planner();

    protected:

    private:
        std::string race, buildOrder;
        int state;
};

#endif // PLANNER_H
