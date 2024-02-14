class thread1 extends Thread
{
	public void run()
	{
		try
		{
			for(int i=0; i<10; i++)
			{
				System.out.println(" Sana " +i);
				sleep(1000);
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class thread2 extends Thread
{
	public void run()
	{
		try
		{
			for(int i=50; i<80; i+=2)
			{
				System.out.println(" Rupali " +i);
				sleep(500);
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}

class multithread
{
	public static void main(String args[])
	{
		thread1 th1 = new thread1();
		thread2 th2 = new thread2();
		th1.start();
		th2.start();
	}
}