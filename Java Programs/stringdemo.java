class stringdemo
{
	public void func()
	{
		//String str1 = "We ARe LearNIng JAva IN Global COLLEGE";
		//System.out.println(str1);

		//System.out.println("\n--------------------------------------\n");
		
		// ----------convert all characters into upper case
		//String res = str1.toUpperCase();

		// ----------convert all characters into upper case
		//String res = str1.toLowerCase();

		// -----------replace single word 
		//String res = str1.replace('A', 'Z');

		//------------replace whole word
		//String res = str1.replace("JAva", "Cloud");

		//int res = str1.length();
		//System.out.println(res);

		//------------trim function

		//String str = "   Global   ";

		/*System.out.println(str);
		int len = str.length();
		System.out.println(len);
		String res = str.trim();
		System.out.println(res);
		int len2 = res.length();
		System.out.println(len2);*/

		// -----------charAt function	

		//String str = "Global";

		//char res = str.charAt(2);
		//System.out.println(res);

		// ------------indexOf function

		//int res = str.indexOf('G');
		//System.out.println(res);

		// ------------concatenate strings using concat

		/*String str1 = "Global";
		String str2 = "College";

		String res = str1.concat(str2);
		System.out.println(res);*/

		// ------------substring
		/*String str1 = "Global College";
		System.out.println(str1);
		//String res = str1.substring(3);
		String res = str1.substring(3, 7);
		System.out.println(res);*/

		// ----------------compare 2 strings with case sensitive
		/*String str1 = "Global";
		String str2 = "Global";
		
		boolean res = str1.equals(str2);
		System.out.println(res);*/

		// ----------------compare 2 strings without case sensitive
		/*String str1 = "GloBal";
		String str2 = "Global";
		
		boolean res = str1.equalsIgnoreCase(str2);
		System.out.println(res);*/

		// ----------------compare 2 strings using compareTo with case sensitive
		String str1 = "Global";
		String str2 = "GlObal";
		
		int res = str1.compareTo(str2);
		if(res == 0)
		{
			System.out.println("Match " +res);
		}
		else
		{
			System.out.println("Not Match " +res);
		}
 	}
	public static void main(String args[])
	{
		stringdemo obj = new stringdemo();
		obj.func();
	}
}