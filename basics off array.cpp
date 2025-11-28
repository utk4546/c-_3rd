
//  1 sum of array

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[]={2,4,5,7,8,9,};
//     int n=sizeof(arr)/sizeof(arr[0]);
//      int sum=0;
//      for (int i=0;i<n;i++){
//         sum+=arr[i];
//      }
//      cout<<"sum of arr ="<<sum<<endl;
//      return 0;
//  }



// ---------------------------------------------------------------------------------------------------------



//  2 maxium element of array





// #include<iostream>
// using namespace std;
// int main ()
// {
//     int arr[]={2,4,5,3,84,9,};
//     int n=sizeof(arr)/sizeof(arr[0]);
//      int max=INT8_MIN;
//     int idx=0;
//      for (int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//             idx=i;
//         }

//          }
//      cout<<"maximum no is = "<<max<<" "<<"at index "<<idx<<endl;
//     return 0;
//     }



// --------------------------------------------------------------------------------------------------------

// 3 minimum element of array




// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter size of element" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter element of arr" << " " << endl;
//     for (int i=0;i<n;i++){
//     cin >> arr[i];} 
//     int min = arr[0];
//     int idx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//             idx = i;
//         }
//     }
//     cout << "minimum no is = " << min << " " << "at index " << idx << endl;
//     return 0;
// }


// -------------------------------------------------------------------------------------------------------



// 4 reverse of array(displauy)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter size of element" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter element of arr" << " " << endl;
//     for (int i=0;i<n;i++){
//     cin >> arr[i];} 
//     for (int i=0;i<n;i++){ 
        
        
//     }
//     cout<<"reverse of array"<<endl;
//     for (int j=n-1;j>=0;j--){
//         cout<<" "<<arr[j];
//     }
//     return 0;

// }

//  --------------------------------------------------------------------------------------------------


// 5 reverse array (in place)


//  #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter size of element" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter element of arr" << " " << endl;
//     for (int i=0;i<n;i++){
//     cin >> arr[i];} 
//     int i=0;
//     int j=n-1;
//     cout<<"reverse array in place "<<endl;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for (int k=0;k<n;k++)
//     cout<<arr[k]<<" ";
// }  


// -------------------------------------------------------------------------------------------------

//  6  LINEAR SEARCH

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[n] = {43, 5, 68, 87, 20};
//     int t = 67;  // target element
//     bool found = false;  // flag to check if element is found

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == t) {
//             cout << "Element " << t << " found at index " << i << endl;
//             found = true;
//             break; // optional: agar first match ke baad search band karna ho
//         }
//     }

//     if (!found) {
//         cout << "Element " << t << " not found in array" << endl;
//     }

//     return 0;
// }


// --------------------------------------------------------------------------------------------------------


// 7 Count Even & Odd 


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter size of element" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter element of arr" << " " << endl;
//     for (int i=0;i<n;i++){
//     cin >> arr[i];} 
//     int even_count=0;
//     int odd_count=0;
//     for(int i=0;i<n;i++){ 
//     if(arr[i]%2==0){ 
//     even_count+=1;
//     }else {
//         odd_count+=1;
//     }

// }
// cout<<"number of even "<<even_count<<endl;
// cout<<"number of odd "<<odd_count<<endl;

// }


//-------------------------------------------------------------------------------------------------------------------------------------


 // 8 sum of even and odd no 

 // #include <iostream>
 // using namespace std;
// int main()
// {
//     int n;
//     cout << "enter size of element" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter element of arr" << " " << endl;
//     for (int i=0;i<n;i++){
//     cin >> arr[i];} 
//     int even_sum=0;
//     int odd_sum=0;
//     for(int i=0;i<n;i++){ 
//     if(arr[i]%2==0){ 
//     even_sum+=arr[i];
//     }else {
//         odd_sum+=arr[i];
//     }

// }
// cout<<"sum of even "<<even_sum<<endl;
// cout<<"sum of odd "<<odd_sum<<endl;

//}

//-------------------------------------------------------------------------------------------------------------------------------------


// 9 check if array is sorted



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements of array: ";
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     bool isSorted = true;
//     for(int i = 0; i < n-1; i++) {
//         if(arr[i] > arr[i+1]) {
//             isSorted = false;
//             break;
//         }
//     }

//     if(isSorted)
//         cout << "Array is sorted" << endl;
//     else
//         cout << "Array is not sorted" << endl;

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------


// 10 find second largest no n array


// #include <iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             secondLargest = largest;  // update second largest
//             largest = arr[i];         // update largest
//         } 
//         else if (arr[i] < largest && arr[i] > secondLargest) {
//             secondLargest = arr[i];
//         }
//     }

//     if (secondLargest == INT_MIN) {
//         cout << "No second largest element found!" << endl;
//     } else {
//         cout << "Second Largest = " << secondLargest << endl;
//     }
//     cout<<"largest no is ="<<largest;

//     return 0;
// }


//-------------------------------------------------------------------------------------------------------------------------------------


// 11 find second smallest


// #include <iostream>
// #include <climits> // for INT_MAX
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int smallest = INT_MAX;
//     int secondSmallest = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < smallest) {
//             secondSmallest = smallest; // update 2nd smallest
//             smallest = arr[i];         // update smallest
//         }
//         else if (arr[i] > smallest && arr[i] < secondSmallest) {
//             secondSmallest = arr[i];
//         }
//     }

//     if (secondSmallest == INT_MAX) {
//         cout << "No second smallest element found!" << endl;
//     } else {
//         cout << "Second Smallest = " << secondSmallest << endl;
//     }

//     return 0;
// }


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//12 Copy Array


// #include <iostream>
// #include <climits> // for INT_MAX
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int a[n],b[n];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for(int i=0;i<n;i++){
//         b[i]=a[i];
//     }
//     cout<<"after copying array b[n]"<<endl;
//    for (int i=0;i<n;i++){
//     cout<<b[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
// }

//-----------------------------------------------------------------------------------------------------------------


// 13 Find Frequency of an Element

// #include <iostream>
// #include <climits> // for INT_MAX
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int a[n];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//    }
//        int count=0;
//        int t =2;
//        for(int i=0;i<n;i++){ 
//         if(a[i]==t){
//             count+=1;
//         }
//     }
//         cout<<"frequency of 2 in aray = "<<count<<" "<<endl;
//        return 0;
// }

//-------------------------------------------------------------------------------------------------------------

//14 Replace Element 

#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main() {
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    arr[4]=40;
    cout<<"updated array"<<endl;
    for(int i=0;i<6;i++)
    { 
        cout<<arr[i]<<" ";
       }
       return 0;
}


//-------------------------------------------------------------------------------------------------------------------------



// 15
