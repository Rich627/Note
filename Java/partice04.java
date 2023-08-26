import java.util.Scanner;;

public class partice04{
    public static void main(String[] args){

        int target = (int) (Math.random()*100) + 1;

        Scanner scan = new Scanner(System.in);
        System.out.println("請輸入1-100的隨機數");
        int guess = scan.nextInt();
        int count = 1;

        while (target != guess){
            
            if (guess > target){
                System.out.println("小一點");
            }else{
                System.out.println("大一點");
            }

            guess = scan.nextInt();
            count ++;
    
        }
        System.out.println("猜對了， 一共猜了"+count+"次");
        
        scan.close();
    }
}