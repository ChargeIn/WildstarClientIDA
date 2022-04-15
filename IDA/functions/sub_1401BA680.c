//----- (00000001401BA680) ----------------------------------------------------
signed int __fastcall sub_1401BA680(__int64 a1, LARGE_INTEGER a2, int* a3, unsigned __int64 a4)
{
	signed int result; // eax
	LONGLONG v9; // rbp

	if (a4 > 560 - a2.QuadPart)
		return -2147024809;
	v9 = a2.QuadPart + a1;
	if (!(unsigned int)sub_1407E6AF0((unsigned __int64*)(a2.QuadPart + a1 + 56), (__int64)a3, a4))
		return 0;
	if (!a4 || (result = sub_1401BC4C0(a1, a2, (char*)a3, a4), result >= 0))
	{
		sub_1407DB590((int*)(v9 + 56), a3, a4);
		return 0;
	}
	return result;
}

