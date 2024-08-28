#include <iostream>
#include <vector>
#include <thread>
#include <numeric>
using namespace std;

void computeSum(const vector<int> &arr, int start, int end, int &result)
{
    result = accumulate(arr.begin() + start, arr.begin() + end, 0);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int numThreads = 4;
    int chunkSize = arr.size() / numThreads;
    vector<thread> threads;
    vector<int> results(numThreads);

        for (int i = 0; i < numThreads; ++i)
    {
        int start = i * chunkSize;
        int end = (i == numThreads - 1) ? arr.size() : (i + 1) * chunkSize;
        threads.emplace_back(computeSum, cref(arr), start, end, ref(results[i]));
    }
    for (auto &th : threads)
    {
        th.join();
    }

    int totalSum = accumulate(results.begin(), results.end(), 0);

    cout << "Sum of array elements: " << totalSum << endl;

    return 0;
}
