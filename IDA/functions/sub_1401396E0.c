#include "../winhttp.h"

//----- (00000001401396E0) ----------------------------------------------------
void __fastcall sub_1401396E0(__int64 a1, int* a2, int* a3, char a4)
{
	int* v4; // rdi
	__int64 v6; // rax
	__m128i* v7; // r14
	__int64 v8; // rsi
	__int16* v9; // rax
	int* v10; // rdi
	__int64 v11; // rax
	int* v12; // r15
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int* v15; // r13
	__int64 v16; // rax
	bool v17; // zf
	__int64 v18; // rax
	__m128i* v19; // rdi
	__int64 v20; // rcx
	__int64* v21; // rbx
	unsigned __int64 v22; // r12
	int* v23; // rax
	int* v24; // rsi
	__int64 v25; // rcx
	int* v26; // rdi
	__int64 v27; // rbx
	unsigned __int64 v28; // rbx
	char* v29; // rbx
	__int64 v30; // rbx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64* v33; // rax
	__int64 v34; // rbx
	bool v35; // cf
	char* v36; // rbx
	char* v37; // r14
	int* v38; // rdi
	unsigned __int64 v39; // rcx
	int* v40; // rcx
	signed __int64 v41; // rbx
	__int64 v42; // rax
	__int64 v43; // rbx
	int v44; // esi
	int* v45; // [rsp+40h] [rbp-59h] BYREF
	__int64 v46; // [rsp+48h] [rbp-51h] BYREF
	__int64 v47; // [rsp+50h] [rbp-49h] BYREF
	__m128i* v48; // [rsp+58h] [rbp-41h]
	__int16* v49; // [rsp+60h] [rbp-39h]
	__int64 v50; // [rsp+68h] [rbp-31h]
	int* v51; // [rsp+70h] [rbp-29h] BYREF
	unsigned __int64 v52; // [rsp+78h] [rbp-21h]
	__int64 v53; // [rsp+80h] [rbp-19h]
	__int64 v54; // [rsp+88h] [rbp-11h] BYREF
	char v55; // [rsp+90h] [rbp-9h] BYREF
	int v57; // [rsp+108h] [rbp+6Fh]
	__int64* v58; // [rsp+110h] [rbp+77h] BYREF
	char v59; // [rsp+118h] [rbp+7Fh]

	v59 = a4;
	v4 = (int*)&unk_1409D9044;
	if (a2)
		v4 = a2;
	v6 = 0i64;
	v7 = 0i64;
	v48 = 0i64;
	v50 = 0i64;
	if (*(_WORD*)v4)
	{
		do
			++v6;
		while (*((_WORD*)v4 + v6));
	}
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = (__m128i*)sub_14018B280(2 * (v8 + 1), 0);
		v48 = v7;
		v50 = (__int64)v7->m128i_i64 + 2 * v8 + 2;
	}
	sub_1407DB590(v7->m128i_i32, v4, 2 * v8);
	v9 = &v7->m128i_i16[v8];
	v49 = v9;
	if (v9)
		*v9 = 0;
	v10 = (int*)&unk_1409D905C;
	v11 = 0i64;
	if (a3)
		v10 = a3;
	v12 = 0i64;
	if (*(_WORD*)v10)
	{
		do
			++v11;
		while (*((_WORD*)v10 + v11));
	}
	v13 = (2 * v11) >> 1;
	if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v12 = sub_14018B280(2 * (v13 + 1), 0);
	v14 = 2 * v13;
	sub_1407DB590(v12, v10, v14);
	v15 = (int*)((char*)v12 + v14);
	if ((int*)((char*)v12 + v14))
		*(_WORD*)v15 = 0;
	if (v12 != v15)
	{
		v16 = 0i64;
		do
			v17 = *((_WORD*)&unk_1409D9074 + ++v16) == 0;
		while (!v17);
		sub_14001C310(&v47, (int*)&unk_1409D9074, (int*)((char*)&unk_1409D9074 + 2 * v16));
		sub_14001C310(&v47, v12, (int*)((char*)v12 + v14));
	}
	v18 = 0i64;
	do
		v17 = asc_1409D9144[++v18] == 0;
	while (!v17);
	sub_14001C310(&v47, (int*)L"\\*", (int*)&asc_1409D9144[v18]);
	v19 = v48;
	v58 = 0i64;
	sub_1401B54E0(v20, v48, 0i64, &v58);
	v21 = v58;
	v22 = 0i64;
	v52 = (*(__int64(__fastcall**)(__int64*))(*v58 + 56))(v58);
	if (v52)
	{
		v53 = -1i64;
		v54 = -1i64;
		do
		{
			v23 = (int*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v21 + 64))(v21, v22);
			v24 = 0i64;
			v25 = 0i64;
			v26 = v23;
			if (*(_WORD*)v23)
			{
				do
					++v25;
				while (*((_WORD*)v23 + v25));
			}
			v27 = (2 * v25) >> 1;
			if ((unsigned __int64)(v27 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v24 = sub_14018B280(2 * (v27 + 1), 0);
			v28 = 2 * v27;
			sub_1407DB590(v24, v26, v28);
			v29 = (char*)v24 + v28;
			if (v29)
				*(_WORD*)v29 = 0;
			v30 = (v29 - (char*)v24) >> 1;
			if (!v30
				|| (HIWORD(v57) = 92,
					v45 = v24,
					v46 = (__int64)v24 + 2 * v30,
					sub_14013D740((__int64*)&v51, &v46, &v45, v57),
					v51 == v24))
			{
				v31 = -1i64;
			}
			else
			{
				v31 = ((char*)v51 - (char*)v24 - 2) >> 1;
			}
			v32 = v31 + 1;
			v33 = &v46;
			v34 = v30 - v32;
			v35 = v34 != -1;
			v46 = v34;
			v36 = (char*)v24 + 2 * v32;
			if (!v35)
				v33 = &v54;
			v37 = (char*)v24 + 2 * v32 + 2 * *v33;
			v38 = 0i64;
			v39 = ((v37 - v36) >> 1) + 1;
			if (v39 <= 0x7FFFFFFFFFFFFFFEi64)
				v38 = sub_14018B280(2 * v39, 0);
			v40 = v38;
			if (v36 != v37)
			{
				v41 = v36 - (char*)v38;
				do
				{
					if (v40)
						*(_WORD*)v40 = *(_WORD*)((char*)v40 + v41);
					v40 = (int*)((char*)v40 + 2);
				} while ((char*)v40 + v41 != v37);
			}
			if (v40)
				*(_WORD*)v40 = 0;
			if (v24)
				sub_14018B900((__int64)v24, 0);
			v42 = sub_14013A410(a1, v38);
			v43 = v42;
			if (v42)
			{
				if (v59 && v12 != v15)
				{
					v44 = *(_DWORD*)(a1 + 72);
					if (&v55 != (char*)(v42 + 88))
						sub_14001C480(v42 + 88, v12, v15);
					sub_140135AD0(v43, v44);
				}
			}
			else
			{
				sub_1401395D0(a1, v12, v38, v59, 2, 0, 0i64);
			}
			if (v38)
				sub_14018B900((__int64)v38, 0);
			v21 = v58;
			++v22;
		} while (v22 < v52);
		v19 = v48;
	}
	(*(void(__fastcall**)(__int64*))(*v21 + 8))(v21);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	if (v19)
		sub_14018B900((__int64)v19, 0);
}
// 14013986D: variable 'v20' is possibly undefined
// 1409D9144: using guessed type wchar_t asc_1409D9144[3];

