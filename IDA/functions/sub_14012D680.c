#include "../winhttp.h"

//----- (000000014012D680) ----------------------------------------------------
__int64 __fastcall sub_14012D680(_QWORD* a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v7; // r12
	_DWORD* v8; // rdx
	unsigned __int64 v9; // r8
	_DWORD* v10; // rcx
	char* v11; // rdx
	int* v12; // r14
	const __m128i* v13; // rax
	__m128i* v14; // r15
	int* v15; // rax
	__int64 v16; // r8
	int* v17; // rsi
	__int64 v18; // rcx
	__int64 v19; // rax
	bool v20; // zf
	__int64 v21; // rax
	__m128i* v22; // r12
	__int64 v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rax
	__int64 v26; // rax
	int* v27; // rax
	__int64 v28; // r14
	__int64 v29; // rbx
	__int64 v30; // [rsp+20h] [rbp-29h] BYREF
	__m128i* v31; // [rsp+28h] [rbp-21h]
	__m128i* v32; // [rsp+30h] [rbp-19h]
	const __m128i* v33; // [rsp+38h] [rbp-11h]
	__int64 v34; // [rsp+40h] [rbp-9h] BYREF
	int* v35; // [rsp+48h] [rbp-1h]
	int* v36; // [rsp+50h] [rbp+7h]
	int* v37; // [rsp+58h] [rbp+Fh]
	__int64 v38; // [rsp+60h] [rbp+17h] BYREF
	__m128i* v39; // [rsp+68h] [rbp+1Fh]
	int* v40; // [rsp+70h] [rbp+27h]
	__int64 v41; // [rsp+B8h] [rbp+6Fh] BYREF

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(qword_140C63650 + 760);
	v5 = 0i64;
	while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
	{
		v5 = ++v3;
		if (v3 >= v2)
			return 0i64;
	}
	v7 = *(_QWORD*)(v4 + 8i64 * v3);
	if (!v7)
		return 0i64;
	v8 = (_DWORD*)a1[3];
	v9 = a1[2];
	if ((unsigned __int64)v8 < v9 && v8 != dword_140A12138 && (unsigned int)(v8[2] - 3) <= 1)
	{
		v10 = dword_140A12138;
		if ((unsigned __int64)v8 < v9)
			v10 = (_DWORD*)a1[3];
		if (v10[2] != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v10))
			{
				v11 = 0i64;
				goto LABEL_20;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v10 = dword_140A12138;
			if (a1[3] < a1[2])
				v10 = (_DWORD*)a1[3];
		}
		v11 = (char*)(*(_QWORD*)v10 + 32i64);
	LABEL_20:
		sub_14018F2D0(&v38, v11);
		v12 = *(int**)(qword_140C63650 + 784);
		v13 = (const __m128i*)sub_14018B280(16i64, 0);
		v14 = (__m128i*)v13;
		v31 = (__m128i*)v13;
		v32 = (__m128i*)v13;
		v33 = v13 + 1;
		if (v13)
			v13->m128i_i16[0] = 0;
		v15 = sub_14018B280(16i64, 0);
		v17 = v15;
		v35 = v15;
		v36 = v15;
		v18 = (__int64)(v15 + 4);
		v37 = v15 + 4;
		if (v15)
			*(_WORD*)v15 = 0;
		if (v12 && *(_WORD*)v12)
		{
			v19 = 0i64;
			do
				v20 = *((_WORD*)v12 + ++v19) == 0;
			while (!v20);
			if ((2 * v19) >> 1)
				sub_14001C310(&v30, v12, (int*)((char*)v12 + 2 * v19));
			else
				sub_1407DB590(v14->m128i_i32, v12, 0i64);
			v21 = 0i64;
			do
				v20 = *((_WORD*)&unk_1409D862C + ++v21) == 0;
			while (!v20);
			sub_14001C310(&v30, (int*)&unk_1409D862C, (int*)((char*)&unk_1409D862C + 2 * v21));
			v14 = v31;
		}
		v20 = *(_QWORD*)(v7 + 2528) == 0i64;
		v22 = v39;
		if (!v20)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		LABEL_62:
			if (v17)
				sub_14018B900((__int64)v17, 0);
			if (v14)
				sub_14018B900((__int64)v14, 0);
			if (v22)
				sub_14018B900((__int64)v22, 0);
			return 1i64;
		}
		if (!(unsigned int)sub_1401B58D0(v18, v39, v16))
		{
			if (v12 && *(_WORD*)v12)
			{
				sub_14001C310(&v30, v22->m128i_i32, v40);
				v14 = v31;
				if (!(unsigned int)sub_1401B58D0(v23, v31, v24))
				{
					v25 = 0i64;
					do
						v20 = aAssetDoesNotEx_3[++v25] == 0;
					while (!v20);
					if ((2 * v25) >> 1)
					{
						sub_14001C310(&v34, (int*)L"Asset does not exist", (int*)&aAssetDoesNotEx_3[v25]);
						v17 = v35;
					}
					else
					{
						sub_1407DB590(v17, (int*)L"Asset does not exist", 0i64);
					}
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
					goto LABEL_62;
				}
				sub_14001C480((__int64)&v38, v14->m128i_i32, v32->m128i_i32);
				v22 = v39;
			}
			else
			{
				v26 = 0i64;
				do
					v20 = aAssetDoesNotEx_4[++v26] == 0;
				while (!v20);
				if ((2 * v26) >> 1)
				{
					sub_14001C310(&v34, (int*)L"Asset does not exist", (int*)&aAssetDoesNotEx_4[v26]);
					v17 = v35;
				}
				else
				{
					sub_1407DB590(v17, (int*)L"Asset does not exist", 0i64);
				}
			}
		}
		v41 = 0i64;
		v27 = sub_14018B280(16i64, 0);
		v28 = (__int64)v27;
		if (v27)
			*(_WORD*)v27 = 0;
		if (sub_1400E27B0(qword_140C63650, v22, &v41))
		{
			v29 = v41;
			sub_14012A720(a1, v41);
			if (v29)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
		}
		else
		{
			if (v41)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v28)
			sub_14018B900(v28, 0);
		goto LABEL_62;
	}
	*(_DWORD*)(v9 + 8) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 14012D8C0: variable 'v18' is possibly undefined
// 14012D8C0: variable 'v16' is possibly undefined
// 14012D8F7: variable 'v23' is possibly undefined
// 14012D8F7: variable 'v24' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A209C0: using guessed type wchar_t aAssetDoesNotEx_4[21];
// 140A209F0: using guessed type wchar_t aAssetDoesNotEx_3[21];
// 140C63650: using guessed type __int64 qword_140C63650;

