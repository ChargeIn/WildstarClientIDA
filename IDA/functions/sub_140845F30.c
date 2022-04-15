//----- (0000000140845F30) ----------------------------------------------------
__int64 __fastcall sub_140845F30(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // r8
	__int64* v6; // rax
	__int64 v7; // rbp
	unsigned __int8 i; // di
	__int64 v9; // rbx
	__int64 j; // rsi
	int v11; // eax
	__int64 v13; // rax
	int v14; // ebx

	v2 = *(_DWORD**)a1;
	v3 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 != v3)
	{
		do
		{
			if (*v2 == a2)
				break;
			v2 += 4;
		} while (v2 != v3);
	}
	if (v2 == v3 || (v6 = (__int64*)(v2 + 2)) == 0i64)
	{
		v13 = sub_1408819F0(dword_140C10F28, 32i64);
		v7 = v13;
		if (v13)
		{
			sub_140870A80(v13);
			if (sub_140846770((_QWORD*)a1, a2, v7))
				goto LABEL_7;
			v14 = dword_140C10F28;
			sub_140870AA0(v7);
			sub_140881720(v14, v7);
		}
		return 0i64;
	}
	v7 = *v6;
LABEL_7:
	for (i = 0; i < *(_BYTE*)(a1 + 137); ++i)
	{
		v9 = *(_QWORD*)(a1 + 24 * (i + 1i64));
		for (j = a1 + 24 * (i + 1i64); v9 != *(_QWORD*)(j + 8); v9 += 16i64)
		{
			v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v9 + 8) + 120i64))(*(_QWORD*)(v9 + 8));
			sub_140870AB0(v7, i, *(_DWORD*)v9, v11);
		}
	}
	return v7;
}
// 140870AA0: using guessed type __int64 __fastcall sub_140870AA0(_QWORD);
// 140C10F28: using guessed type int dword_140C10F28;

