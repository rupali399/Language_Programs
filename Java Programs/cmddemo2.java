class  cmddemo2
{
	public static void main(String []ar)
	{
		int sum = 0;
		
		for(int i=0; i<ar.length; i++)
		{
			System.out.println(ar[i]);
			int d = Integer.parseInt(ar[i]);
			sum = sum + d;
		}
		System.out.println("Total : " + sum);
	}

}