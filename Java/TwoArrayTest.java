public class TwoArrayTest{
    public static void main(String[] args){
        
        int arr1[] = new int[]{1, 2, 3};
        //二維陣列, 3種方式
        int arr2[][] = {{1, 2}, {3, 4}, {5, 6}};
        String[][] arr3 = new String[3][4];
        double[][] arr4 = new double[2][];

        System.out.println(arr2[0][1]);
        
        arr3[0][1] = "Tom";
        System.out.println(arr3[0][1]);
        System.out.println(arr3[0][2]);

        arr4[0] = new double[4];
        arr4[0][0] = 2.0;

        System.out.println(arr2.length);
        System.out.println("--------------------------------");

        for (int i=0; i<arr2.length; i++){
            for (int j=0; j<arr2[i].length; j++){
                System.out.println(arr2[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
