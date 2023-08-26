public class learn20 {
    public static void main(String[] args){
        

        //定義array方式, 初始話後大小就固定了
        double[] prices;
        prices = new double[]{20.32, 43.22, 43.22};
    
        String[] foods;
        foods = new String[4];
        foods[0] = "apple";
        foods[1] = "banana";
        foods[2] = "peach";
        foods[3] = "ice";
        int arr1[] = {2, 3};
        

        System.out.println(prices[0]);
        System.out.println(prices[2]);
        System.out.println(foods.length);

        for (int i=1; i<arr1.length; i++){
            System.out.println(arr1[i]);
        }

        int arr2[] = {1, 2, 3};
        int arr3[] = arr2;
        arr3[0] = 3;
        //arr2也會跟著變
        for (int i=1; i<arr2.length; i++){
            System.out.println(arr2[i]);
        }
    }
}
