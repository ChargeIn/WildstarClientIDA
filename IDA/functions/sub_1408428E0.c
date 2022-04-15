//----- (00000001408428E0) ----------------------------------------------------
__int64 __fastcall sub_1408428E0(__int64 a1)
{
	_QWORD* v2; // rdx
	__int64 v3; // rsi
	__int64 v4; // rdi
	unsigned __int64 v5; // rcx
	__int64 v6; // rdx

	while (*(_DWORD*)(a1 + 192))
	{
		v2 = *(_QWORD**)(a1 + 160);
		v3 = v2[1];
		v4 = v2[6];
		if (v2)
		{
			*(_QWORD*)(a1 + 160) = *v2;
			if (v2 == *(_QWORD**)(a1 + 168))
				*(_QWORD*)(a1 + 168) = 0i64;
			v5 = *(_QWORD*)(a1 + 200);
			if ((unsigned __int64)v2 < v5
				|| (unsigned __int64)v2 >= v5 + ((unsigned __int64)*(unsigned int*)(a1 + 184) << 6))
			{
				sub_140881720(dword_140C10F20, (__int64)v2);
			}
			else
			{
				*v2 = *(_QWORD*)(a1 + 176);
				*(_QWORD*)(a1 + 176) = v2;
			}
			--* (_DWORD*)(a1 + 192);
		}
		if ((((_DWORD)v3 - 9) & 0xFFFFFFFD) == 0 && v4)
			sub_140881720(dword_140C10F20, v4);
	}
	sub_140842850(a1 + 160);
	sub_140842E50(a1);
	nullsub_1(a1 + 1776);
	if (*(_DWORD*)(a1 + 216) != -1)
	{
		sub_1408424D0((int*)(a1 + 216));
		*(_DWORD*)(a1 + 216) = -1;
	}
	sub_14083EBA0(a1);
	sub_14083CC50((__int64*)a1);
	v6 = *(_QWORD*)(a1 + 2376);
	if (v6)
	{
		*(_QWORD*)(a1 + 2384) = v6;
		sub_140881720(dword_140C10F20, v6);
		*(_QWORD*)(a1 + 2376) = 0i64;
		*(_QWORD*)(a1 + 2384) = 0i64;
		*(_DWORD*)(a1 + 2392) = 0;
	}
	return 1i64;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

