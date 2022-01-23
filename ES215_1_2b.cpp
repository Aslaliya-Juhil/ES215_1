##include <iostream>
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
    auto ti = std::chrono::high_resolution_clock::now();
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
    auto tf = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration_cast<std::chrono::nanoseconds>(tf-ti);
    std::cout << dur.count() << std::endl;
    return 0;
}
