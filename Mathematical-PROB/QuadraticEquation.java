import java.util.Scanner;

public class QuadraticEquation{

    public static void main(String[] args) {
        
        int a,b,c;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a : ");
        a = input.nextInt();
        System.out.print("Enter b : ");
        b = input.nextInt();
        System.out.print("Enter c : ");
        c = input.nextInt();

        int d = (b*b)-(4*a*c);

        if(d >0){

            double X1 = (-b +Math.sqrt(d))/(2*a);
            double X2 = (-b -Math.sqrt(d))/(2*a);

            System.out.println(X1 + " " + X2);
        }
        else if( d == 0){

            int X = -b/(2*a);
            System.out.println(X + " is an unique root");
        }
        else{
            System.err.println("This roots are not real");
        }

        input.close();
    }
}