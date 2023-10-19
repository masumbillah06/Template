void binform(int n){
    bool start = false;
    for(int i=31; i>=0; i--){
        int bit = (n>>i)&1;
        if(bit) start = true;
        if(start) cout << bit ;
    }
    cout << endl;
}
