#include "../winhttp.h"

//----- (00000001403D1E40) ----------------------------------------------------
void __fastcall sub_1403D1E40(__int64* a1, unsigned int a2, unsigned int a3, int a4)
{
	unsigned __int64 v5; // rcx
	unsigned __int64 v9; // r14
	__int64 v10; // rdx
	_DWORD* v11; // rax
	unsigned __int64 v12; // r14
	unsigned __int64 v13; // rbx
	__int64 v14; // rcx
	int* v15; // rax
	unsigned __int64 v16; // rcx
	int* v17; // rdi
	int* v18; // rdx
	__int64 v19; // rcx
	int* v20; // rax
	__int64(__fastcall * *v21)(); // rcx
	__int64 v22; // r14
	unsigned int v23; // esi
	int* v24; // rax
	__int64(__fastcall * *v25)(); // rcx
	int* v26; // rdi
	int* v27; // rbx
	__int64 v28; // rax
	int** v29; // rax
	__int64 v30; // rsi
	__int64 v31; // rdi
	unsigned int v32; // eax
	__int64 v33; // rcx
	__int64* v34; // rdx
	int* v35; // rdi
	int** v36; // rax
	__int64 v37; // rdi
	unsigned int v38; // eax
	__int64 v39; // [rsp+30h] [rbp-38h] BYREF
	unsigned __int64 v40; // [rsp+38h] [rbp-30h]
	int* v41; // [rsp+70h] [rbp+8h] BYREF

	v5 = a1[4076];
	v9 = 0i64;
	if (v5)
	{
		v10 = a1[4075];
		v11 = (_DWORD*)(v10 + 8);
		while (*v11 != a2)
		{
			++v9;
			v11 += 4;
			if (v9 >= v5)
				goto LABEL_5;
		}
		v22 = 16 * v9;
		v23 = *(_DWORD*)(v22 + v10 + 12);
		*(_DWORD*)(v22 + v10 + 12) = a3;
		v24 = sub_14018B280(18i64, 0);
		if (v24)
		{
			v25 = off_140B55060;
			*((_QWORD*)v24 + 1) = 0i64;
			*(_QWORD*)v24 = off_140B55060;
		}
		else
		{
			v24 = 0i64;
		}
		v26 = v24 + 4;
		v27 = v24 + 4;
		*((_WORD*)v24 + 8) = 0;
		if (!a4)
		{
			v28 = a1[4075];
			if (*(_DWORD*)(v22 + v28 + 12) > v23)
			{
				v29 = sub_1403D2200((__int64)v25, &v41, *(_DWORD*)(v22 + v28 + 8));
				v27 = *v29;
				*v29 = v26;
				if (v41)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v41 - 2) + 8i64))(v41 - 4);
				if (*((_QWORD*)v27 - 1))
					sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v27, 0, 0i64);
			}
		}
		sub_1404313E0(a1[3688], v22 + a1[4075], (__int64)v27, a4);
		v30 = a1[4075];
		v31 = *(_QWORD*)qword_140C658D0;
		v32 = sub_1403D2140((__int64)a1, *(_DWORD*)(v30 + v22 + 8));
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(v31 + 8))(
			qword_140C658D0,
			*(unsigned int*)(v30 + v22 + 8),
			v32,
			0i64);
		v33 = a1[4092];
		if (v33)
		{
			v34 = (__int64*)(v22 + a1[4075]);
		LABEL_31:
			sub_1404356B0(v33, (__int64)v34, (__int64)v27, a4);
		}
	}
	else
	{
	LABEL_5:
		v12 = v5 + 1;
		v13 = v5;
		v14 = a1[4075];
		v39 = 0i64;
		v40 = __PAIR64__(a3, a2);
		v15 = sub_14018DB00(v14, v12, 16i64);
		v16 = v40;
		v13 *= 2i64;
		v17 = v15;
		*(_QWORD*)&v15[2 * v13] = 0i64;
		*(_QWORD*)&v15[2 * v13 + 2] = v16;
		v18 = (int*)a1[4075];
		if (v18 != v15)
		{
			sub_1407DB590(v15, v18, 16 * a1[4076]);
			v19 = a1[4075];
			if (v19)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
			a1[4075] = (__int64)v17;
		}
		a1[4076] = v12;
		v20 = sub_14018B280(18i64, 0);
		if (v20)
		{
			v21 = off_140B55060;
			*((_QWORD*)v20 + 1) = 0i64;
			*(_QWORD*)v20 = off_140B55060;
		}
		else
		{
			v20 = 0i64;
		}
		v35 = v20 + 4;
		v27 = v20 + 4;
		*((_WORD*)v20 + 8) = 0;
		if (!a4 && a3)
		{
			v36 = sub_1403D2200((__int64)v21, &v41, a2);
			v27 = *v36;
			*v36 = v35;
			if (v41)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v41 - 2) + 8i64))(v41 - 4);
			if (*((_QWORD*)v27 - 1))
				sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v27, 0, 0i64);
		}
		sub_1404313E0(a1[3688], (__int64)&v39, (__int64)v27, a4);
		v37 = *(_QWORD*)qword_140C658D0;
		v38 = sub_1403D2140((__int64)a1, a2);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(v37 + 8))(qword_140C658D0, a2, v38, 0i64);
		v33 = a1[4092];
		if (v33)
		{
			v34 = &v39;
			goto LABEL_31;
		}
	}
	if (v27)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 4);
}
// 1403D1F98: variable 'v25' is possibly undefined
// 1403D206C: variable 'v21' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C658D0: using guessed type __int64 qword_140C658D0;

