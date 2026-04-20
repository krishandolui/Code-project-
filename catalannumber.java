class GFG {
    static int findCatalan( int n){
        if ( n <= 1 ){
            return 1;
        }
        int res = 0 ;

        for ( int i = 0 ; i < n ; i++){
            res += findCatalan(i) * findCatalan( n - i - 1);
        }
        return res ;
    }

    public static void main(String [] args ){
        int n = 6 ;
        int res = findCatalan(n);
        System.out.println(res);
    }
}