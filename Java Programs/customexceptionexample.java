import java.util.Scanner;

class AgeException extends Exception
{
	AgeException()
	{
		System.out.println("Under 18 problem");
	}	
}

class customexceptionexample
{
	void func()
	{
		try
		{
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter your age : ");
			int age = sc.nextInt();

			if(age >= 18)
			{
				System.out.println("Vote Done");
			}
			else
			{
				throw new AgeException();
			}
		}
		catch(AgeException ae)
		{
			System.out.println(ae);
		}
		finally
		{	
			System.out.println("Next voter will come");
		}
		
	}

	public static void main(String args[])
	{
		customexceptionexample obj = new customexceptionexample();
		obj.func();
	}
}