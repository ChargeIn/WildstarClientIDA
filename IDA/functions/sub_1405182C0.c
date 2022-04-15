#include "../winhttp.h"

//----- (00000001405182C0) ----------------------------------------------------
void __fastcall sub_1405182C0(_QWORD* a1)
{
	__m128i* v2; // rax
	__int64* v3; // rcx
	__int64 v4; // r13
	__int64 v5; // r8
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r15
	_QWORD* v9; // rbx
	unsigned __int64 v10; // r12
	__m128i* v11; // rsi
	int v12; // r13d
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rdi
	unsigned int v16; // edx
	int v17; // r14d
	int* v18; // rax
	__int64 v19; // rbx
	int v20; // eax
	int v21; // ecx
	unsigned int v22; // ecx
	__int64 v23; // rax
	unsigned __int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // r9
	unsigned __int64 v27; // rcx
	_WORD* v28; // rax
	unsigned __int64 v29; // rax
	int* v30; // rax
	int* v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // rcx
	unsigned int* v34; // rdi
	void(__fastcall * **v35)(_QWORD); // rbx
	__int64 v36; // rax
	__int64 v37; // rax
	int v38; // edi
	_DWORD* v39; // rax
	__int64 v40; // rax
	int v41; // ebx
	_DWORD* v42; // rax
	__int64 v43; // rax
	int v44; // ecx
	unsigned int v45; // [rsp+30h] [rbp-D0h] BYREF
	_QWORD* v46; // [rsp+38h] [rbp-C8h]
	__m128i* v47; // [rsp+40h] [rbp-C0h] BYREF
	int v48; // [rsp+48h] [rbp-B8h]
	int v49; // [rsp+4Ch] [rbp-B4h]
	__int64 v50[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v51; // [rsp+110h] [rbp+10h]
	int* v52; // [rsp+120h] [rbp+20h]
	__int64 v53; // [rsp+130h] [rbp+30h] BYREF
	__int64 v54; // [rsp+138h] [rbp+38h]
	int v55; // [rsp+150h] [rbp+50h]
	__int64 v56; // [rsp+430h] [rbp+330h]
	int v57; // [rsp+5C8h] [rbp+4C8h]
	int v58; // [rsp+5D0h] [rbp+4D0h]

	v46 = a1;
	v2 = (__m128i*)sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ActionConfirmButton.xml",
		(int*)L"TooltipBase",
		0i64,
		0i64,
		-2);
	v3 = (__int64*)a1[1];
	v4 = (__int64)v2;
	v5 = *v3;
	v47 = v2;
	(*(void(__fastcall**)(__int64*, __m128i*))(v5 + 520))(v3, v2);
	if (!v4)
		return;
	v6 = sub_1400D3830(v4 + 552, L"ActionConfirm_LabelML");
	if (!v6)
		return;
	v7 = sub_1400D3830(v4 + 552, L"Container");
	v8 = v7;
	if (!v7)
		return;
	sub_140514F00(v6, v7, a1[5]);
	v9 = a1;
	v10 = 0i64;
	if (!a1[4])
		goto LABEL_63;
	v11 = v47;
	v12 = v45;
	do
	{
		v13 = *(_QWORD*)(v9[3] + 8 * v10);
		if (!v13)
			goto LABEL_61;
		v14 = sub_1401E8C20(*(_DWORD*)(v13 + 8));
		v15 = v14;
		if (!v14)
			goto LABEL_61;
		v16 = *(_DWORD*)(v14 + 8);
		v17 = 8;
		if (v16)
		{
			v18 = sub_1400B5DF0(qword_140C658F0, v16, 0i64);
			v19 = (__int64)v18;
			if (!v18)
			{
			LABEL_27:
				v9 = v46;
				goto LABEL_28;
			}
			v12 = v18[119];
			v11 = (__m128i*) * ((_QWORD*)v18 + 61);
			sub_14040FAE0((__int64)&v53);
			v20 = v58;
			if (v58 > 6)
			{
				v19 = v54;
			}
			else
			{
				v20 = 6;
				v54 = v19;
				v58 = 6;
			}
			if (v57)
			{
				v21 = 1;
				if (v55 > 1)
					v21 = v55;
			}
			else
			{
				if (!v20 || !v19)
				{
				LABEL_23:
					if (v53)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v53 + 8i64))(v53);
						v53 = 0i64;
					}
					if (v56)
						sub_14018B900(v56, 0);
					goto LABEL_27;
				}
				v21 = 1;
				if (*(int*)(v19 + 344) > 1)
					v21 = *(_DWORD*)(v19 + 344);
			}
			v17 = 7;
			if (v21 < 7)
				v17 = v21;
			goto LABEL_23;
		}
	LABEL_28:
		v22 = *(_DWORD*)(v15 + 12);
		if (v22)
		{
			v23 = sub_1401FE020(v22);
			if (v23)
			{
				v24 = *(_QWORD*)(v23 + 32);
				v12 = *(_DWORD*)(v23 + 20);
				if (v24)
				{
					if (v24 <= qword_140C3FE70)
						v11 = (__m128i*)(v24 + qword_140C3FE68);
					else
						v11 = 0i64;
				}
				else
				{
					v11 = 0i64;
				}
			}
		}
		v25 = sub_1401E87E0(*(_DWORD*)(v15 + 28));
		v26 = v25;
		if (v25)
		{
			v27 = *(_QWORD*)(v15 + 40);
			v12 = *(_DWORD*)(v25 + 4);
			if (!v27 || v27 > qword_140C3FE70 || !(v27 + qword_140C3FE68))
				goto LABEL_45;
			v28 = 0i64;
			if (v27 <= qword_140C3FE70)
				v28 = (_WORD*)(v27 + qword_140C3FE68);
			if (*v28)
			{
				if (v27 <= qword_140C3FE70)
					v11 = (__m128i*)(v27 + qword_140C3FE68);
				else
					v11 = 0i64;
			}
			else
			{
			LABEL_45:
				v29 = *(_QWORD*)(v26 + 8);
				if (v29)
				{
					if (v29 <= qword_140C3FE70)
						v11 = (__m128i*)(v29 + qword_140C3FE68);
					else
						v11 = 0i64;
				}
				else
				{
					v11 = 0i64;
				}
			}
		}
		sub_1400B7210((__int64)v50, (int*)L"$1n");
		v52 = 0i64;
		v51 = 0i64;
		v50[0] = (__int64)off_140B69230;
		v30 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v51 = v30;
		*((_QWORD*)&v51 + 1) = v30;
		v52 = v30 + 4;
		if (v30)
			*(_WORD*)v30 = 0;
		v31 = sub_14018B280(96i64, 0);
		if (v31)
			v32 = (_QWORD*)sub_1404DDAF0((__int64)v31, v12);
		else
			v32 = 0i64;
		sub_1400B7480((__int64)v50, v32);
		if (v17 == 8)
		{
			v45 = sub_140142170(qword_140C63678, L"UI_TextHoloBody");
			v37 = sub_1400B7660(v50);
			sub_140514C10(v8, *(_QWORD*)(v37 + 8), v11, 0i64, &v45, 1u);
			sub_1401429A0(qword_140C63678, v45);
		}
		else
		{
			v33 = v9[1];
			v34 = (unsigned int*)(v33 + 4 * (v17 + 468i64));
			v35 = *(void(__fastcall****)(_QWORD))(v33 + 16 * (3i64 * v17 + 93));
			v36 = sub_1400B7660(v50);
			sub_140514C10(v8, *(_QWORD*)(v36 + 8), v11, v35, v34, 1u);
		}
		if ((_QWORD)v51)
			sub_14018B900(v51, 0);
		sub_1400B7390(v50);
		v9 = v46;
	LABEL_61:
		++v10;
	} while (v10 < v9[4]);
	v4 = (__int64)v47;
LABEL_63:
	v38 = sub_1400CD4C0(v8, 0);
	if (*(char*)(v8 + 29) >= 0)
	{
		v39 = sub_1400CB0E0(v8, &v47, v8 + 64);
		*(_DWORD*)(v8 + 396) = *v39;
		*(_DWORD*)(v8 + 400) = v39[1];
		*(_DWORD*)(v8 + 404) = v39[2];
		*(_DWORD*)(v8 + 408) = v39[3];
		*(_BYTE*)(v8 + 29) |= 0x80u;
		v40 = v8;
		do
		{
			if (!*(_DWORD*)(v40 + 392))
				break;
			*(_DWORD*)(v40 + 392) = 0;
			v40 = *(_QWORD*)(v40 + 16);
		} while (v40);
	}
	v41 = *(_DWORD*)(v8 + 408) - *(_DWORD*)(v8 + 400);
	if (*(char*)(v4 + 29) >= 0)
	{
		v42 = sub_1400CB0E0(v4, &v47, v4 + 64);
		*(_DWORD*)(v4 + 396) = *v42;
		*(_DWORD*)(v4 + 400) = v42[1];
		*(_DWORD*)(v4 + 404) = v42[2];
		*(_DWORD*)(v4 + 408) = v42[3];
		*(_BYTE*)(v4 + 29) |= 0x80u;
		v43 = v4;
		do
		{
			if (!*(_DWORD*)(v43 + 392))
				break;
			*(_DWORD*)(v43 + 392) = 0;
			v43 = *(_QWORD*)(v43 + 16);
		} while (v43);
	}
	v47 = *(__m128i**)(v4 + 396);
	v48 = *(_DWORD*)(v4 + 404);
	v44 = v38 + *(_DWORD*)(v4 + 408) - v41;
	if (v44 < *(_DWORD*)(v4 + 408))
		v44 = *(_DWORD*)(v4 + 408);
	v49 = v44;
	sub_1400CC7C0(v4, (int*)&v47);
	sub_1400CB690(v4);
	sub_1400CB960((char*)v4);
}
// 140518540: conditional instruction was optimized away because rcx.8!=0
// 140518554: conditional instruction was optimized away because rcx.8!=0
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140B6BA40: using guessed type wchar_t aUiTextholobody[16];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

