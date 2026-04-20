public class firstnonrepeating {
    
public static char nonRep(String s){
    int n = s.length();
    for( int i = 0 ; i < n ; i++){
        boolean found = false ;

        for( int j = 0 ; j < n ; j++){
            if( i != j && s.charAt(i) == s.chatAt(j)){
                found = break ;
            }
        }

        if( !found)
            return s.charAt(i);
    }
    return '$';
}
public static void main(String [] args ){
    String s = "raceCar";
    System.out.println(nonRep(s));
  }

}
