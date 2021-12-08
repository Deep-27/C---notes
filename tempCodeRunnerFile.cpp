#include<iostream>
using namespace std;
int main ()
{
    int count, sum, inputArray[500];
    float average;
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max;
    cout << "\nSmallest element : " << min;


 sum = 0;
    // Find sum of all array elements2
    
    for(i = 0; i < count; i++) {
        sum += inputArray[i];
    }
 
    average = (float)sum / count;
    cout << "\nAverage = " << average;
 

    return 0;
}

