//----- (000000014030D6A0) ----------------------------------------------------
__int64 __fastcall sub_14030D6A0(__int64(__fastcall* a1)(__int64 a1), __int64 a2, __m128i* a3)
{
	__int64(__fastcall * *v3)(__int64); // rdx
	char* v6; // rcx
	__int64 v7; // rax
	unsigned __int64 v9; // rbx
	__int64 v10; // rax
	int* v11; // rax
	__int64 v12; // rcx
	__int64 result; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // rbp
	int** v16; // rsi
	int* v17; // rax
	__int64 v18; // rcx
	int* v19; // rcx
	__int64 v20; // [rsp+30h] [rbp-48h] BYREF
	__int64(__fastcall * v21)(__int64); // [rsp+38h] [rbp-40h]
	__int64(__fastcall * v22)(__int64); // [rsp+40h] [rbp-38h]
	void(__fastcall * v23)(__int64); // [rsp+48h] [rbp-30h]
	__int64 v24; // [rsp+50h] [rbp-28h]
	__int64 v25; // [rsp+58h] [rbp-20h]

	*((_QWORD*)a1 + 2) = a2;
	v3 = (__int64(__fastcall**)(__int64))(a2 + 48);
	if (!*((_QWORD*)a1 + 16))
	{
		*((_QWORD*)a1 + 16) = v3;
		v6 = (char*)a1 + 136;
		*(_QWORD*)v6 = *v3;
		*v3 = a1;
		if (*(_QWORD*)v6)
			*(_QWORD*)(*(_QWORD*)v6 + 128i64) = v6;
	}
	if (!a3 || !a3->m128i_i16[0])
		return 2147942487i64;
	v7 = -1i64;
	while (a3->m128i_i16[++v7] != 0)
		;
	v9 = (unsigned int)(v7 + 1);
	v10 = 2 * v9;
	if (!is_mul_ok(v9, 2ui64))
		v10 = -1i64;
	v11 = sub_14018B280(v10, 0);
	*((_QWORD*)a1 + 3) = v11;
	sub_1407DB590(v11, a3->m128i_i32, 2 * v9);
	v22 = sub_14030D870;
	LODWORD(v20) = 0;
	v21 = a1;
	v23 = 0i64;
	result = sub_1401B6DE0(v12, a3, (int**)a1 + 6, (__int64)a1 + 40, (__int64)&v20);
	if ((int)result >= 0)
	{
		v14 = *((_QWORD*)a1 + 2);
		*((_DWORD*)a1 + 8) = 1;
		if (*(_QWORD*)(v14 + 56) == *(_QWORD*)(v14 + 64))
			sub_1400290D0(v14 + 56);
		v15 = (*(__int64(__fastcall**)(__int64))(v14 + 80))((__int64)a1 + 24);
		v16 = (int**)(*(_QWORD*)(v14 + 72) + 8 * (v15 % *(_QWORD*)(v14 + 64)));
		v17 = sub_14018B280(32i64, 0);
		if (v17)
		{
			v19 = *v16;
			*(_QWORD*)v17 = v15;
			*((_QWORD*)v17 + 1) = v19;
			v18 = *((_QWORD*)a1 + 3);
			*((_QWORD*)v17 + 3) = a1;
			*((_QWORD*)v17 + 2) = v18;
		}
		else
		{
			v17 = 0i64;
		}
		*v16 = v17;
		++* (_QWORD*)(v14 + 56);
		v20 = *((_QWORD*)a1 + 3);
		LODWORD(v21) = 0;
		v22 = a1;
		v23 = sub_14030E410;
		v24 = 0i64;
		v25 = 0i64;
		sub_1401B6BF0(v18, &v20, (int**)a1 + 9);
		return 0i64;
	}
	return result;
}
// 14030D78B: variable 'v12' is possibly undefined
// 14030D839: variable 'v18' is possibly undefined

