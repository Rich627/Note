import java.util.Scanner;

public class learn18 {
    public static void main(String[] args){
        //死循環
        //for(;;){}
        Scanner scan = new Scanner(System.in);
        int postiveCount = 0;
        int negativaCount = 0;
        while(true){
            System.out.println("輸入數字");
            int num = scan.nextInt();
            if (num >0 ){
                postiveCount++;
            }
            else if (num < 0){
                negativaCount++;
            }
            else{
                break;
            }
        }
        System.out.println("正數有" + postiveCount );
        System.out.println("負數有" + negativaCount);
    }
    
}
