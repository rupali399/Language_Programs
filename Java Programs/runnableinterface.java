class xyz
{
	void func()
	{
		System.out.println("fn working");
	}
}

class runnableinterface extends xyz implements Runnable
{
	public void run()
	{
		for(int i=1; i<=10; i++)
		{
			System.out.println(i);
			try
			{
				Thread.sleep(1000);
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
		}
	}
	public static void main(String args[])
	{
		runnableinterface obj = new runnableinterface();
		
		Thread th = new Thread(obj);
		th.start();
	}
}