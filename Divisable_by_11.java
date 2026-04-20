class GFG{
    public static boolean divBy11(String s){
        int n = Integer.parseInt(s);
        return n % 11 == 0 ;
    }

    public static void main(String [] args ){
        String s = "769945";

        if ( divBy11(s))
            System.out.println("True");
        else 
            System.out.println("false");
    }
}
