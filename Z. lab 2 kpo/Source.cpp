#include <bits/stdc++.h>
#define N 1000




int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}
int main() {
    int n, i, j;
    int a[N];
    cout << "Skol'ko chisel?" << endl;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin>>a[i];
    }
    qsort(a, n, sizeof(int), cmp);
    for (i = 0; i < n; i++) {
        cout<<"0b"<< a[i]<<endl;
    }
    return 0;
}