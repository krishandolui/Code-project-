import java.io.*;

class GFG{
    static int gcd( int a , int b)
    {
        int result = Math.min( a ,b );
        while( result > 0)
        {
            if ( a % result == 0 && b % result == 0)
            {
                break ;

            }
            result--;
        }
        return result ;
    }

public static void main(String [] args ) {
    int a = 20 , b = 28 ;
    System.out.print(gcd( a ,b));
}

}