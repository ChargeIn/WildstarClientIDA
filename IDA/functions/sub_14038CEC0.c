//----- (000000014038CEC0) ----------------------------------------------------
__int64 __fastcall sub_14038CEC0(__int64 a1, __m128* a2, __m128* a3, __int64 a4, __m128** a5, _DWORD* a6)
{
	void(__fastcall * *v6)(_QWORD); // rax
	int v11; // eax
	__int64 v12; // r11
	int* v13; // rax
	__int32 v14; // ebp
	__m128* v15; // rbx
	int v16; // eax
	int v17; // r9d
	int v18; // r9d
	unsigned int v20[4]; // [rsp+50h] [rbp-148h] BYREF
	__m128 v21; // [rsp+60h] [rbp-138h] BYREF
	char v22[224]; // [rsp+70h] [rbp-128h] BYREF

	v6 = *(void(__fastcall***)(_QWORD))a1;
	v21.m128_i32[0] = -1;
	((void(__fastcall*)(__int64, __m128*))v6[4])(a1, &v21);
	if (!*(_QWORD*)(a1 + 32))
		return 0i64;
	v11 = sub_14038C430(a1, *a6);
	if (!v11
		|| !(*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, __int64, int, unsigned int*, _DWORD, _DWORD, char*, _DWORD))(*(_QWORD*)v12 + 1328i64))(
			v12,
			a2,
			a3,
			a4,
			v11,
			v20,
			a6[8],
			a6[1],
			v22,
			a6[2]))
	{
		return 0i64;
	}
	if (a5)
	{
		v13 = sub_14018B280(256i64, 0);
		v14 = 0;
		if (v13)
			v15 = (__m128*)sub_140391920(
				(__int64)v13,
				*(float*)v20,
				(void(__fastcall***)(_QWORD))a1,
				0i64,
				(__int64)v22,
				a6[1]);
		else
			v15 = 0i64;
		if ((a6[1] & 0x80000) != 0)
		{
			if (*(_DWORD*)(a1 + 228))
				v14 = *(_DWORD*)(a1 + 24);
			v15[5].m128_i32[3] = v14;
		}
		v16 = a6[1];
		if ((v16 & 0x7FFE0) != 0)
		{
			v21 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*a3, *a2), _mm_shuffle_ps((__m128)v20[0], (__m128)v20[0], 0)), *a2);
			if ((v16 & 0x20) != 0)
			{
				sub_14035CB60(*(_QWORD*)(a1 + 16), &v21, (__int64)&v15[2]);
				v15[5].m128_i32[2] &= ~0x80u;
			}
			v17 = a6[1];
			if ((v17 & 0x1FC0) != 0)
				sub_14035CC90(*(_QWORD*)(a1 + 16), &v21, v15 + 2, v17);
			v18 = a6[1];
			if ((v18 & 0x7E000) != 0)
				sub_14035CD90(*(_QWORD*)(a1 + 16), &v21, (__int64)&v15[2], v18);
		}
		*a5 = v15;
	}
	return 1i64;
}
// 14038CF39: variable 'v12' is possibly undefined
// 14038CEC0: using guessed type unsigned int var_148[4];

