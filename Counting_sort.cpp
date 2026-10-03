// #include <iostream>
// #include <algorithm>
// using namespace std;
// void COUNT_SORT(int *a, int *b, int *c, int n, int k)
// {
//     // count the occurance of each i in c array of counting in range (0...k)
//     for (int i = 0; i < n; i++)
//     {
//         c[a[i]]++;
//     }

//     // now running sum

//     for (int i = 1; i <= k; i++)
//     {
//         c[i] = c[i] + c[i - 1];
//     }

//     // now b array will be our sorted array
//     for (int j = n - 1; j >= 0; j--)
//     {
//         b[c[a[j]] - 1] = a[j];
//         c[a[j]]--;
//     }
// }

// int main()
// {

//     int n, k;
//     cout << "enter the no of elements in array" << endl;
//     cin >> n;
//     cout << "enter the k which is the upper bound";
//     cin >> k;

//     int *array = new int[n];
//     int *sorted = new int[n];
//     int countarray[k + 1] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     COUNT_SORT(array, sorted, countarray, n, k);

//     for (int i = 0; i < n; i++)
//     {
//         cout << sorted[i] << " ";
//     }

//     cout << "---------------------------------------";
//     cout << "The array that was holding the occcurance(frequency) and the prefix sum";
//     for (int i = 0; i <= k; i++)
//     {
//         cout << countarray[i] << " ";
//     }
//     delete[] array;
//     delete[] sorted;
//     return 0;
// }
