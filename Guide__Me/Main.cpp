#include<iostream>
#include"RoadMap.h"
using namespace std;

int main()
{
    ///
    RoadMap* road = new RoadMap();

    road->outputofpaths();

    //cout << road->isComplete() << endl;

    string source = "", destination = "";
    char ch;
    do
    {
        cout << "Enter the source:- " << endl;
        cin >> source;
        cout << "Enter the destination:- " << endl;
        cin >> destination;
        road->deleteTransportation(source, destination);
        cout << "Do u want to delete a another transportation? (y/n)" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');


    road->~RoadMap();

    return 0;
}