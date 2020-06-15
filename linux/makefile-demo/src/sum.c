#include "sum.h"

long sum_num(int start,int end){
    long sum = 0;
    if( start > end){
        return -1;
    }
    for(;start<=end;start++){
        if(start==0){
            continue;
        }
        if(start%2==0){
            sum+=start;
        }
    }
    return sum;
}