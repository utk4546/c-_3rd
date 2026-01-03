
// find the kth max and min elemt of array (3)

#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements \n";
    for(int i=0;i<n;i++){
    cin>> arr[i];
    }
    int k;
    cout<<"enter the value of k\n";
    cin>>k;
     for (int i = 0; i < n - 1; i++)

    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int kth_min=arr[k-1];
    int kth_max=arr[n-k];
    cout<<k<<" minimum element is \n" <<kth_min;
    cout<<endl;
    cout<<k<<" maximum element is \n"<<kth_max;
    return 0;
}
