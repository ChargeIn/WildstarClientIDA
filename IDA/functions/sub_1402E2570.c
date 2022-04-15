//----- (00000001402E2570) ----------------------------------------------------
__int64 __fastcall sub_1402E2570(__int64 a1, _QWORD* a2, __int32 a3, _DWORD* a4, __int32 a5, __int32 a6, __m128** a7)
{
	__m128* v12; // rax
	__m128* v13; // rbx
	int v14; // esi

	if (!a7)
		return 2147942487i64;
	v12 = (__m128*)sub_14018B280(128i64, 1u);
	v13 = v12;
	if (!v12)
		return 2147942414i64;
	v12->m128_u64[0] = (unsigned __int64)off_140B638B8;
	v12[6].m128_u64[1] = 0i64;
	v12[7].m128_u64[0] = 0i64;
	v12[1].m128_u64[0] = 0i64;
	v12[1].m128_u64[1] = 0i64;
	v12->m128_i32[2] = 1;
	v12->m128_i32[3] = 1;
	v14 = sub_1402E97E0(v12, a1, a2, a3, a4, a5, a6);
	if (v14 >= 0)
	{
		*a7 = v13;
		return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__m128*))(v13->m128_u64[0] + 8))(v13);
		return (unsigned int)v14;
	}
}
// 140B638B8: using guessed type __int64 (__fastcall *off_140B638B8[14])();

