// Your code here...
int fibonacciSeries(int n){
    if(n==0){
        return 0;
    } if(n==1){
        return 1;
    }
    int fiboNm1 = fibonacciSeries(n-1);
    int fiboNm2 = fibonacciSeries(n-2);
    int fibo = fiboNm1 + fiboNm2;
    // printf("%d", fibo);
    return fibo;
}