public class ArrayReverse{
    public static void main(String[] args){

        int arr[] = new int[]{1, 2, 3, 4, 5, 6};

        for(int i=0, j=arr.length-1; i<j; i++, j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        for (int i=0; i<=arr.length-1; i++){
            System.out.println(arr[i]);
        }
    }
}