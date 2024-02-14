import java.util.Scanner;

class userinput
{
	static public void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter I value : ");
		int var1 = sc.nextInt();

		System.out.println("Enter II value : ");
		int var2 = sc.nextInt();

		int res = var1 + var2;
		System.out.println("Sum : " + res);
	}
}