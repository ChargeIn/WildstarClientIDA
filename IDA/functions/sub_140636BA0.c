//----- (0000000140636BA0) ----------------------------------------------------
void __fastcall sub_140636BA0(__int64 a1, int a2)
{
	int v2; // r9d
	unsigned int v3; // r10d
	int v4; // eax
	int v5; // [rsp+38h] [rbp+10h] BYREF

	if (a2 < 7)
	{
		v2 = *(_DWORD*)(a1 + 20i64 * a2 + 336);
		v3 = *(_DWORD*)(a1 + 20i64 * a2 + 352);
		if (dword_140C636A8 - v2 >= v3)
		{
			if ((unsigned int)(dword_140C636A8 - v2) < *(_DWORD*)(a1 + 20i64 * a2 + 344))
			{
				*(_DWORD*)(a1 + 20i64 * a2 + 336) = v3 + v2;
			}
			else
			{
				*(_DWORD*)(a1 + 20i64 * a2 + 336) = dword_140C636A8;
				*(_DWORD*)(a1 + 20i64 * a2 + 340) = 1;
			}
		}
		else
		{
			v4 = *(_DWORD*)(a1 + 20i64 * a2 + 340);
			if (v4 == *(_DWORD*)(a1 + 20i64 * a2 + 348))
				return;
			*(_DWORD*)(a1 + 20i64 * a2 + 340) = v4 + 1;
		}
		v5 = a2;
		sub_1403F4740(qword_140C65898, 0x7CCu, (__int64)&v5);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

