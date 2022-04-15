//----- (00000001400A7FD0) ----------------------------------------------------
__int64 __fastcall sub_1400A7FD0(_DWORD* a1)
{
	unsigned int v1; // r9d
	unsigned int v2; // eax
	int v3; // eax

	v1 = a1[4];
	v2 = dword_140C636A8 - *a1;
	if (v2 >= v1)
	{
		if (v2 < a1[2])
		{
			*a1 += v1;
		}
		else
		{
			*a1 = dword_140C636A8;
			a1[1] = 1;
		}
		return 1i64;
	}
	else
	{
		v3 = a1[1];
		if (v3 == a1[3])
		{
			return 0i64;
		}
		else
		{
			a1[1] = v3 + 1;
			return 1i64;
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

