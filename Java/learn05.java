public class learn05 {
    public static void main(String[] args){
        //不同type做運算時會都轉換成單位大的
        int i1=10;
        int i2=i1;
        long l1 = i1;
        //特殊情況:byte, short, char類型的變量相互做運算都是int
        char c = 'a';
        int i = 5;
        System.out.println(c+i);
    }
}
