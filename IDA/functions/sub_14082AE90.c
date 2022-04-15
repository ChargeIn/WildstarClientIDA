//----- (000000014082AE90) ----------------------------------------------------
_QWORD* __fastcall sub_14082AE90(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 v3; // rsi
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rdx

	for (i = *(_QWORD**)a1; i != *(_QWORD**)(a1 + 8); *(_QWORD*)(a1 + 8) -= 16i64)
	{
		v3 = i[1];
		v4 = *(_QWORD*)(v3 + 16);
		if (v4)
		{
			*(_QWORD*)(v3 + 24) = v4;
			sub_140881720(dword_140C10F20, v4);
			*(_QWORD*)(v3 + 16) = 0i64;
			*(_QWORD*)(v3 + 24) = 0i64;
			*(_DWORD*)(v3 + 32) = 0;
		}
		*(_QWORD*)(v3 + 8) = 0i64;
		sub_140881720(dword_140C10F20, v3);
		v5 = *(_QWORD*)(a1 + 8);
		if ((unsigned int)((v5 - *(_QWORD*)a1) >> 4) > 1)
		{
			*i = *(_QWORD*)(v5 - 16);
			i[1] = *(_QWORD*)(v5 - 8);
		}
	}
	v6 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = v6;
		sub_140881720(dword_140C10F20, v6);
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	sub_14082AD20(a1 + 24);
	sub_14082ADB0(a1 + 72);
	sub_14082AF80(a1, (__int64*)(a1 + 160));
	return sub_14082AF80(a1, (__int64*)(a1 + 176));
}
// 140C10F20: using guessed type int dword_140C10F20;

