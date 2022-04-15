//----- (00000001402F7980) ----------------------------------------------------
__m128* __fastcall sub_1402F7980(__int64* a1, __m128* a2, int a3)
{
	__int64 v3; // rax
	__int64 v5; // rsi
	__int64 v7; // rax
	__int64 v8; // rdx
	unsigned int v9; // r8d
	__m128* result; // rax
	unsigned int* v11; // rcx
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v5 = a3;
	v12[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v3 + 16))(a1, v12, 0i64);
	if ((_DWORD)v5)
	{
		v7 = a1[8];
		if ((unsigned int)v5 >= *(_DWORD*)(v7 + 400))
			goto LABEL_7;
		LODWORD(v5) = *(unsigned __int16*)(*(_QWORD*)(v7 + 408) + 2 * v5);
	}
	if ((int)sub_140300DD0((__int64)a1, 2u) >= 0)
	{
		v8 = a1[8];
		v9 = *(unsigned __int16*)(352i64 * (unsigned int)v5 + *(_QWORD*)(v8 + 392) + 6);
		if (v9 < *(_DWORD*)(v8 + 240))
		{
			result = a2;
			v11 = (unsigned int*)(a1[62] + 96i64 * (unsigned __int16)v9);
			*a2 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * v11, (__m128)v11[2]),
				_mm_unpacklo_ps((__m128)v11[1], (__m128)v11[8]));
			return result;
		}
	}
LABEL_7:
	result = a2;
	*a2 = (__m128)xmmword_140B7B240;
	return result;
}
// 1402F79D0: conditional instruction was optimized away because esi.4<10000u
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 1402F7980: using guessed type int var_18[6];

