#include "../winhttp.h"

//----- (00000001404E01E0) ----------------------------------------------------
__int64 __fastcall sub_1404E01E0(__int64* a1, int* a2, unsigned int a3, int** a4)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rbp
	__int64 v10; // rax
	int* v11; // r14
	__int64 v12; // rbx
	signed __int64 v13; // rbx
	char* v14; // rsi
	__int64 v15; // r15
	char* v16; // rax
	unsigned __int64 v17; // rbx
	char* v18; // rax
	unsigned __int64 v19; // r12
	unsigned __int64* v20; // rax
	char* v21; // r13
	char* v22; // r15
	int* v23; // rsi
	unsigned __int64 v24; // rcx
	int* v25; // rdx
	char* v26; // r8
	bool v27; // zf
	_WORD* v28; // rax
	BOOL v29; // ebx
	__int64 v30; // rax
	__int64 v31; // r15
	__int64 v32; // rdx
	float v33; // xmm1_4
	float v34; // xmm1_4
	float v35; // xmm0_4
	__int64 v36; // rbx
	int* v37; // rdx
	__int64 v38; // rax
	__int64 v39; // rax
	__int64 v40; // r15
	__int64 v41; // rdx
	int* v42; // rbp
	int** v43; // r13
	int* v44; // r15
	int* v45; // rax
	int* v46; // rdi
	unsigned __int64 v47; // rbx
	BOOL v48; // [rsp+20h] [rbp-58h]
	unsigned __int64 v49; // [rsp+28h] [rbp-50h] BYREF
	__int64 v50[2]; // [rsp+30h] [rbp-48h] BYREF
	unsigned int v51; // [rsp+90h] [rbp+18h] BYREF
	int** v52; // [rsp+98h] [rbp+20h]

	v52 = a4;
	if (!a3)
		return 0i64;
	v7 = sub_1404E1C50((__int64)a1, a3, *(_QWORD*)(qword_140C65898 + 120));
	if (!v7)
		return 0i64;
	result = sub_1404CC920(v8, *(_DWORD*)(v7 + 92));
	v9 = result;
	if (result)
	{
		v10 = 0i64;
		v11 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v10;
			while (*((_WORD*)a2 + v10));
		}
		v12 = (2 * v10) >> 1;
		if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v11 = sub_14018B280(2 * (v12 + 1), 0);
		v13 = 2 * v12;
		sub_1407DB590(v11, a2, v13);
		v14 = (char*)v11 + v13;
		if ((int*)((char*)v11 + v13))
			*(_WORD*)v14 = 0;
		v15 = v13 >> 1;
		if (!(v13 >> 1)
			|| (HIWORD(v51) = 46, v16 = (char*)sub_14002C8A0(v11, (__int64)v11 + v13, v51), v16 == v14)
			|| (v17 = (v16 - (char*)v11) >> 1, v17 == -1i64)
			|| (HIWORD(v51) = 41, v18 = (char*)sub_14002C8A0(v11, (__int64)v14, v51), v18 == v14)
			|| (v19 = (v18 - (char*)v11) >> 1, v19 == -1i64)
			|| v17 >= v19)
		{
			v19 = 0i64;
		LABEL_74:
			if (v11)
				sub_14018B900((__int64)v11, 0);
			return v19;
		}
		v20 = (unsigned __int64*)v50;
		v50[0] = v15 - (v17 + 1);
		v21 = (char*)v11 + 2 * v17 + 2;
		v49 = v19 - v17 - 1;
		if (v50[0] >= v49)
			v20 = &v49;
		v22 = (char*)v11 + 2 * v17 + 2 * *v20 + 2;
		v23 = 0i64;
		v24 = ((v22 - v21) >> 1) + 1;
		if (v24 <= 0x7FFFFFFFFFFFFFFEi64)
			v23 = sub_14018B280(2 * v24, 0);
		v25 = v23;
		if (v21 != v22)
		{
			v26 = (char*)v11 + 2 * v17 + 2 - (_QWORD)v23;
			do
			{
				if (v25)
					*(_WORD*)v25 = *(_WORD*)((char*)v25 + (_QWORD)v26);
				v25 = (int*)((char*)v25 + 2);
			} while ((char*)v25 + (_QWORD)v26 != v22);
		}
		if (v25)
			*(_WORD*)v25 = 0;
		v48 = sub_14018E5E0(v23, L"pctAdd") != 0;
		LODWORD(v49) = sub_14018E5E0(v23, L"pctSub") != 0;
		LODWORD(v50[0]) = sub_14018E5E0(v23, L"pct") != 0;
		v27 = sub_14018E5E0(v23, L"abs") == 0;
		v28 = (_WORD*)a1[24];
		v29 = !v27;
		if (v28 != (_WORD*)a1[25])
		{
			*v28 = 0;
			a1[25] = a1[24];
		}
		if (sub_14018E5E0(v23, L"dataInt"))
		{
			v30 = *a1;
			v51 = 0;
			(*(void(__fastcall**)(__int64*, int*, const wchar_t*, unsigned int*))(v30 + 184))(a1, v23, L"dataInt", &v51);
			v31 = v51;
			if (v51 >= 5)
			{
			LABEL_61:
				v36 = 0i64;
			LABEL_62:
				v42 = (int*)a1[24];
				v43 = v52;
				v44 = *v52;
				if (v42)
				{
					if (*(_WORD*)v42)
					{
						do
							++v36;
						while (*((_WORD*)v42 + v36));
					}
					v45 = sub_14018B280(2 * v36 + 18, 0);
					if (v45)
					{
						*((_QWORD*)v45 + 1) = v36;
						*(_QWORD*)v45 = off_140B55060;
					}
					v46 = v45 + 4;
					v47 = 2 * v36;
					sub_1407DB590(v45 + 4, v42, v47);
					*(_WORD*)((char*)v46 + v47) = 0;
					*v43 = v46;
				}
				else
				{
					*v52 = 0i64;
				}
				if (v44)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
				if (v23)
					sub_14018B900((__int64)v23, 0);
				goto LABEL_74;
			}
			if (sub_14018E5E0(v23, L"ms"))
			{
			LABEL_33:
				sub_1404DE760((__int64)a1, v32, v29);
				goto LABEL_61;
			}
			if (v48)
			{
				v33 = (float)*(int*)(v9 + 4 * v31 + 8);
			LABEL_36:
				v34 = (float)(v33 * 1000.0) - 1000.0;
			LABEL_37:
				sub_1404DE7D0((__int64)a1, (int)(float)(v34 + 0.5), v29);
				goto LABEL_61;
			}
			if ((_DWORD)v49)
			{
				v35 = (float)*(int*)(v9 + 4 * v31 + 8);
			LABEL_40:
				v34 = 1000.0 - (float)(v35 * 1000.0);
				goto LABEL_37;
			}
			if (LODWORD(v50[0]))
			{
				sub_1404DE7D0((__int64)a1, (int)(float)((float)*(int*)(v9 + 4 * v31 + 8) * 1000.0), v29);
				goto LABEL_61;
			}
			v36 = 0i64;
			v37 = (int*)*sub_14034C700(v50, (__int64)L"%d", *(unsigned int*)(v9 + 4 * v31 + 8));
			v38 = 0i64;
			if (*(_WORD*)v37)
			{
				do
					++v38;
				while (*((_WORD*)v37 + v38));
			}
		}
		else
		{
			if (!sub_14018E5E0(v23, L"dataFloat"))
				goto LABEL_61;
			v39 = *a1;
			v51 = 0;
			(*(void(__fastcall**)(__int64*, int*, const wchar_t*, unsigned int*))(v39 + 184))(
				a1,
				v23,
				L"dataFloat",
				&v51);
			v40 = v51;
			if (v51 >= 5)
				goto LABEL_61;
			if (sub_14018E5E0(v23, L"ms"))
				goto LABEL_33;
			if (v48)
			{
				v33 = *(float*)(v9 + 4 * v40 + 28);
				goto LABEL_36;
			}
			if ((_DWORD)v49)
			{
				v35 = *(float*)(v9 + 4 * v40 + 28);
				goto LABEL_40;
			}
			if (LODWORD(v50[0]))
			{
				sub_1404DE7D0((__int64)a1, (int)(float)(*(float*)(v9 + 4 * v40 + 28) * 1000.0), v29);
				goto LABEL_61;
			}
			if (!sub_14018E5E0(v23, L"rawInt"))
			{
				sub_1404DE6F0((__int64)a1, v41, v29);
				goto LABEL_61;
			}
			v36 = 0i64;
			v37 = (int*)*sub_14034C700(v50, (__int64)L"%d", (unsigned int)(int)*(float*)(v9 + 4 * v40 + 28));
			v38 = 0i64;
			if (*(_WORD*)v37)
			{
				do
					++v38;
				while (*((_WORD*)v37 + v38));
			}
		}
		sub_14001C480((__int64)(a1 + 23), v37, (int*)((char*)v37 + 2 * v38));
		if (v50[0])
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v50[0] - 16) + 8i64))(v50[0] - 16);
		goto LABEL_62;
	}
	return result;
}
// 1404E0222: variable 'v8' is possibly undefined
// 1404E04ED: variable 'v32' is possibly undefined
// 1404E06EC: variable 'v41' is possibly undefined
// 140B0B290: using guessed type wchar_t aPctadd_1[7];
// 140B0B2A0: using guessed type wchar_t aPctsub_1[7];
// 140B0B388: using guessed type wchar_t aMs_2[3];
// 140B0B390: using guessed type wchar_t aRawint_2[7];
// 140B0B3A0: using guessed type wchar_t aD_46[3];
// 140B0B3B8: using guessed type wchar_t aMs_1[3];
// 140B0B3C0: using guessed type wchar_t aD_45[3];
// 140B0B3C8: using guessed type wchar_t aDatafloat[10];
// 140B0B3E0: using guessed type wchar_t aDatafloat_0[10];
// 140B0B3F8: using guessed type wchar_t aPct_1[4];
// 140B0B400: using guessed type wchar_t aAbs_1[4];
// 140B0B408: using guessed type wchar_t aDataint[8];
// 140B0B418: using guessed type wchar_t aDataint_0[8];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

