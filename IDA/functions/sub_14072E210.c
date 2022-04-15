//----- (000000014072E210) ----------------------------------------------------
__int64 __fastcall sub_14072E210(_QWORD* a1)
{
	__int64 result; // rax
	__int64* v3; // rsi
	_DWORD* v4; // rbx
	__int64* v5; // rcx
	unsigned int v6; // r14d
	int v7; // eax
	unsigned int v8; // r15d
	int v9; // eax
	__int64 v10; // rsi
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int v13; // ebp
	int* v14; // rax
	int* i; // rbx
	__int64 v16; // rsi
	int v17; // eax
	__int64 v18; // rax
	__m128i v19; // xmm0
	int* v20; // rbx
	__int64 v21; // rcx
	char v22[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v23; // [rsp+28h] [rbp-30h]
	__int64 v24; // [rsp+30h] [rbp-28h] BYREF
	int v25; // [rsp+38h] [rbp-20h]
	__int64 v26; // [rsp+68h] [rbp+10h] BYREF

	result = sub_140056AB0(a1, 1u);
	v3 = (__int64*)result;
	if (!result)
		return result;
	v4 = dword_140A12138;
	v5 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int64*)(a1[3] + 16i64);
	v6 = 0;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 != 3)
	{
		if (v7 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v26))
		{
			v8 = 0;
			goto LABEL_9;
		}
		v25 = 3;
		v5 = &v24;
		v24 = v26;
	}
	v8 = (int)*(double*)v5;
LABEL_9:
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 32i64);
	v9 = v4[2];
	if (v9 && (v9 != 1 || *v4))
		v6 = 1;
	v10 = *v3;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v11 = a1[2];
	v12 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	a1[2] += 16i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 168i64))(v10))
	{
		v13 = 1;
		v23 = sub_14018B280(40i64, 0);
		*(_QWORD*)v23 = v23;
		*((_QWORD*)v23 + 1) = v23;
		(*(void(__fastcall**)(__int64, _QWORD, char*, _QWORD))(*(_QWORD*)v10 + 160i64))(v10, v8, v22, v6);
		v14 = v23;
		for (i = *(int**)v23; i != v23; v14 = v23)
		{
			v16 = *((_QWORD*)i + 3);
			if ((unsigned int)sub_14054F480(v16)
				|| (v17 = sub_14054F4F0(v16)) != 0 && v17 - dword_140C636A8 > 0
				|| (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v16 + 8)) == 4)
			{
				v18 = a1[2];
				v19 = _mm_cvtsi32_si128(v13);
				*(_DWORD*)(v18 + 8) = 3;
				++v13;
				*(_QWORD*)v18 = *(_OWORD*)&_mm_cvtepi32_pd(v19);
				a1[2] += 16i64;
				sub_140663030(a1, v16);
				sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 32i64;
			}
			i = *(int**)i;
		}
		v20 = *(int**)v14;
		if (*(int**)v14 != v14)
		{
			do
			{
				v21 = (__int64)v20;
				v20 = *(int**)v20;
				sub_14018B900(v21, 0);
				v14 = v23;
			} while (v20 != v23);
		}
		*(_QWORD*)v14 = v14;
		*((_QWORD*)v23 + 1) = v23;
		sub_14018B900((__int64)v23, 0);
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 14072E210: using guessed type char var_38[8];

