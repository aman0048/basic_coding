 #include<iostream>
 using namespace std;

 int sum0felements(int a[],int Size) //int *a or int a[].....is the same
 // in this array act as a integer pointer to it displays size 4 but in main it is an array so it shows 20
 {
 int i, sum =0;
 // now instead of passing size in fun we will calculate size in fun only
//    Size = (sizeof(a)/sizeof(a[0]));
//     cout << " SOE - size of a = " << sizeof(a) << "   " << "size of(a[0]) = " << sizeof(a[0]) << endl;
    for(i = 0; i < Size; i++)
    {
        sum += a[i];  // a[i] is *(a+i)
    }
return sum;
 }

 int main()
 {
     int a[] = {1,2,3,4,5};
     int Size = sizeof(a)/sizeof(a[0]); // we can pass size in main directly
     // sizeof a gives size 20 coz of 5 elements but if we want size of one element
     //we have to divide it by size of a[0]  we get number of elements of elements in array

     int total = sum0felements(a ,Size);  // a can be used for &a[0]
     cout << " sum of elements " << total << endl;
     cout << " Main - size of a = " << sizeof(a) << "   " << " size of(a[0]) = " << sizeof(a[0]) << endl;

  return 0;
 }
