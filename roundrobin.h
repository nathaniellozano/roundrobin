#pragma once
#ifndef ROUNDROBIN_H
#define ROUNDROBIN_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <utility>
using namespace std;
class Roundrobin
{
public:
	Roundrobin(string filename, int timeQuantum, int overHead);
	void roundrobin();
private:
	unordered_map < int, int> wt;
	unordered_map < int, int> tr;
	queue<pair<int, float>> rr;
	queue<pair<int, float>> data;
	float wait;
	float turn;
	float avgwt;
	float avgtr;
	int tq;
	int oh;
	int totaltime;
	float totalProcesses;
};
#endif 