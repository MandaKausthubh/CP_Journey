
// Complete Search also known as Brute Force is an inefficient way of searching the Sample Space for a solution.
// However it gives us a very accurate result. We can also reduce the search space by reducing the search space.


// Find and display all pairs of 5-digit numbers that collectively
// use the digits 0 through 9 once each, such that the first number divided by the second is
// equal to an integer.
#include <iostream>
void FiveDigitCombinations() {
    for(int N = 2; N <= 79; N++){
        for(int abcde = 1234; abcde <= 98765/N; abcde++){
            int fghij = abcde/N;
            int tmp = abcde;
            int flag = (abcde < 10000) ? 1 : 0;
            while(tmp){flag |= 1 << (tmp % 10); tmp /= 10;}
            tmp = fghij;
            while(tmp){flag |= 1 << (tmp % 10); tmp /= 10;}
            if(flag == (1 << 10) - 1){std::cout << abcde << ' ' << fghij << '\n';}
        }
    }
}

int main(void) {
    FiveDigitCombinations();
    return 0;
}



