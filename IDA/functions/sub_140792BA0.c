//----- (0000000140792BA0) ----------------------------------------------------
__int64 __fastcall sub_140792BA0(_QWORD* a1, int a2)
{
	_DWORD* v2; // rax
	unsigned __int64 v4; // rcx
	_DWORD* v5; // rsi
	__int64 result; // rax
	int v7; // edi
	unsigned __int64 v8; // rdx
	int i; // r8d
	unsigned __int64 v10; // rax
	unsigned __int64 v11; // rdx
	char v12[116]; // [rsp+20h] [rbp-98h] BYREF
	int v13; // [rsp+94h] [rbp-24h]

	v2 = (_DWORD*)a1[3];
	v4 = a1[2];
	v5 = dword_140A12138;
	if ((unsigned __int64)v2 < v4 && v2 != dword_140A12138 && v2[2] == 6)
	{
		if ((unsigned __int64)v2 < v4)
			v5 = v2;
		*(_QWORD*)v4 = *(_QWORD*)v5;
		result = (unsigned int)v5[2];
		*(_DWORD*)(v4 + 8) = result;
		a1[2] += 16i64;
		return result;
	}
	if (a2 && ((unsigned __int64)v2 >= v4 || v2 == dword_140A12138 || (int)v2[2] <= 0))
	{
		v7 = 1;
	}
	else
	{
		v7 = sub_140056D60(a1, 1u);
		if (v7 < 0)
			sub_140056570(a1, 1u, aLevelMustBeNon);
	}
	v8 = a1[5];
	for (i = v7; i > 0; v8 -= 40i64)
	{
		if (v8 <= a1[10])
			break;
		--i;
		if (!*(_BYTE*)(**(_QWORD**)(v8 + 8) + 10i64))
			i -= *(_DWORD*)(v8 + 36);
	}
	if (i)
	{
		if (i < 0)
		{
			v13 = 0;
			goto LABEL_25;
		}
	LABEL_24:
		sub_140056570(a1, 1u, aInvalidLevel);
	}
	v10 = a1[10];
	if (v8 <= v10)
		goto LABEL_24;
	v11 = (__int64)((unsigned __int128)((__int64)(v8 - v10) * (__int128)0x6666666666666667i64) >> 64) >> 4;
	v13 = (v11 >> 63) + v11;
LABEL_25:
	sub_140059EF0((__int64)a1, asc_140C39944, (__int64)v12);
	result = a1[2] - 16i64;
	if ((_DWORD*)result != dword_140A12138 && !*(_DWORD*)(result + 8))
		sub_140056830(a1, (unsigned __int64*)"no function environment for tail call at level %d", (unsigned int)v7);
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140792BA0: using guessed type char var_98[116];

