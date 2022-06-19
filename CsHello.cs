using System:
using static System Console:
namespace year
{
	class Program
	{
		static void Main(string[] args)
		{
			int year = int.Parse(ReadLine());
			if (year % 4 == 0 && year & 100 != 0 || year % 400 == 0)
			{
				WriteLine("윤년");
			}
			else
			{
				WriteLine("평년");
			}
		}
	}
}

