#include "../winhttp.h"

//----- (00000001400F52E0) ----------------------------------------------------
_QWORD* __fastcall sub_1400F52E0(__int64 a1, __m128i* a2, int* a3, __int64 a4, __int64 a5, int a6)
{
	int* v7; // rdi
	const __m128i* v9; // rax
	_QWORD* v10; // r14
	__m128i* v11; // r13
	int* v12; // rax
	__int64 v13; // r8
	int* v14; // r15
	__int64 v15; // rcx
	__int64 v16; // rax
	bool v17; // zf
	__int64 v18; // rax
	__int64 i; // rax
	__int64 v20; // rcx
	__int64 v21; // r8
	__int64 v22; // rax
	wchar_t* v23; // rdx
	__m128i* v24; // rax
	BOOL v25; // ebx
	int* v26; // rdi
	__int64 v27; // r12
	__int64 j; // rax
	unsigned __int64 v29; // rdx
	unsigned __int64 v30; // rsi
	unsigned __int64 v31; // r12
	__int64 v32; // rax
	__int64* v33; // rax
	int* v34; // r8
	int* v35; // rbx
	unsigned __int64 v36; // rcx
	int* v37; // rcx
	signed __int64 v38; // rdx
	__int64 v39; // rcx
	__int64 v40; // rbx
	__int64 v41; // rax
	unsigned __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v44; // [rsp+58h] [rbp-B0h] BYREF
	int v45; // [rsp+60h] [rbp-A8h]
	int v46; // [rsp+64h] [rbp-A4h]
	__int64 v47; // [rsp+68h] [rbp-A0h] BYREF
	int* v48; // [rsp+70h] [rbp-98h]
	int* v49; // [rsp+78h] [rbp-90h]
	int* v50; // [rsp+80h] [rbp-88h]
	__int64 v51; // [rsp+88h] [rbp-80h] BYREF
	__int64 v52; // [rsp+90h] [rbp-78h] BYREF
	__m128i* v53; // [rsp+98h] [rbp-70h]
	const __m128i* v54; // [rsp+A0h] [rbp-68h]
	const __m128i* v55; // [rsp+A8h] [rbp-60h]
	__int64 v56; // [rsp+B0h] [rbp-58h]
	__int64 v57; // [rsp+B8h] [rbp-50h]
	int* v58; // [rsp+C0h] [rbp-48h]
	__int64 v59; // [rsp+C8h] [rbp-40h]
	__m128i v60[33]; // [rsp+D8h] [rbp-30h] BYREF

	v56 = a5;
	v46 = a6;
	v7 = *(int**)(qword_140C63650 + 784);
	v59 = a1;
	v57 = a4;
	v58 = a3;
	v9 = (const __m128i*)sub_14018B280(16i64, 0);
	v10 = 0i64;
	v11 = (__m128i*)v9;
	v53 = (__m128i*)v9;
	v54 = v9;
	v55 = v9 + 1;
	if (v9)
		v9->m128i_i16[0] = 0;
	v12 = sub_14018B280(16i64, 0);
	v14 = v12;
	v48 = v12;
	v49 = v12;
	v15 = (__int64)(v12 + 4);
	v50 = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	if (v7 && *(_WORD*)v7)
	{
		v16 = 0i64;
		do
			v17 = *((_WORD*)v7 + ++v16) == 0;
		while (!v17);
		if ((2 * v16) >> 1)
			sub_14001C310(&v52, v7, (int*)((char*)v7 + 2 * v16));
		else
			sub_1407DB590(v11->m128i_i32, v7, 0i64);
		v18 = 0i64;
		do
			v17 = *(_WORD*)&asc_1409D44DC[2 * v18++ + 2] == 0;
		while (!v17);
		sub_14001C310(&v52, (int*)"\\", (int*)&asc_1409D44DC[2 * v18]);
		v11 = v53;
	}
	if (!*(_QWORD*)(*(_QWORD*)(a1 + 8) + 2528i64))
	{
		if (!(unsigned int)sub_1401B58D0(v15, a2, v13))
		{
			if (!v7 || !*(_WORD*)v7)
			{
				v22 = 0i64;
				v23 = L"Asset does not exist";
				do
					v17 = aAssetDoesNotEx_2[++v22] == 0;
				while (!v17);
			LABEL_27:
				if ((2 * v22) >> 1)
				{
					sub_14001C310(&v47, (int*)v23, (int*)&v23[v22]);
					v14 = v48;
					if (v48 != v49)
						goto LABEL_65;
				}
				else
				{
					sub_1407DB590(v14, (int*)v23, 0i64);
				}
				goto LABEL_30;
			}
			for (i = 0i64; a2->m128i_i16[i]; ++i)
				;
			sub_14001C310(&v52, a2->m128i_i32, (int*)((char*)a2->m128i_i32 + 2 * i));
			v11 = v53;
			a2 = v53;
			if (!(unsigned int)sub_1401B58D0(v20, v53, v21))
			{
				v22 = 0i64;
				v23 = L"Asset does not exist";
				do
					v17 = aAssetDoesNotEx_1[++v22] == 0;
				while (!v17);
				goto LABEL_27;
			}
		}
	LABEL_30:
		v51 = 0i64;
		if (sub_1400E27B0(qword_140C63650, a2, &v51))
		{
			if ((int)sub_14001B370(
				v60,
				260i64,
				L"%s\\%s\\%s\\%s",
				*(_QWORD*)&qword_140C63788 + 2684i64,
				L"NCSOFT",
				*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
				&unk_1409D4504) >= 0
				&& v60[0].m128i_i16[0])
			{
				v24 = v60;
				do
				{
					v17 = v24->m128i_i16[1] == 0;
					v24 = (__m128i*)((char*)v24 + 2);
				} while (!v17);
			}
			v25 = sub_1407DF6E0(a2, v60) != 0i64;
			v45 = v25;
			v26 = sub_14018B280(2i64, 0);
			v48 = v26;
			v50 = (int*)((char*)v26 + 2);
			sub_1407DB590(v26, dword_1409D43F4, 0i64);
			v27 = (__int64)v26;
			v49 = v26;
			if (v26)
				*(_WORD*)v26 = 0;
			if (v25)
			{
				for (j = 0i64; a2->m128i_i16[j]; ++j)
					;
				if ((2 * j) >> 1)
				{
					sub_14001C310(&v47, a2->m128i_i32, (int*)((char*)a2->m128i_i32 + 2 * j));
					v27 = (__int64)v49;
					v26 = v48;
				}
				else
				{
					sub_1407DB590(v26, a2->m128i_i32, 0i64);
				}
				v29 = 0i64;
				do
					++v29;
				while (word_1409D440C[v29]);
				v30 = -1i64;
				v31 = (v27 - (__int64)v26) >> 1;
				v44 = -1i64;
				v43 = v31;
				if (v29 <= v31)
				{
					if (v29)
					{
						v43 = v31 - v29;
						v32 = sub_1400F91C0((__int64)v26, (__int64)v26 + 2 * v31, (__int64)&v43, (__int64)&word_1409D440C[v29]);
						if ((int*)v32 != (int*)((char*)v26 + 2 * v31))
							v30 = (v32 - (__int64)v26) >> 1;
					}
					else
					{
						v30 = v43;
					}
				}
				v33 = (__int64*)&v43;
				if (v31 >= v30)
					v33 = &v44;
				v44 = v30;
				v43 = v31;
				v34 = 0i64;
				v35 = (int*)((char*)v26 + 2 * *v33);
				v36 = ((2 * *v33) >> 1) + 1;
				if (v36 <= 0x7FFFFFFFFFFFFFFEi64)
					v34 = sub_14018B280(2 * v36, 0);
				v37 = v34;
				if (v26 != v35)
				{
					v38 = (char*)v26 - (char*)v34;
					do
					{
						if (v37)
							*(_WORD*)v37 = *(_WORD*)((char*)v37 + v38);
						v37 = (int*)((char*)v37 + 2);
					} while ((int*)((char*)v37 + v38) != v35);
				}
				if (v37)
					*(_WORD*)v37 = 0;
				v39 = (__int64)v26;
				v26 = v34;
				if (v39)
					sub_14018B900(v39, 0);
			}
			v40 = v51;
			v41 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v51 + 16i64))(v51);
			v10 = sub_1400F5890(v59, v41, v58, v57, v56, v46, v45, v26);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
			if (v26)
				sub_14018B900((__int64)v26, 0);
		}
	}
LABEL_65:
	if (v14)
		sub_14018B900((__int64)v14, 0);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	return v10;
}
// 1400F5462: variable 'v15' is possibly undefined
// 1400F5462: variable 'v13' is possibly undefined
// 1400F54A6: variable 'v20' is possibly undefined
// 1400F54A6: variable 'v21' is possibly undefined
// 1409D43F4: using guessed type int dword_1409D43F4[6];
// 1409D440C: using guessed type _WORD word_1409D440C[16];
// 140A19068: using guessed type wchar_t aAssetDoesNotEx_2[21];
// 140A19098: using guessed type wchar_t aAssetDoesNotEx_1[21];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C63650: using guessed type __int64 qword_140C63650;
// 1400F52E0: using guessed type __m128i var_260[33];

