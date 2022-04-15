//----- (00000001403F6830) ----------------------------------------------------
__int64 __fastcall sub_1403F6830(__int64 a1, __int64 a2)
{
	__int64* v2; // rbp
	void(__fastcall * **v4)(_QWORD); // r14
	int* v5; // rax
	__int64 v6; // rbx
	int v7; // xmm6_4
	__int64 v8; // rdi
	int* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v15; // rcx
	__int64 v16; // [rsp+20h] [rbp-58h] BYREF
	int v17; // [rsp+28h] [rbp-50h]
	int v18; // [rsp+2Ch] [rbp-4Ch]
	int* v19; // [rsp+38h] [rbp-40h]
	int* v20; // [rsp+40h] [rbp-38h]
	int* v21; // [rsp+48h] [rbp-30h]

	v2 = (__int64*)qword_140C65898;
	v4 = (void(__fastcall***)(_QWORD))sub_140108E80(
		*(_QWORD*)(qword_140C65898 + 29504) + 240i64,
		*(const __m128i**)(a2 + 8));
	if (v4)
	{
		v5 = sub_14018B280(16i64, 0);
		v6 = (__int64)v5;
		v19 = v5;
		v20 = v5;
		v21 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v7 = dword_140C63664;
		v16 = 0i64;
		v8 = v2[3978];
		v17 = dword_140C63664;
		v18 = 1065353216;
		if (v8 == v2[3979])
		{
			sub_1403FBB30(v2 + 3976, (_DWORD*)v8, (__int64)&v16);
		}
		else
		{
			if (v8)
			{
				*(_QWORD*)(v8 + 24) = 0i64;
				*(_QWORD*)(v8 + 32) = 0i64;
				*(_QWORD*)(v8 + 40) = 0i64;
				v9 = sub_14018B280(16i64, 0);
				*(_QWORD*)(v8 + 24) = v9;
				*(_QWORD*)(v8 + 32) = v9;
				*(_QWORD*)(v8 + 40) = v9 + 4;
				if (v9)
					*(_WORD*)v9 = 0;
				*(_DWORD*)(v8 + 8) = v7;
				*(_QWORD*)v8 = 0i64;
			}
			v2[3978] += 48i64;
		}
		if (v6)
			sub_14018B900(v6, 0);
		v10 = v2[3978];
		if (v4 != *(void(__fastcall****)(_QWORD))(v10 - 48))
		{
			(**v4)(v4);
			v11 = *(_QWORD*)(v10 - 48);
			if (v11)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				*(_QWORD*)(v10 - 48) = 0i64;
			}
			*(_QWORD*)(v10 - 48) = v4;
		}
		v12 = *(_QWORD*)(a2 + 8);
		v13 = (v2[3978] - v2[3977]) / 48;
		if (v12)
			sub_14018B900(v12, 0);
		return (unsigned int)(v13 - 1);
	}
	else
	{
		v15 = *(_QWORD*)(a2 + 8);
		if (v15)
			sub_14018B900(v15, 0);
		return 0xFFFFFFFFi64;
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63664: using guessed type int dword_140C63664;
// 140C65898: using guessed type __int64 qword_140C65898;

