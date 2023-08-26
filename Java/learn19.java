public class learn19 {
    public static void main(String[] args){

        for (int i=1; i<=10; i++){
            if (i % 4 == 0){
                break;
            }
            System.out.print(i);
        }
        System.out.println();
        
        for (int j=1; j<=10; j++){
            if (j % 4 == 0){
                continue;
            }
            System.out.print(j);
        }

    }
    
}
