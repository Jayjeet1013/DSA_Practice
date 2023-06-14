//Write a function that takes the binary representation of an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
//Leetcode 191

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;

        while(n!=0){
            if(n&1){
               count++; 
            }
             n=n>>1;
        }
       return count;
    } 
};
   