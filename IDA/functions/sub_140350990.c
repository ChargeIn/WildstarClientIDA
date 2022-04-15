//----- (0000000140350990) ----------------------------------------------------
__int64 __fastcall sub_140350990(__int64 a1, int a2, __m128** a3)
{
	__int64 v3; // rbx
	__int64 v4; // rsi
	int v6; // eax
	unsigned int v7; // edi
	__m128* v8; // rax
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v3 = 0i64;
	v4 = a1 + 8i64 * a2;
	v10 = 0i64;
	if (*(_QWORD*)(v4 + 784) || (v6 = sub_1403508E0(a1, a2, &v10), v3 = v10, v7 = v6, v6 >= 0))
	{
		v8 = (__m128*)sub_14018B280(64i64, 0);
		if (v8)
			v8 = sub_140371F80(v8, *(_QWORD*)(v4 + 784));
		*a3 = v8;
		v7 = 0;
	}
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
	return v7;
}

