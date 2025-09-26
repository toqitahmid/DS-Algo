import java.util.Scanner;

public class SelectionSortJava {

    public static void inputArray(int array[], int sz){

        System.out.println("Enter array elements : ");
        Scanner input = new Scanner(System.in);
        for(int i = 0; i < sz; i++){
            array[i] = input.nextInt();
        }
    }
    public static void outputArray(int array[], int sz){
        
        System.out.println("Array elements are : ");
        for(int i = 0; i < sz; i++){
            System.out.print(array[i]+ " ");
        }
    }

    public static void sorted(int array[], int sz){

        int i,j,min_idx;

        for(i = 0; i < sz-1; i++){

            min_idx = i;
            for(j = i + 1; j < sz; j++){

                if(array[j] < array[min_idx]){
                    min_idx = j;
                }
            }
            if(min_idx != i){
                int temp = array[min_idx];
                array[min_idx] = array[i];
                array[i] = temp;
            }
        }
    }
    public static void main(String[] args){

        int sz;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter array size : ");
        sz = input.nextInt();

        int[] array;
        array = new int[sz];
        inputArray(array,sz);
        sorted(array, sz);
        outputArray(array,sz);
    }
}