#include <stdio.h>

int search(double key, double data[], int n)
{
    int left = 0, right = n-1, mid;
    
    while( left <= right ){
        mid = (left+right)/2;
        if( data[mid] == key ){
            return mid;
        } else if ( data[mid] < key ){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void)
{
    double data[10] = { 0.2, 1.5, 3.1, 5.4, 7.0, 9.8, 12.3, 15.4, 19.0, 24.6};
    double x;
    int found;

    scanf("%lf", &x);
    found = search(x, data, 10);
    if( found >= 0){
        printf("Found %lf at data[%d]\n", x, found);
    } else {
        printf("Not found %lf\n", x);
    }

    return 0;
}