//----- (000000014074D6E0) ----------------------------------------------------
__int64 __fastcall sub_14074D6E0(__int64 a1)
{
	unsigned int v2; // ebp
	__int64 v3; // rbx
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__m128i v8; // xmm0
	__int64 v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // rax
	int v12; // r14d
	__int64 v13; // rdi
	__int64 v14; // rax
	__int64 v15; // rax
	__int64* v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rax
	__int64 i; // rax
	__int64 j; // rcx
	char v22[8]; // [rsp+20h] [rbp-28h] BYREF
	int* v23; // [rsp+28h] [rbp-20h]
	__int64 v24; // [rsp+30h] [rbp-18h]

	v23 = sub_14018B280(48i64, 0);
	v24 = 0i64;
	*(_BYTE*)v23 = 0;
	*((_QWORD*)v23 + 1) = 0i64;
	*((_QWORD*)v23 + 2) = v23;
	*((_QWORD*)v23 + 3) = v23;
	sub_140644800(0i64, (__int64)v22);
	v2 = 1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v5 = v23;
	*(_QWORD*)(a1 + 16) += 16i64;
	v6 = *((_QWORD*)v5 + 2);
	if ((int*)v6 != v5)
	{
		do
		{
			v7 = *(_QWORD*)(a1 + 16);
			v8 = _mm_cvtsi32_si128(v2++);
			*(_DWORD*)(v7 + 8) = 3;
			*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
			v9 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 16) += 16i64;
			if (*(_QWORD*)(v9 + 120) >= *(_QWORD*)(v9 + 112))
				sub_14005E2C0(a1);
			v10 = *(_QWORD*)(a1 + 16);
			v11 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(a1 + 16) += 16i64;
			v12 = *(_DWORD*)(v6 + 32);
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v13 = *(_QWORD*)(a1 + 16);
			v14 = sub_140062650(a1, qword_1409F95C4, 3ui64);
			*(_DWORD*)(v13 + 8) = 4;
			*(_QWORD*)v13 = v14;
			*(_QWORD*)(a1 + 16) += 16i64;
			v15 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v15 + 8) = 3;
			*(double*)v15 = (double)v12;
			*(_QWORD*)(a1 + 16) += 16i64;
			v16 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v16, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			sub_1400F0090(a1, v17, (unsigned __int64*)"strName", *(unsigned __int16**)(v6 + 40));
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v18 = *(_QWORD*)(v6 + 24);
			if (v18)
			{
				v6 = *(_QWORD*)(v6 + 24);
				for (i = *(_QWORD*)(v18 + 16); i; i = *(_QWORD*)(i + 16))
					v6 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = j;
				if (*(_QWORD*)(v6 + 24) != j)
					v6 = j;
			}
		} while ((int*)v6 != v23);
	}
	sub_140008410((__int64)v22);
	sub_14018B900((__int64)v23, 0);
	return 1i64;
}
// 14074D870: variable 'v17' is possibly undefined
// 1409F95C4: using guessed type unsigned __int64 qword_1409F95C4[4];
// 14074D6E0: using guessed type char var_28[8];

