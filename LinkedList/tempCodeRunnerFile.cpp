#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Order
{
    int id;
    int arrival;
    int packing;
    int priority;
};

struct Event
{
    int time;
    int type;

    bool operator<(const Event &other) const
    {
        if (time != other.time)
        {
            return time < other.time;
        }
        return type < other.type;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<Order> orders(n);
    for (int i = 0; i < n; ++i)
    {
        orders[i].id = i;
        cin >> orders[i].arrival >> orders[i].packing >> orders[i].priority;
    }

    vector<bool> processed(n, false);
    int processedCount = 0;
    long long currTime = 0;
    vector<pair<int, int>> waitIntervals;

    while (processedCount < n)
    {
        int bestOrderIndex, bestPriority = -1;
        int bestArrival, bestPacking = 1e9 + 7;
        for (int i = 0; i < n; ++i)
        {
            if (processed[i])
            {
                continue;
            }
            if (orders[i].arrival <= currTime)
            {
                bool isBetter = false;
                if (orders[i].priority > bestPriority)
                {
                    isBetter = true;
                }
                else if (orders[i].priority == bestPriority)
                {
                    if (orders[i].arrival < bestArrival)
                    {
                        isBetter = true;
                    }
                    else if (orders[i].arrival == bestArrival)
                    {
                        if (orders[i].packing < bestPacking)
                        {
                            isBetter = true;
                        }
                    }
                }
                if (isBetter)
                {
                    bestOrderIndex = i;
                    bestPriority = orders[i].priority;
                    bestArrival = orders[i].arrival;
                    bestPacking = orders[i].packing;
                }
            }
        }
        if (bestOrderIndex != -1)
        {
            Order &order = orders[bestOrderIndex];
            long long startPackingTime = currTime;
            if (startPackingTime > order.arrival)
            {
                waitIntervals.push_back({order.arrival, startPackingTime});
            }
            currTime += order.packing;
            processed[bestOrderIndex] = true;
            processedCount++;
        }
        else
        {
            int minFutureArrival = 1e9 + 7;
            bool foundUnprocessed = false;
            for (int i = 0; i < n; ++i)
            {
                if (!processed[i])
                {
                    minFutureArrival = min(minFutureArrival, orders[i].arrival);
                    foundUnprocessed = true;
                }
            }

            if (foundUnprocessed)
            {
                currTime = minFutureArrival;
            }
            else
            {
                break;
            }
        }
    }
    if (waitIntervals.empty())
    {
        cout << 0 << endl;
        return 0;
    }

    vector<Event> events;
    for (auto it = waitIntervals.begin(); it != waitIntervals.end(); ++it)
    {
        events.push_back({it->first, 1});
        events.push_back({it->second, -1});
    }

    sort(events.begin(), events.end());
    int maxChair = 0;
    int currChairs = 0;
    for (const auto &event : events)
    {
        currChairs += event.type;
        maxChair = max(maxChair, currChairs);
    }
    cout << maxChair << endl;
    return 0;
}