public static String AlienDictionary {
 
    ArrayList<ArrayList<Integer>> graph = new ArrayList<>();

    int[] inDegree = new int[26];

    boolean[] exists = new boolean[26];

    for(int i = 0 ; i < 26 ; i++){
        graph.add( new ArrayList<>());
    }
    
}
