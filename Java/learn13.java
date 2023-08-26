public class learn13 {
    public static void main(String[] args){
        int num=1;
        //switch類型只能是byte, short, char, int, String
        //如果沒加上break會繼續執行後面的不管是否對應的case
        switch(num){
            case 0:
                System.out.println("zero");
                break;
            case 1:
                System.out.println("one");
                break;
            case 2:
                System.out.println("two");
                break;
            case 3:
                System.out.println("three");
                break;
            default:
                System.out.println("other");
        }
    }
}
