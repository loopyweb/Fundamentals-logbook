#include <stdio.h>
#include <math.h>

int main() {
    double n = 10e9;//array size
//computer A
    double speedA=15.8e12;//instructions per second
    double instA= n * log2(n); //n log n instriuctions
    double timeA=instA/speedA;//execution time in seconds

    //Computer B 
    double speedB=18.5e12;//instructions per second
    double instB= pow(n,3); //n^3 instructions
    double timeB=instB/speedB;//execution time in seconds

    //timeB in years
    double secPerYear=365.25 * 24 *3600;
    double timeByears=timeB/secPerYear;

    //results
    printf("Sorting perfomance comparison\n");
    printf("Array size:%.2e integers \n\n",n);

    printf("Computer A(M2) - Merge sort O(n log n)\n");
    printf(" Speed : %.2e instructions/sec\n",speedA);
    printf(" Instructions needed: %.3e\n",instA);
    printf(" Time: %.6f seconds\n\n",timeA,timeA*1000);

    printf("ComputerB(M3 - Quick O(n^3n");
    printf(" Speed : %.2e instructions/sec\n",speedB);
    printf(" Instructions needed: %.3e\n",instB);
    printf(" Time: %.3eseconds\n\n",timeB);
    printf(" Time: %.2e years)\n\n",timeByears,timeByears/1e9);

    printf("Recommendation\n");
    printf("Do not buy Computer B\n");
    printf("Use computer A\n");
    printf("Computer A is %.2e times faster\n",timeB/timeA);

    return 0;
}