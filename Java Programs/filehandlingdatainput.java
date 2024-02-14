//import java.io.DataInputStream;
//import java.io.IOException;
	//or
import java.io.*;

class filehandlingdatainput
{
	public static void main(String args[]) throws IOException
	{
		DataInputStream dis = new DataInputStream(System.in);

		System.out.println("Enter I value");
		String str1 = dis.readLine();
		int var1 = Integer.parseInt(str1);

		System.out.println("Enter II value");
		String str2 = dis.readLine();
		int var2 = Integer.parseInt(str1);

		System.out.println("Sum : " +(var1 + var2));
	}
}