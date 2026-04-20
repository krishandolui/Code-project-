public class CheckforString {
    
public static boolean areStringsSame(String s1 , String s2){
    return s1.equals(s2);
}

public static void main(String [] args ){
    String s1 = "abc";
    String s2 = "abcd";

    if(areStringsSame(s1 , s2)){
        System.out.println("yes");
    }else{
        System.out.println("No");
    }
  }

}


