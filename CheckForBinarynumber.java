class CheckForBinarynumber {

    static boolean isBinary(String s){
        for( int i = 0 ; i < s.length() ; i++){
            if( s.charAt(i) != '0' && s.charAt(i) != '1'){
                return false ;
            }
        }
        return true ;
    }

    public static void main(String [] args){
        String s = "01010101010";
        System.out.println(isBinary(s));
    }

}
