//----- (00000001401D0C10) ----------------------------------------------------
__int64 __fastcall sub_1401D0C10(_QWORD* a1, const __m128i* a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // rsi
	unsigned int v4; // ebp
	unsigned __int64 v8; // rdi
	_QWORD* v9; // r14
	int v10; // eax
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rax
	unsigned __int64 v14; // rcx

	v3 = a1[4];
	v4 = 0;
	v8 = 0i64;
	if (!v3)
		return 0i64;
	while (1)
	{
		v9 = (_QWORD*)(a1[3] + 56 * (v8 + ((v3 - v8) >> 1)));
		v10 = sub_1401D1780(a2, (const __m128i*)(a1[5] + 2i64 * *v9));
		if (v10 >= 0)
			break;
		v3 = v8 + ((v3 - v8) >> 1);
	LABEL_6:
		if (v8 >= v3)
			return 0i64;
	}
	if (v10 > 0)
	{
		v8 += ((v3 - v8) >> 1) + 1;
		goto LABEL_6;
	}
	if (!a3)
		return 1;
	v12 = v9[1];
	if (*a3 >= v12 && *a3 <= v12)
	{
		v13 = a3[1];
		v14 = v9[2];
		if (v13 >= v14 && v13 <= v14)
			return 1;
	}
	return v4;
}

