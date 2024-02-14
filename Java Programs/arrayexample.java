class arrayexample
{
	public static void main(String args[])
	{
		//int arr[] = new int[5];
		int arr[] = {12, 34, 5, 45, 67, 34};
		int sum = 0;

		//arr[0] = 10;
		//arr[1] = 20;
		//arr[2] = 30;
		//arr[3] = 40;
		//arr[4] = 50;

		/*for(int i=0; i<arr.length; i++)
		{
			System.out.println(arr[i]);
		}*/

		for(int var : arr)
		{
			System.out.println(var);
			sum += var;
		}

		System.out.println("Sum : " +sum);
	}
}