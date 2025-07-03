#include <string>
#include <iostream>

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

class Solution {
public:
    int romanToInt(std::string s)
    {
        int num = 0 , prev = 0, sum = 0;
        for (int i = 0; i < s.size(); i++) 
        {
            switch (s[i]) {
            case 'I':
                num = I; break;
            case 'V':
                num = V; break;
            case 'X':
                num = X; break; 
            case 'L':
                num = L; break;
            case 'C':
                num = C; break;
            case 'D':
                num = D; break;
            case 'M':
                num = M; break;
            }
            if (i != 0) {
                if (num <= prev) {
                    sum += num;
                }
                else if (num > prev) {
                    sum = sum - (2*prev);
                    sum += num;
                }
            }
            else sum += num;
            prev = num;


        }
        return sum;
    }
}s1;

int main()
{
    std::string temp = "CLXIV";
    
    s1.romanToInt(temp);
}
