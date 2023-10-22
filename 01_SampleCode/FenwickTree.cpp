
// FENWICK TREE:
// It is an easy and a quick way to handle Dynamic Queries of frequencies and RangeSumQueries.
// It works with the  following principle:
// - Every ellement of Fenwick tree(implemented as an Array, FT[]) stores the sum of frequencies 
//   in the given range [(i - LSOne(i) + 1) ..., i] ,i.e,
//   FT[i] = arr[i - LSOne(i) + 1] + ... + arr[i];
//
// - To Obtain the the cumilative sum of 
// RSQ[1, n] = RSQ[n - n' + 1 , n] + RSQ[(n - n') - (n-n')' + 1, n - n'] ... 
// This follows the fact that every number can be represented as a sum of powers of two.
// Therefore RSQ[1, n] = FT[n] + FT[n'] + FT[n''] ... where n' = n - LSOne(n);
//


#include <vector>
#define LSOne(n) (n&(-n))
typedef std::vector<int> vi ;

int RSQ(int n, vi FT) {
    int ans = FT[n], j = n - LSOne(n);
    while(j > 0){
        ans += j;
        j = j - LSOne(n);
    }
    return ans;
}

void Update( int i ,int delta, vi FT) {
    FT[i] += delta;
    int j = i + LSOne(i);
    while(j < FT.size()){
        FT[j] += delta;
        j = j + LSOne(j);
    }
}


// Use Update repeatedly to Create the actual Fenwick Tree.
//





