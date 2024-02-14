class pallindromeque
{

	void pallindrome()
	{
		String var = "naman";
		int size = var.length();
		int i = 0, j = size - 1;
		
		while(i < j)
		{
			if(var.charAt(i) != var.charAt(j))
			{
				System.out.println("string is not pallindrome");
				break;
			}
			
			i ++;
			j --;	
		}

		System.out.println("string is pallindrome");
	}

	public static void main(String args[])
	{
		
		pallindromeque obj = new pallindromeque();
		obj.pallindrome();
	}
}