#include <iostream>
#include <cstdlib>
#include <string>
#include "roundrobin.h"

using namespace std;
int main()
{
	Roundrobin rRobin1("times.txt", 50, 0);
	rRobin1.roundrobin();
	Roundrobin rRobin2("times.txt", 50, 5);
	rRobin2.roundrobin();
	Roundrobin rRobin3("times.txt", 50, 10);
	rRobin3.roundrobin();
	Roundrobin rRobin4("times.txt", 50, 15);
	rRobin4.roundrobin();
	Roundrobin rRobin5("times.txt", 50, 20);
	rRobin5.roundrobin();
	Roundrobin rRobin6("times.txt", 100, 0);
	rRobin6.roundrobin();
	Roundrobin rRobin7("times.txt", 100, 5);
	rRobin7.roundrobin();
	Roundrobin rRobin8("times.txt", 100, 10);
	rRobin8.roundrobin();
	Roundrobin rRobin9("times.txt", 100, 15);
	rRobin9.roundrobin();
	Roundrobin rRobin10("times.txt", 100, 20);
	rRobin10.roundrobin();
	Roundrobin rRobin11("times.txt", 250, 0);
	rRobin11.roundrobin();
	Roundrobin rRobin12("times.txt", 250, 5);
	rRobin12.roundrobin();
	Roundrobin rRobin13("times.txt", 250, 10);
	rRobin13.roundrobin();
	Roundrobin rRobin14("times.txt", 250, 15);
	rRobin14.roundrobin();
	Roundrobin rRobin15("times.txt", 250, 20);
	rRobin15.roundrobin();
	Roundrobin rRobin16("times.txt", 500, 0);
	rRobin16.roundrobin();
	Roundrobin rRobin17("times.txt", 500, 5);
	rRobin17.roundrobin();
	Roundrobin rRobin18("times.txt", 500, 10);
	rRobin18.roundrobin();
	Roundrobin rRobin19("times.txt", 500, 15);
	rRobin19.roundrobin();
	Roundrobin rRobin20("times.txt", 500, 20);
	rRobin20.roundrobin();
	cout << "END OF Assignment" << endl;
	system("pause");
}