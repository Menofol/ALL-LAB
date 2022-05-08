using System;
using System.Text.RegularExpressions;

namespace Umi
{
	class Program
	{
		static void Main(string[] args)
		{
			const string Vowels = "aAiIuUeEoO";
			string str;

			Console.Write("String: ");
			str = Console.ReadLine();

			string[] words = str.Split(new Char[] { ' ', '\t', ',', '.', '!', '?' });
			int cntWords = words.Length;
			int[] counters = new int[cntWords];
			for (int i = 0; i < cntWords; ++i)
			{
				for (int j = 0; j < words[i].Length; ++j)
					if (Vowels.IndexOf(words[i][j]) != -1)
						counters[i]++;
			}
			int maxVowels = counters[0];
			for (int i = 1; i < cntWords; ++i)
				if (counters[i] > maxVowels)
					maxVowels = counters[i];

			string b = Regex.Replace(str, @"\s+", "");
			Console.WriteLine("Word(s) with the most vowels: ");
			for (int i = 0; i < cntWords; ++i)
				if (counters[i] == maxVowels)
					Console.WriteLine("\t" + words[i]);
			Console.WriteLine("Romove all space: " + b);
			Console.WriteLine("String (after trim) = " + str.Trim());
			Console.ReadLine();
		}
	}
}