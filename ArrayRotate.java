// public class ArrayRotate {
//     static void leftRotateByone ( int arr [] , int n ){
//         int temp = arr[0];
//         for ( int i = 0 ; i < n - 1 ; i++){
//             arr[i] = arr[i+1];
//         }
//         arr[n - 1 ] = temp ;
//     }


//     static void leftRotate( int arr[] , int d , int n){
//         d = d % n ;

//         for ( int i = 0 ; i < d ; i++){
//             leftRotateByone( arr , n);
//         }

//     }

//     static void printArray( int arr[] ,int n){
//         for ( int i = 0 ; i < n ; i++){
//             System.out.println(arr[i] + "  ");
//         }
//         System.out.println();
//     }

//     public static void main( String [] args ){
//         int arr[] = { 1 ,2 ,3 ,4 ,5 , 6, 7 , 8};
//         int n = arr.length ;
//         int d = 2 ;


//         System.out.println("Original array:");
//         printArray( arr , n);


//         leftRotate ( arr , d , n );

//           System.out.print("Array after rotated by " + d + " positions is: ");
//         printArray(arr, n);

//     }




// }
class GfG {

    // Function to calculate x raised to the power y
    public static int power(int x, int y) {
        if (y == 0)
            return 1;
        if (y % 2 == 0)
            return power(x, y / 2) * power(x, y / 2);
        return x * power(x, y / 2) * power(x, y / 2);
    }

    // Function to count number of digits
    public static int order(int n) {
        int t = 0;
        while (n != 0) {
            t++;
            n = n / 10;
        }
        return t;
    }

    // Function to check whether the given number is Armstrong or not
    public static boolean armstrong(int n) {
        int x = order(n);
        int temp = n, sum = 0;

        while (temp != 0) {
            int r = temp % 10;
            sum += power(r, x);
            temp = temp / 10;
        }

        return sum == n;
    }

    public static void main(String[] args) {
        int n = 153;
        if (armstrong(n)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
}