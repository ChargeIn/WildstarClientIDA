//----- (0000000140412470) ----------------------------------------------------
__int64 __fastcall sub_140412470(__int64 a1, __int64 a2, int a3, int a4)
{
	int v4; // eax
	unsigned int v5; // ebx

	v4 = *(_DWORD*)(a1 + 1184);
	v5 = 0;
	if (a4 >= v4)
	{
		if (a2)
		{
			if (a2 != *(_QWORD*)(a1 + 8) || a4 != v4)
				v5 = 1;
			*(_QWORD*)(a1 + 8) = a2;
			*(_DWORD*)(a1 + 1184) = a4;
		}
		else if (a4 == 6 && v4)
		{
			v5 = 1;
			*(_QWORD*)(a1 + 8) = 0i64;
			*(_DWORD*)(a1 + 1184) = 0;
		}
	}
	if (a3)
		sub_140412AD0(a1);
	return v5;
}
// 140412AD0: using guessed type __int64 __fastcall sub_140412AD0(_QWORD);

