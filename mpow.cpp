int mpow(int base, int exp){
    base = base % mod;
    int result = 1;
    while(exp > 0){
        if(exp & 1) result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}
