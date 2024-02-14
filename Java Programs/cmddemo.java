class cmddemo
{
	public static void main(String args[])
	{
		//System.out.println(args[0] + args[1]);

		//int x = Integer.parseInt(args[0]);
		//int y = Integer.parseInt(args[1]);

		//int res = x + y;
		
		//System.out.println("sum " + res);

		//System.out.println(args[1]);
		//System.out.println(args[2]);
		
		//using input string
		//System.out.println(args[0]);
		//System.out.println(args[1]);

		//for loop

		//for(int i=0; i<5; i++)
		//{
		//	System.out.println(args[i]);
		//}

		//array length

		int size = args.length;
		System.out.println("No of elements : " + size);

		for(int i=0; i<size; i++)
		{
			System.out.println(args[i]);
		}
	}
}

