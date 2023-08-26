public class learn12 {
    public static void main(String[] args){
        //獲取隨機術[0.0, 1.0)
        double d1 = Math.random();
        System.out.println(d1);
        //獲取[a ,b]區間
        int a = 10;
        int b = 2;
        int c = (int)(Math.random()*(b - a + 1 ) + a);
        System.out.println(c);
    }
    
}
