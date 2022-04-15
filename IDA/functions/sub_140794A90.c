//----- (0000000140794A90) ----------------------------------------------------
__int64 __fastcall sub_140794A90(_QWORD* a1)
{
	_DWORD* v1; // rax
	_DWORD* v3; // rcx
	int v4; // r11d
	_DWORD* v5; // rax
	unsigned __int64 v6; // rax
	unsigned __int64 j; // r8
	__int64 v8; // rcx
	_DWORD* v10; // rax
	int v11; // r11d
	unsigned __int64 i; // r8
	__int64 v13; // rcx

	v1 = (_DWORD*)a1[3];
	v3 = dword_140A12138;
	if ((unsigned __int64)v1 < a1[2])
		v3 = v1;
	if (v3[2] != 8 || !*(_QWORD*)v3)
		sub_140056570(a1, 1u, aCoroutineExpec_0);
	v4 = sub_140794950((__int64)a1, *(_QWORD*)v3, (unsigned int)((__int64)(a1[2] - a1[3]) >> 4) - 1);
	v5 = (_DWORD*)a1[2];
	v5[2] = 1;
	if (v4 >= 0)
	{
		*v5 = 1;
		a1[2] += 16i64;
		v10 = sub_1400580E0((__int64)a1, -1 - v4);
		for (i = a1[2]; i > (unsigned __int64)v10; i -= 16i64)
		{
			*(_QWORD*)i = *(_QWORD*)(i - 16);
			*(_DWORD*)(i + 8) = *(_DWORD*)(i - 8);
		}
		v13 = a1[2];
		*(_QWORD*)v10 = *(_QWORD*)v13;
		v10[2] = *(_DWORD*)(v13 + 8);
		return (unsigned int)(v11 + 1);
	}
	else
	{
		*v5 = 0;
		a1[2] += 16i64;
		v6 = a1[2];
		for (j = v6 - 32; v6 > j; v6 -= 16i64)
		{
			*(_QWORD*)v6 = *(_QWORD*)(v6 - 16);
			*(_DWORD*)(v6 + 8) = *(_DWORD*)(v6 - 8);
		}
		v8 = a1[2];
		*(_QWORD*)j = *(_QWORD*)v8;
		*(_DWORD*)(j + 8) = *(_DWORD*)(v8 + 8);
		return 2i64;
	}
}
// 140794BB1: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

