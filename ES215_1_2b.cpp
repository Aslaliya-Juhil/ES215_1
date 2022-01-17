#include <iostream>
#include <chrono>

int main()
{
    int n;
    std::cout << "n: ";
    std::cin >> n;
    double M1[n][n];
    double M2[n][n];
    double M[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M1[i][j] = (double)(rand() / RAND_MAX * 10);
            M2[i][j] = (double)(rand() / RAND_MAX * 10);
        }
    }
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += M1[i][k] * M2[k][j];
            }
            M[i][j] = sum;
        }
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = stop - start;
    std::cout << "time: " << duration.count() << "\n";
    return 0;
}