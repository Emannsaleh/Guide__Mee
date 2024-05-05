#include<iostream>
#include"RoadMap.h"
using namespace std;

int main()
{
    ///
    RoadMap* road = new RoadMap();

    //road->outputofpaths();
    //road->Add();
    road->dfs("cairo");

    //cout << road->isComplete() << endl;

    string source = "", destination = "";
    char ch;
    //do
    //{
    //    cout << "Enter the source:- " << endl;
    //    cin >> source;
    //    cout << "Enter the destination:- " << endl;
    //    cin >> destination;
    //   
    //    //road->deleteTransportation(source, destination);
    //    cout << "Do u want to enter another s and d? (y/n)" << endl;
    //    cin >> ch;
    //    if (ch == 'no') {
    //        road->bfs("cairo");
    //    }
    //} while (ch == 'y' || ch == 'Y');
   /* cin >> ch;
    while (ch != 'no') {
        cin >> ch;
        cout << "Enter the source:- " << endl;
        cin >> source;
        cout << "Enter the destination:- " << endl;
        cin >> destination;
        if (ch == 'no') {
            road->bfs("cairo");
        }
  
    }*/


    //road->~RoadMap();

    return 0;
}