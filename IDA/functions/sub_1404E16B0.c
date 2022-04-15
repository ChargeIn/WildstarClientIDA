#include "../winhttp.h"

//----- (00000001404E16B0) ----------------------------------------------------
__int64 __fastcall sub_1404E16B0(_QWORD* a1, int* a2, unsigned int a3, int** a4)
{
	__int64 result; // rax
	__int64 v7; // r12
	__int64 v8; // rax
	int* v9; // rsi
	__int64 v10; // rbx
	signed __int64 v11; // rbx
	char* v12; // rdi
	__int64 v13; // r15
	char* v14; // rax
	unsigned __int64 v15; // rbx
	char* v16; // rax
	unsigned __int64 v17; // r14
	unsigned __int64* v18; // rax
	char* v19; // r13
	int* v20; // r15
	char* v21; // rdi
	unsigned __int64 v22; // rcx
	int* v23; // rdx
	char* v24; // r8
	unsigned int v25; // ebx
	BOOL v26; // r13d
	bool v27; // zf
	_WORD* v28; // rax
	float v29; // xmm1_4
	unsigned int v30; // edx
	int* v31; // rdi
	int* v32; // rbp
	int** v33; // r12
	int* v34; // r13
	__int64 v35; // rbx
	int* v36; // rax
	unsigned int v37; // eax
	int* v38; // rdx
	__int64 v39; // rax
	__int64 v40; // rax
	__int64 v41; // rdx
	float v42; // xmm1_4
	unsigned __int64 v43; // rbx
	unsigned __int64 v44; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v45; // [rsp+28h] [rbp-40h] BYREF
	unsigned int v46; // [rsp+80h] [rbp+18h] BYREF
	int** v47; // [rsp+88h] [rbp+20h]

	v47 = a4;
	if (!a3)
		return 0i64;
	result = sub_140200220(a3);
	v7 = result;
	if (result)
	{
		v8 = 0i64;
		v9 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v8;
			while (*((_WORD*)a2 + v8));
		}
		v10 = (2 * v8) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v9 = sub_14018B280(2 * (v10 + 1), 0);
		v11 = 2 * v10;
		sub_1407DB590(v9, a2, v11);
		v12 = (char*)v9 + v11;
		if ((int*)((char*)v9 + v11))
			*(_WORD*)v12 = 0;
		v13 = v11 >> 1;
		if (!(v11 >> 1)
			|| (HIWORD(v46) = 46, v14 = (char*)sub_14002C8A0(v9, (__int64)v9 + v11, v46), v14 == v12)
			|| (v15 = (v14 - (char*)v9) >> 1, v15 == -1i64)
			|| (HIWORD(v46) = 41, v16 = (char*)sub_14002C8A0(v9, (__int64)v12, v46), v16 == v12)
			|| (v17 = (v16 - (char*)v9) >> 1, v17 == -1i64)
			|| v15 >= v17)
		{
			v17 = 0i64;
		LABEL_68:
			if (v9)
				sub_14018B900((__int64)v9, 0);
			return v17;
		}
		v18 = &v45;
		v45 = v13 - (v15 + 1);
		v19 = (char*)v9 + 2 * v15 + 2;
		v44 = v17 - v15 - 1;
		if (v45 >= v44)
			v18 = &v44;
		v20 = 0i64;
		v21 = (char*)v9 + 2 * v15 + 2 * *v18 + 2;
		v22 = ((v21 - v19) >> 1) + 1;
		if (v22 <= 0x7FFFFFFFFFFFFFFEi64)
			v20 = sub_14018B280(2 * v22, 0);
		v23 = v20;
		if (v19 != v21)
		{
			v24 = (char*)v9 + 2 * v15 + 2 - (_QWORD)v20;
			do
			{
				if (v23)
					*(_WORD*)v23 = *(_WORD*)((char*)v23 + (_QWORD)v24);
				v23 = (int*)((char*)v23 + 2);
			} while ((char*)v23 + (_QWORD)v24 != v21);
		}
		v25 = 0;
		if (v23)
			*(_WORD*)v23 = 0;
		v26 = sub_14018E5E0(v20, L"pctAdd") != 0;
		LODWORD(v44) = sub_14018E5E0(v20, L"pctSub") != 0;
		LODWORD(v45) = sub_14018E5E0(v20, L"pct") != 0;
		v27 = sub_14018E5E0(v20, L"abs") == 0;
		v28 = (_WORD*)a1[24];
		LOBYTE(v25) = !v27;
		if (v28 != (_WORD*)a1[25])
		{
			*v28 = 0;
			a1[25] = a1[24];
		}
		if (sub_14018E5E0(v20, L"dataInt"))
		{
			v46 = 0;
			(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, unsigned int*))(*a1 + 184i64))(
				a1,
				v20,
				L"dataInt",
				&v46);
			if (v46 < 5)
			{
				if (v26)
				{
					v29 = (float)((float)*(int*)(v7 + 4i64 * v46 + 4) * 1000.0) - 1000.0;
				}
				else
				{
					if (!(_DWORD)v44)
					{
						if (!(_DWORD)v45)
						{
							v37 = *(_DWORD*)(v7 + 4i64 * v46 + 4);
							if (v25)
								v37 = abs32(v37);
							v38 = (int*)*sub_14034C700(&v45, (__int64)L"%d", v37);
							v39 = 0i64;
							if (*(_WORD*)v38)
							{
								do
									++v39;
								while (*((_WORD*)v38 + v39));
							}
							sub_14001C480((__int64)(a1 + 23), v38, (int*)((char*)v38 + 2 * v39));
							if (v45)
								(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)(v45 - 16) + 8i64))(v45 - 16);
							goto LABEL_35;
						}
						v30 = (int)(float)((float)*(int*)(v7 + 4i64 * v46 + 4) * 1000.0);
						goto LABEL_34;
					}
					v29 = 1000.0 - (float)((float)*(int*)(v7 + 4i64 * v46 + 4) * 1000.0);
				}
				v30 = (int)(float)(v29 + 0.5);
			LABEL_34:
				sub_1404DE7D0((__int64)a1, v30, v25);
			}
		}
		else if (sub_14018E5E0(v20, L"dataFloat"))
		{
			v40 = *a1;
			v31 = 0i64;
			v46 = 0;
			(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, unsigned int*))(v40 + 184))(
				a1,
				v20,
				L"dataFloat",
				&v46);
			if (v46 < 5)
			{
				if (v26)
				{
					v42 = (float)(*(float*)(v7 + 4i64 * v46 + 24) * 1000.0) - 1000.0;
				}
				else
				{
					if (!(_DWORD)v44)
					{
						if ((_DWORD)v45)
							sub_1404DE7D0((__int64)a1, (int)(float)(*(float*)(v7 + 4i64 * v46 + 24) * 1000.0), v25);
						else
							sub_1404DE6F0((__int64)a1, v41, v25);
						goto LABEL_36;
					}
					v42 = 1000.0 - (float)(*(float*)(v7 + 4i64 * v46 + 24) * 1000.0);
				}
				sub_1404DE7D0((__int64)a1, (int)(float)(v42 + 0.5), v25);
			}
		LABEL_36:
			v32 = (int*)a1[24];
			v33 = v47;
			v34 = *v47;
			if (v32)
			{
				v35 = 0i64;
				if (*(_WORD*)v32)
				{
					do
						++v35;
					while (*((_WORD*)v32 + v35));
				}
				v36 = sub_14018B280(2 * v35 + 18, 0);
				if (v36)
				{
					*((_QWORD*)v36 + 1) = v35;
					*(_QWORD*)v36 = off_140B55060;
				}
				else
				{
					v36 = 0i64;
				}
				v31 = v36 + 4;
				v43 = 2 * v35;
				sub_1407DB590(v36 + 4, v32, v43);
				*(_WORD*)((char*)v31 + v43) = 0;
			}
			*v33 = v31;
			if (v34)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v34 - 2) + 8i64))(v34 - 4);
			if (v20)
				sub_14018B900((__int64)v20, 0);
			goto LABEL_68;
		}
	LABEL_35:
		v31 = 0i64;
		goto LABEL_36;
	}
	return result;
}
// 1404E1B8F: variable 'v41' is possibly undefined
// 140B0B4D8: using guessed type wchar_t aDataint_2[8];
// 140B0B4E8: using guessed type wchar_t aD_50[3];
// 140B0B4F0: using guessed type wchar_t aDatafloat_1[10];
// 140B0B508: using guessed type wchar_t aDatafloat_2[10];
// 140B0B520: using guessed type wchar_t aPctsub_4[7];
// 140B0B530: using guessed type wchar_t aPct_4[4];
// 140B0B538: using guessed type wchar_t aAbs_5[4];
// 140B0B540: using guessed type wchar_t aDataint_1[8];
// 140B0B570: using guessed type wchar_t aPctadd_4[7];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

