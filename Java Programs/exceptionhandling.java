import java.util.Scanner;

/*class exceptionhandling
{
	void func1()
	{
		// Error occur
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter I value");
		int var1 = sc.nextInt();

		System.out.println("Enter II value");
		int var2 = sc.nextInt();

		int res = var1 / var2;
		System.out.println("Division : " + res);

		// Exception Handling
		
		try
		{	
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter I value");
			int var1 = sc.nextInt();

			System.out.println("Enter II value");
			int var2 = sc.nextInt();

			int res = var1 / var2;
			System.out.println("Division : " + res);
		}
		catch(Exception e)
		{
			System.out.println("catch block --- Problem occur");
			//System.out.println(e);
			//System.out.println(e.getMessage());
		}
		finally
		{
			System.out.println("finally block");
		}
		
	}

	void func2()
	{
		System.out.println("Second function is working");
	}
	public static void main(String args[])
	{
		exceptionhandling obj = new exceptionhandling();
		obj.func1();
		obj.func2();
	}
}*/



//  ArrayIndexOutOfBoundException

class exceptionhandling
{
	void func1()
	{
		
		try
		{	
			Scanner sc = new Scanner(System.in);
			int arr[] = new int[5];
			System.out.println("Enter elements of array");
			
			for(int i=0; i<5; i++)
			{
				arr[i] = sc.nextInt();
			}

			System.out.println("-------array element--------");
			
			for(int i=0; i<5; i++)
			{
				System.out.println(arr[i]);
			}

		}
		catch(ArrayIndexOutOfBoundsException e)
		{
			//System.out.println("catch block --- Problem occur");
			System.out.println(e);
			//System.out.println(e.getMessage());
		}
		finally
		{
			System.out.println("finally block");
		}
		
	}

	void func2()
	{
		System.out.println("Second function is working");
	}
	public static void main(String args[])
	{
		exceptionhandling obj = new exceptionhandling();
		obj.func1();
		obj.func2();
	}
}