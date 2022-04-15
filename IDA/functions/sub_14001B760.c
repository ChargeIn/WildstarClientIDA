//----- (000000014001B760) ----------------------------------------------------
__int64 __fastcall sub_14001B760(__int64 a1, int a2)
{
	int v3; // xmm0_4
	int* v4; // r9
	float v5; // xmm0_4
	_DWORD* v6; // rdi
	__int64 i; // rcx
	__int64 result; // rax
	float v9; // xmm1_4
	float* v10; // rax
	int v11; // [rsp+38h] [rbp+10h]

	if (a2)
		v3 = *(_DWORD*)(a1 + 4i64 * a2 + 28);
	else
		v3 = *(_DWORD*)(a1 + 60);
	v4 = (int*)qword_140C63750;
	v11 = v3;
	v5 = *(float*)(a1 + 4i64 * *(int*)qword_140C63750 + 32);
	if ((unsigned __int64)a2 < 5)
	{
		v6 = (_DWORD*)(a1 + 32 + 4i64 * a2);
		for (i = 5i64 - a2; i; --i)
			*v6++ = v11;
	}
	*(_DWORD*)(a1 + 24) &= (1 << a2) - 1;
	result = *v4;
	v9 = *(float*)(a1 + 4 * result + 32);
	if (v5 != v9)
	{
		v10 = *(float**)(a1 + 64);
		if (v10)
			*v10 = v9;
		result = *(_QWORD*)(a1 + 80);
		if (result)
			return ((__int64 (*)(void))result)();
	}
	return result;
}
// 140C63750: using guessed type __int64 qword_140C63750;

