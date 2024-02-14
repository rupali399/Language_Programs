class foreachloop
{
	public static void main(String ar[])
	{
		int sum = 0;

		for(String x: ar)
		{
			System.out.println(x);
			sum=sum+Integer.parseInt(x);
		}

		System.out.println("Sum : " +sum);
	}
}