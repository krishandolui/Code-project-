import java.text.DecimalFormat ;


public class angleb{
    static double getMin(double x , double y ){
        return ( x > y )  ? x : y ;
    }

    static void getAngle(String s ){
        int h = Integer.parseInt(s.substring( 0 , 2));
        int m = Integer.parseInt(s.substring( 3 , 5));

        h = h % 12;


        double hrAngle = 0.5 * ( h * 60 + m);


        double minAngle = 6 * m ;

        double angle = Math.abs(hrAngle - minAngle );

        return getMin( 360 - angle , angle );
    }

    public static void main(String[] args ){
        String s = "06:00";
        DecimalFormat df = new DecimalFormat("0.000");
        System.out.println(df.format(getAngle(s)));
    }
}