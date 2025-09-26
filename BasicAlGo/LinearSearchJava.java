import  java.util.Scanner;
public class LinearSearchJava {
    
    public static int linearSearch(int findNum, int array[], int sz){

        for(int i = 0; i < sz; i++){

            if(array[i] == findNum)
                return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        
        int num;
        System.out.print("Enter any number : ");
        Scanner input = new Scanner(System.in);
        num = input.nextInt();

        System.out.print("Enter array size : ");
        int sz;
        sz = input.nextInt();
        int[] array;
        array = new int[sz];

        System.out.println("Now enter array elements : ");

        for(int i = 0; i < sz; i++){

            array[i] = input.nextInt();
        }

        int findNUM = linearSearch(num,array,sz);

        if(findNUM != -1)
            System.out.println("Element found!");
        else
            System.out.println("Element not found!");
            
        input.close();
    }
}
