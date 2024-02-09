// PROGRAM TO CREATE AND ADD TWO SQUARE MATRICES OF 2X2
// #include <iostream>
//     using namespace std;
// int main()
// {

//     int n, A[10][10], B[10][10], C[10][10];

//     cout << "Enter number of elements for the matrix ";
//     cin >> n;

//     // ENTERING THE ELEMENTS OF THE TWO MATRICES USING LOOP
//     cout << "Enter the elements of matrix A" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cin >> A[i][j];
//         }
//     }

//     cout << "Enter the elements of matrix B" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cin >> B[i][j];
//         }
//     }

//     // DISPLAYING THE TWO MATRICES USING LOOP
//     cout << "Matrix A" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//             cout << A[i][j] << " ";
//         cout << "\n";
//     }

//     cout << "Matrix B" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//             cout << B[i][j] << " ";
//         cout << "\n";
//     }

//     // ADDING BOTH THE MATRICES
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             C[i][j] = A[i][j] + B[i][j];
//         }
//     }

//     // DISPLAYING THE SUM
//     cout << "Sum of the two matrices is" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//             cout << C[i][j] << " ";
//         cout << "\n";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *a[5], sum = 0, product = 1;

//     cout << "Enter number of elements for the array ";
//     int n;
//     cin >> n;

//     cout << "Enter elements for the array " << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> *a[i];
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         sum = sum + *a[i];
//     }

//     cout << "Sum of the elements in array is: " << sum << endl
//          << endl;

//     for (int i = 0; i < n; ++i)
//     {
//         product = product * *a[i];
//     }
//     cout << "Product of each element in array is: " << product;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *a[20], n, m;

//     cout << "Enter the number of elements" << endl;
//     cin >> m;

//     cout << "Enter each element" << endl;
//     for (int i = 0; i < m; ++i)
//         cin >> *a[i];

//     cout << "Enter the required indice for the array " << endl;
//     cin >> n;

//     for (int i = 0; i <= n; ++i)
//     {
//         if (i == n)
//             cout << "Your requested element is " << *a[i];
//         else
//             cout << "Error! indice does not exist";
//         break;
//     }
//     return 0;
// }

//Largest, second largest, smallest, second smallest
// #include<iostream>
// int main(){ 
// using std::cout;
// using std::cin;

// int n,A[n],large=0,slarge=0,small=1000,ssmall=1000;

// cout<<"Enter number of elements: ";
// cin>>n;

// cout<<"Enter elements for an Array \n";
// for (int i = 0; i < n; i++)
// {
//     cin>>A[i];
// }

// for (int i = 0; i < n; i++)
// {
//     if(A[i]>large)
//     {
//         slarge=large;
//         large=A[i];
//     }

//     else if(A[i]>slarge&&large>slarge)
//     {
//         slarge=A[i];
//     }

//     if(small>A[i])
//     {
//         ssmall=small;
//         small=A[i];
//     }

//     else if(ssmall>A[i]&&A[i]>small)
//     {
//         ssmall=A[i];
//     }
// }

// cout<<"Elements \n"<<large<<std::endl;
// cout<<slarge<<std::endl;
// cout<<small<<std::endl;
// cout<<ssmall;
// return 0;
// }

#include<iostream>
using std::cout;
using std::cin;
int main(){ 
int p,n,m,l, A[100][100],B[100][100],C[100][100]={0};

cout<<"Enter no. of rows for A: ";
cin>>m;
cout<<"Enter no. of columns for A: ";
cin>>n;
cout<<"Enter no. of columns for B: ";
cin>>l;

cout<<"Enter elements of A array\n";

for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>A[i][j];
    }
    
}

cout<<"Enter elements of B array\n";
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < p; j++)
    {
        cin>>B[i][j];
    }
    
}

cout<<"A matrix\n";
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    
    {cout<<A[i][j]<<" ";}
        cout<<"\n";
        
}

cout<<"B matrix\n";
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < p; j++)
    
    {cout<<B[i][j]<<" ";}
        cout<<"\n";
        
}

cout<<"Product of A and B matrix \n";
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < p; j++)
    {
        for (int k = 0; k < n; k++)
        {
            C[i][j]+=A[i][k]*B[k][j];
        }
    }
}
        
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < p; j++)
    
    {cout<<C[i][j]<<" ";}
        cout<<"\n";
        
}

return 0;
}