#include "Planner.h"
using namespace std;
Planner::Planner(string r,string bO)
{
    race=r;
    buildOrder=bO;
    //ctor
}

string Planner::getBuild()
{
    return buildOrder;
}
string Planner::getRace()
{
    return race;
}
Planner::~Planner()
{
    //dtor
}
