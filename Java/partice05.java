import java.util.Scanner;
public class partice05 {
    public static void main(String[] args){

    int res = 0;
        while(res != 4){
            System.out.println("請輸入1-4的數字:");
            Scanner scan = new Scanner(System.in);
            res = scan.nextInt();
            switch(res){
                case 1:
                    System.out.println("好的存款");
                    break;
                case 2:
                    System.out.println("好的取款");
                    break;
                case 3:
                    System.out.println("餘額還有");
                    break;
                case 4:
                    break;
                default:
                    System.out.println("輸入錯誤");
            }

        }
    }
}
