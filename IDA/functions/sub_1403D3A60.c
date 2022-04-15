//----- (00000001403D3A60) ----------------------------------------------------
__int64 __fastcall sub_1403D3A60(__m128* a1, __m128* a2, __int64 a3, __int64 a4, unsigned int a5)
{
	unsigned int v5; // ebx
	unsigned __int64* v8; // rax
	__int64 v9; // r10
	unsigned int i; // r8d
	__int64 result; // rax
	__int64 v12; // r9

	v5 = 0;
	v8 = &a1[45].m128_u64[1];
	v9 = qword_140C65A08 + 40;
	for (i = 0; i < 0x1C; ++i)
	{
		if (*v8 && (*(_BYTE*)(*(_QWORD*)v9 + 16i64) & 4) != 0)
			return 60i64;
		v9 += 8i64;
		v8 += 2;
	}
	if (a1[37].m128_i32[0])
		return 2i64;
	if (a2[37].m128_i32[0])
		return 23i64;
	if ((unsigned int)sub_14045E5E0((__int64)a2))
		return 61i64;
	if (!a5)
		return 24i64;
	result = sub_1403D6A10(v12, a5);
	if (!(_DWORD)result)
	{
		if (!sub_1403AD690(a1, a2, 0.0, 6.0, 0.0))
			return 17;
		return v5;
	}
	return result;
}
// 1403D3A9C: conditional instruction was optimized away because r8d.4<1Cu
// 1403D3B46: variable 'v12' is possibly undefined
// 140C65A08: using guessed type __int64 qword_140C65A08;

