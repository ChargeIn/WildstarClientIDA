//----- (00000001405E5F20) ----------------------------------------------------
__int64 __fastcall sub_1405E5F20(__int64* a1, unsigned int a2, __m128* a3)
{
	__int64 v6; // rax
	unsigned __int64 v7; // r8
	int v8; // r10d
	__int64 v9; // rcx
	unsigned int v10; // edx
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 result; // rax
	__int64 v14; // r8
	unsigned __int64 v15; // rdx
	_DWORD* i; // rax

	v6 = sub_140245C00(a2);
	if (!v6)
		return 0i64;
	v7 = a1[1];
	v8 = *(_DWORD*)(v6 + 8);
	v9 = 0i64;
	v10 = 0;
	if (!v7)
		return 0i64;
	v11 = *a1;
	v12 = 0i64;
	while (*(_DWORD*)(*(_QWORD*)(v11 + 8 * v12) + 8i64) != v8)
	{
		v12 = ++v10;
		if (v10 >= v7)
			return 0i64;
	}
	v14 = *(_QWORD*)(v11 + 8i64 * v10);
	if (!v14)
		return 0i64;
	v15 = *(_QWORD*)(v14 + 96);
	if (!v15)
		return 0i64;
	for (i = *(_DWORD**)(v14 + 88); *i != a2; i += 3)
	{
		if (++v9 >= v15)
			return 0i64;
	}
	result = 1i64;
	*a3 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(v14 + 88) + 12 * v9 + 4), (__m128)0i64),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(v14 + 88) + 12 * v9 + 8), (__m128)0i64));
	return result;
}

