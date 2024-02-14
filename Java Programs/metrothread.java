class metrothread extends Thread
{	
	public void run()
	{
		try
		{
			String metro[] = {"Gwarighat", "Bhedaghat", "Global", "Tilwara", "Dumna"};

			for(int i=0; i<metro.length; i++)
			{
				System.out.print(" " +metro[i]);
				sleep(2000);
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
	
	public static void main(String args[])
	{
		metrothread obj =  new metrothread();
		obj.start();
	}
}