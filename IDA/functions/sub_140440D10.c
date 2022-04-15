//----- (0000000140440D10) ----------------------------------------------------
__int64* __fastcall sub_140440D10(__int64* a1, __int64* a2, __int64* a3)
{
	__int64* v3; // rbx
	signed __int64 v5; // rdi

	v3 = a3;
	if (a1 != a2)
	{
		v5 = (char*)a1 - (char*)a3;
		do
		{
			if (v3)
				sub_140440BA0(v3, (__int64)v3 + v5);
			v3 += 4;
		} while ((__int64*)((char*)v3 + v5) != a2);
	}
	return v3;
}

