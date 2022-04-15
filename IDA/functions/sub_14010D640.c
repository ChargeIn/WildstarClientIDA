//----- (000000014010D640) ----------------------------------------------------
void __fastcall sub_14010D640(__int64 a1, unsigned int* a2, __int64 a3, __m128* a4)
{
	int* v7; // rax
	_QWORD* v8; // rbx
	__int64 v9; // r15
	float v10; // xmm6_4
	int* v11; // rax
	__int64 v12; // rdi
	_QWORD* v13; // rbx
	float v14; // xmm6_4
	_QWORD* v15; // r14
	int i; // esi
	void(__fastcall * **v17)(_QWORD); // rdi
	unsigned int* v18; // rax
	int v19[4]; // [rsp+30h] [rbp-48h] BYREF

	v7 = sub_14018B280(16i64, 0);
	v8 = 0i64;
	v9 = (__int64)v7;
	if (v7)
		*(_WORD*)v7 = 0;
	v10 = *(float*)&dword_140C63664;
	if (*(_QWORD*)(a1 + 160))
	{
		v11 = sub_14018B280(16i64, 0);
		v12 = (__int64)v11;
		if (v11)
			*(_WORD*)v11 = 0;
		v13 = *(_QWORD**)(a1 + 160);
		v14 = *(float*)&dword_140C63664;
		if (v13)
		{
			(*(void(__fastcall**)(_QWORD)) * v13)(*(_QWORD*)(a1 + 160));
			sub_140103CF0(v13, a2, a4, 0, COERCE_INT(*(float*)&dword_140C63664 - v14));
			(*(void(__fastcall**)(_QWORD*))(*v13 + 8i64))(v13);
		}
		if (v12)
			sub_14018B900(v12, 0);
	}
	else
	{
		v15 = (_QWORD*)(a1 + 80);
		for (i = 0; i < 8; ++i)
		{
			v17 = (void(__fastcall***)(_QWORD)) * v15;
			if ((_QWORD*)*v15 != v8)
			{
				if (v17)
					(**v17)(*v15);
				if (v8)
					(*(void(__fastcall**)(_QWORD*))(*v8 + 8i64))(v8);
				v8 = v17;
			}
			v18 = sub_14010D430(a1, v19, a2, i);
			if (v8)
				sub_140103CF0(v8, v18, a4, 0, COERCE_INT(*(float*)&dword_140C63664 - v10));
			++v15;
		}
		if (v8)
			(*(void(__fastcall**)(_QWORD*))(*v8 + 8i64))(v8);
	}
	if (v9)
		sub_14018B900(v9, 0);
}
// 140C63664: using guessed type int dword_140C63664;
// 14010D640: using guessed type int var_48[4];

