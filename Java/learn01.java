/*

用terminal編譯
1. javac xxx.java (編譯java檔)
2. java xxx (執行class檔) 

*/

//每個class只能有一個public class且必須和檔名相同
public class learn01{
    //main固定寫法, 不能更動
    public static void main(String[] args){
        //println會換行
        System.out.println("Hello World");
        //print不會換行
        System.out.print("Hello World");
    }
}

class HelloTaipei{
    public static void main(String[] args){
        System.out.println("Hello Taipei");
    }
}

class HelloTaiwan{
    public static void main(String[] args){
        System.out.println("Hello Taiwan");
    }
}