int randomfunction(int b, int n){
    int a = 1;
    if(n == 0){
        return 1;
    }
    while(n>1){
        if(n%2 == 1){
            a = b*a;
            n--;
        }
        b = b*b;
        n = n/2;
    }

    return a*b;
}