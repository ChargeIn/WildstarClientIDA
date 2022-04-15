//----- (00000001401A7F50) ----------------------------------------------------
__int64 __fastcall sub_1401A7F50(__int64 a1, const __m128i* a2)
{
	unsigned int v4; // edi
	int v5; // eax
	__int64 v6; // rcx
	__int64 v7; // r8
	int* v8; // rbx
	int* v9; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return 2691104772i64;
	v4 = 0;
	v9 = 0i64;
	v5 = sub_1401A7FC0(a1, &v9);
	v8 = v9;
	if (v5 < 0 || (v5 = sub_1401B6F30(v6, a2, v7, (__int64)v9), v5 < 0))
		v4 = v5;
	if (v8)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v8 + 8i64))(v8);
	return v4;
}
// 1401A7F93: variable 'v6' is possibly undefined
// 1401A7F93: variable 'v7' is possibly undefined

