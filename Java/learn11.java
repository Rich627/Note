import java.util.Scanner;

public class learn11 {
    public static void main(String[] args){
        
        //scanner 提供獲取byte, short, int, long, float, double, boolean, string和charAt()
        Scanner scan = new Scanner(System.in);
        System.out.println("請輸入名稱");
        String name = scan.next();
        System.out.println("輸入年齡");
        int age = scan.nextInt();
        System.out.println("輸入性別");
        //只取第一個字
        char gender = scan.next().charAt(0);
        System.out.println("name:" + name);
        System.out.println("age:" + age);
        System.out.println("gender:" + gender);
        //scanner通常要關閉
        scan.close();
    } 
}