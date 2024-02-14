class finalexample
{
	public static void main(String args[])
	{
		//double pi = 3.14;
		
		//pi = 3.15;   // value will be changed

		final double pi = 3.14;

		pi = 3.15; // value will not be changed error will occur

		System.out.println(pi);
	}
}