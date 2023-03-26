#include<iostream>
using namespace std;

int SearchItem (int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
    if (arr[i] == x)
    return i;
    return -1;

}

int Maximum(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
    if (arr[i] > max)
    max = arr[i];
    return max;
}

int Minimum(int arr[], int n)
{
    int value = arr[0];
    for (int i = 1; i < n; i++)
    value = min(value, arr[i]);
    return value;
}



int main()
{
    int n,x,i;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for (i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter item to search for:"<<endl;
    cin>>x;
    int result = SearchItem(arr, n, x);
    if (result == -1)
    cout<<x<<"is not present in array"<<endl;
    else
    cout<<x<<" is present at index "<<result<<endl;



    int maximum = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum number array is "<< Maximum(arr, n)<<endl;
    cout << "Minimum element of array: " << Minimum(arr, n) <<endl;
    return 0;
}
