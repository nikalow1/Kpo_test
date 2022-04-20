#include <iostream>
#include <string>
#include <cassert>
using namespace std;




void sort(int* a, int n)
{
    for (int i = n - 1; i >= 1; i--)
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int foo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = foo;
            }
        }
}

bool compareArrays(int* Array, int* ExpectedArray, int n) {
    for (int i = 0; i < n; i++) {
        if (Array[i] != ExpectedArray[i]) return false;
    }
    return true;
}

void doTest() {
    int A1[] = { 1010, 1010010 };
    int Ae1[] = { 1010, 1010010 };
    sort(A1, 2);
    assert(compareArrays(A1, Ae1,2));
    int A2[] = { 0101,0101101 };
    int Ae2[] = { 0101, 0101101 };
    sort(A2, 2);
    assert(compareArrays(A2, Ae2, 2));
    int A3[] = { 1010101,1101011 };
    int Ae3[] = { 1010101, 1101011 };
    sort(A3, 2);
    assert(compareArrays(A3, Ae3, 2));
    int A4[] = { 01,10 };
    int Ae4[] = { 01, 10 };
    sort(A4, 2);
    assert(compareArrays(A4, Ae4, 2));
    int A5[] = { 10101,10100010 };
    int Ae5[] = { 10101, 10100010 };
    sort(A5, 2);
    assert(compareArrays(A5, Ae5, 2));
}

int main() 
{
    doTest();
    int n = 0;
    int* a;
    cout << "Skol'ko chisel?" << endl;
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, n);
    cout << "After sort" << endl;
    for (int i = 0; i < n; i++) {
        cout <<"0b"<< a[i] << endl;
    }
    
}
