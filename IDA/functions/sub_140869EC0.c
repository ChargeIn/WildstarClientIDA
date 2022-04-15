//----- (0000000140869EC0) ----------------------------------------------------
__int64 __fastcall sub_140869EC0(int a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__m128 v4; // xmm0

	v2 = sub_1408819F0(dword_140C10F20, 360i64);
	v3 = v2;
	if (!v2)
		return 0i64;
	sub_140859300(v2, a1);
	*(_QWORD*)v3 = off_1409A4E30;
	v4 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
	*(__m128*)(v3 + 336) = v4;
	*(_QWORD*)(v3 + 352) = v4.m128_u64[0];
	if ((unsigned int)sub_14085AD70(v3) != 1)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
		return 0i64;
	}
	return v3;
}
// 1409A4E30: using guessed type __int64 (__fastcall *off_1409A4E30[4])();
// 140C10F20: using guessed type int dword_140C10F20;

