public class learn09 {
    public static void main(String[] args){
        //true就是statement 1
        String info = (2>1)? "statement 1":"statemetn2";
        System.out.println(info);
        //必須市相容/兼容類型
        double res = (2>1)? 1:2.0;
        System.out.println((res));
    }
    
}
