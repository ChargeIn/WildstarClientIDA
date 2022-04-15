//----- (0000000140665900) ----------------------------------------------------
__int64 __fastcall sub_140665900(_QWORD* a1)
{
	__int64* v2; // rdi
	_DWORD* v3; // rax
	signed int v4; // r10d
	__int64 v5; // r11
	int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rax

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	v3 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v4 = -1;
	else
		v4 = sub_140056D60(a1, 2u);
	if (v2 && v4 >= 0 && (v5 = *v2, v4 < *(_DWORD*)(*v2 + 16)))
	{
		if ((unsigned int)v4 >= *(_DWORD*)(*v2 + 16)
			|| (unsigned int)sub_140551840(*v2, v4) <= 1
			|| (*(_DWORD*)(*(_QWORD*)(v5 + 8i64 * (unsigned int)v4 + 24) + 8i64) & 0x400) != 0)
		{
			v6 = sub_1405515C0(v5, v4);
		}
		else
		{
			v6 = sub_140551630(v5, v4);
		}
		v7 = a1[2];
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)v6;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0i64;
		*(_DWORD*)(v8 + 8) = 3;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 14066597F: variable 'v5' is possibly undefined
// 14066597C: variable 'v4' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

