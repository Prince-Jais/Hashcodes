package examples;
import java.util.Scanner;
public class Minimum_Currency_Notes {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter your ammount:");
		int amt = input.nextInt();
		
		int currencies[] = {2000,500,200,100,50,20,10,5,4,2,1};
		for(int i=0; i<currencies.length; i++)
		{
		int	temp=amt/currencies[i];
		System.out.println(currencies[i]+" * "+temp+"  = "+currencies[i]*temp);
		amt=amt%currencies[i];
		}
		
		
	}

}
