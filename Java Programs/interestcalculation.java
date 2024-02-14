import java.io.*;

class interestcalculation
{
	public static void main(String args[]) throws IOException
	{
		DataInputStream dis = new DataInputStream(System.in);
		
		System.out.println("Enter principle amount : ");
		String str1 = dis.readLine();
		double pri = Double.parseDouble(str1);

		System.out.println("Enter rate of interest : ");
		String str2 = dis.readLine();
		float rate = Float.parseFloat(str2);

		System.out.println("Enter time : ");
		String str3 = dis.readLine();
		int time = Integer.parseInt(str3);

		double interest = (pri*rate*time)/100;

		System.out.println("Simple Interest : " + interest);
	}
}