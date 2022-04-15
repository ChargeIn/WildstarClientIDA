//----- (0000000140048420) ----------------------------------------------------
__int64 __fastcall sub_140048420(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	_DWORD* v5; // rax
	unsigned int v6; // r10d
	_QWORD* v7; // r11
	__int64 v8; // rax
	__int64 v9; // rdx
	__int64 result; // rax

	v5 = sub_1400580E0(a2, a3);
	if ((v5 == dword_140A12138 || v5[2]) && (v8 = sub_140056AB0(v7, v6)) != 0)
		v9 = *(_QWORD*)(*(_QWORD*)v8 + 16i64);
	else
		v9 = 0i64;
	*a4 += 8i64;
	result = *a4;
	**(_QWORD**)(*a4 - 8) = v9;
	return result;
}
// 140048459: variable 'v7' is possibly undefined
// 140048459: variable 'v6' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

