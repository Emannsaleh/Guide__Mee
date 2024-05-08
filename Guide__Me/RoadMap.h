#pragma once
#include<iostream>
#include<string>
#include<list>
#include<stack>
#include<unordered_set>
#include<unordered_map>
#include<set>
#include<queue>
#include<cctype>
#include<sstream>
#include<vector>
#include<fstream>
using namespace std;


struct Transportation
{
	// data members
	string vehicle = "";
	double price = 0.0;
	Transportation(string m, int p) : vehicle(m), price(p) {}
	Transportation() {}
};


class RoadMap
{

public:
	// datamembers
	//      key=> name of source & value=> vector (transporation(source,destination,cost))  

	unordered_map<string, vector <string>> adjList;

	vector<Transportation>vehicle;

	string source, destination; double targetmoney;
	unordered_map<string, bool>vis;
	queue<pair<string, string>>path;
	vector<pair<double, queue<pair<string, string>>>>routs;

	//dfs
	stack<string> s;
	queue<string> dfsoutr;
	//bfs
	queue<string> bfs_queue;
	queue<string> bfsout;



	// constructors

	RoadMap();  // read map
	int numOfLines; // FOR FILESTREAM

	// methods
	unordered_map<string, vector <pair<string, vector<Transportation>>>> map;

	void updateTransportation(const string& source, const string& destination, const string& vehicle, double newPrice);

	bool isComplete();
	void addEdge(string src, string dest, string method, int price);
	void addTransportation(string src, string dest, string method, int price);
	void displayGraph();
	void Add();
	bool cityExists(string s);
	bool ignoreCaseInsensitive(string str1, string str2);
	string toLower(string s);

	void deleteTransportation(string source, string destination, string transport);

	void ClearElqueue(queue<pair<string, string>>& path);
	void ALLAVALIABLEPATHS(string node, double cost);
	void outputofpaths();


	void dfs(string);
	void bfs(string);

	void adjlist();

	// destructor
	~RoadMap();

};
