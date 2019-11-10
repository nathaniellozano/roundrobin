#include "roundrobin.h"
using namespace std;

Roundrobin::Roundrobin(string fileName, int timeQuantum, int overHead)
{
	tq = timeQuantum;
	oh = overHead;
	fstream f;
	f.open(fileName);
	int i = 0;
	vector<pair<int, float>> oops;
	while (!f.eof())
	{
		oops.resize(i + 1);
		f >> oops[i].first >> oops[i].second;
		data.push(oops[i]);
		wt[oops[i].first] = 0;
		tr[oops[i].first] = 0;
		i = i + 1;
	}
	totalProcesses = data.size(); 
	f.close();
}
void Roundrobin::roundrobin()
{
	int time = 0, totaltime= 0, time2=0;
	pair<int, float> temp;
	bool sametime ;
	turn = 0;
	while (true)
	{
			if (data.size() > 0 && data.front().first == totaltime)
			{
				rr.push(data.front());
				data.pop();
				if (totaltime == 0)
				{
					wt[rr.front().first] = 0;
				}
				if (data.size()>0 &&data.front().first == totaltime)
				{
					rr.push(data.front());
					data.pop();
				}
			}
			if (rr.empty() )
			{
				if (data.empty())
				{
					break;
				}
				else
				{
					if (time == tq + oh)
					{
						time = 0;
						time2 = 0;
					}
					else
					{
						time2++;
					}
				}
			}
			else
			{
				if ((int)rr.front().second + time2 - (time+oh) == 0 || (int)rr.front().second<2)
				{
					if (time == (tq + oh))
					{
						rr.front().second = 0;
						turn = turn + totaltime- rr.front().first;
						rr.pop();
						if (rr.empty())
						{
							if (data.empty())
							{
								break;
							}
						}
						else
						{
							wait = wait + totaltime - rr.front().first;
						}
						time = 0;
						time2 = 0;
					}
					else
					{
						turn = turn+ totaltime- rr.front().first;
						time2 = time2 + (int)rr.front().second;
						rr.pop();
						if (rr.empty())
						{
							if (data.empty())
							{
								break;
							}
						}
						else
						{
							wait = wait + totaltime - rr.front().first;
						}
					}
				}
				else
				{
					if (time == (tq + oh))
					{
						rr.front().second = rr.front().second + time2 - time;
						time = 0;
						time2 = 0;
						temp = rr.front();
						rr.pop();
						rr.push(temp);
						wait = wait + totaltime - rr.front().first;
					}
					else
					{
					}
				}
			}
		time++;
		totaltime++;
	} 

	avgwt = wait / totalProcesses;
	avgtr = turn / totalProcesses;
	cout << "_______________________________" << endl;
	cout << "Time Quantum: " << tq << endl;
	cout << "Over Head: " << oh << endl;
	cout << "Average wait time: " << avgwt << endl;
	cout << "Average turn around time: " << avgtr << endl;
 }