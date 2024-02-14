class threaddemo extends Thread
{
	public void run()
	{
		try
		{
			for(int i=0; i<=10; i++)
			{
				System.out.println(getName());
				
				sleep(1000);
				
				if(i == 5)
				{
					stop();
				}
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}


	public static void main(String args[])
	{
		threaddemo obj = new threaddemo();
		obj.setName("Bangalore");
		obj.start();

	}
}