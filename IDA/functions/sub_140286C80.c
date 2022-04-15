//----- (0000000140286C80) ----------------------------------------------------
__m128 __fastcall sub_140286C80(
	__int64 a1,
	void(__fastcall*** a2)(_QWORD),
	int* a3,
	unsigned __int64 a4,
	__m128* a5,
	int a6,
	__int64 a7,
	__int64 a8,
	int a9)
{
	int v11; // eax
	_QWORD* v12; // rbx
	__int128 v13; // xmm6
	unsigned int v15[4]; // [rsp+60h] [rbp-28h] BYREF

	*(_QWORD*)v15 = 0i64;
	v11 = sub_140283D30(a1, a2, a3, a4, 2, v15);
	v12 = *(_QWORD**)v15;
	if (v11 < 0 || (int)sub_1402B98B0((__int64)a2, *(_QWORD**)v15, 0i64, a4, a5, a6, a7, a8, a9, (float*)v15, 0i64) < 0)
		v13 = 0i64;
	else
		v13 = v15[0];
	if (v12)
		(*(void(__fastcall**)(_QWORD*))(*v12 + 8i64))(v12);
	return (__m128)v13;
}
// 140286C80: using guessed type unsigned int var_28[4];

