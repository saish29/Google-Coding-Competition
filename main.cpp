 #include<bits/stdc++.h>


int main() {
    using namespace std;
    int testCases ; 
    cin >> testCases ;
    for(int cas = 1 ; cas <= testCases ; cas ++) 
    {
        int noHouses , budget , count = 0 ; 
        cin >> noHouses >> budget ;
        vector<int> a(noHouses) ; 
        for(int i = 0 ; i < noHouses ; i ++) 
        :cin >> a[i] ;
        sort(a.begin(), a.end()) ;
        for(int i = 0 ; i < noHouses ; i ++) {
            if(a[i] > budget) 
            break ;
            else {
                budget -= a[i] ;
                count ++ ;
            }
        }
        printf("Case #%d: %d\n", cas, count) ;
    }
}
