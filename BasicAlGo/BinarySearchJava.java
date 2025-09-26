import java.util.Scanner;

public class BinarySearchJava {
    
    public static int binarySearch(int findNUM, int array[], int sz){
        
        int right = 0;
        int left = sz - 1;

        while(right <= left){

            int mid = (left+right)/2;

            if(array[mid] == findNUM){
                return mid;
            }
            else if(array[mid] > findNUM){
                left = mid - 1;
            }
            else if(array[mid] < findNUM){
                right = mid +1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {

        int num;
        System.out.print("Enter any number : ");
        Scanner input = new Scanner(System.in);
        num = input.nextInt();

        System.out.print("Enter the array size : ");
        int sz;
        sz = input.nextInt();

        int[] array;
        array = new int[sz];

        for(int i = 0; i < sz; i++){

            array[i] = input.nextInt();
        }

        int findNum = binarySearch(num, array, sz);

        if(findNum != -1)
            System.out.println("Found the array element");
        else
            System.out.println("Not found the array element");
            
        input.close();    
    }
}