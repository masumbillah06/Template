int binbits(int n){
    int i = 31;
    while(i>=0){
        cout << ((n>>i)&1);
        i--;
    }
    cout << endl;
}
