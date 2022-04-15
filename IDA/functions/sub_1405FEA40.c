#include "../winhttp.h"

//----- (00000001405FEA40) ----------------------------------------------------
__int64 __fastcall sub_1405FEA40(__int64 a1, unsigned int* a2)
{
	int* v2; // rbx
	__int64 v4; // rax
	bool v5; // zf
	__int64 v6; // rsi
	__int64 v7; // rax
	int* v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rsi
	_WORD* v11; // rax
	int v12; // r12d
	int* v13; // rdi
	__int64 v14; // rcx
	unsigned __int64 v15; // r15
	__int64 v16; // rsi
	int* v17; // rax
	int* v18; // rbx
	__int64 v19; // rax
	int v20; // ecx
	unsigned int v21; // edi
	__int64 v22; // rax
	int* v23; // rax
	__int64 v24; // rcx
	int v25; // edx
	int* v26; // rax
	__int64 v27; // rcx
	int* v28; // rax
	__int64 v29; // rcx
	int v30; // edx
	__int64* v31; // rax
	_QWORD* v32; // rax
	__int64 v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // rax
	int* v36; // rdi
	__int64 v38; // [rsp+38h] [rbp-D0h] BYREF
	int* v39; // [rsp+40h] [rbp-C8h]
	int* v40; // [rsp+48h] [rbp-C0h]
	int* v41; // [rsp+50h] [rbp-B8h]
	__int64 v42; // [rsp+58h] [rbp-B0h] BYREF
	int* v43; // [rsp+60h] [rbp-A8h]
	__int64 v45; // [rsp+70h] [rbp-98h]
	__int64 v46; // [rsp+78h] [rbp-90h] BYREF
	int* v47; // [rsp+80h] [rbp-88h]
	_WORD* v48; // [rsp+88h] [rbp-80h]
	__int64 v49; // [rsp+90h] [rbp-78h]
	__int64 v50; // [rsp+98h] [rbp-70h] BYREF
	__int64 v51; // [rsp+A0h] [rbp-68h]
	int v52; // [rsp+B8h] [rbp-50h] BYREF
	int v53[37]; // [rsp+C0h] [rbp-48h] BYREF
	int v54[85]; // [rsp+154h] [rbp+4Ch] BYREF

	v2 = 0i64;
	v45 = 0i64;
	v4 = 0i64;
	v43 = 0i64;
	do
		v5 = asc_140B24148[++v4] == 0;
	while (!v5);
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v6 + 1), 0);
		v43 = v2;
		v45 = (__int64)v2 + 2 * v6 + 2;
	}
	sub_1407DB590(v2, (int*)L"\n\n------------------------", 2 * v6);
	if ((int*)((char*)v2 + 2 * v6))
		*((_WORD*)v2 + v6) = 0;
	v7 = 0i64;
	do
		v5 = aItemnameProbab[++v7] == 0;
	while (!v5);
	sub_14001C310(&v42, (int*)L"\nItemName    probability", (int*)&aItemnameProbab[v7]);
	v8 = 0i64;
	v49 = 0i64;
	v47 = 0i64;
	v9 = 0i64;
	do
		v5 = aLootitemtypeRe[++v9] == 0;
	while (!v5);
	v10 = (2 * v9) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v8 = sub_14018B280(2 * (v10 + 1), 0);
		v47 = v8;
		v49 = (__int64)v8 + 2 * v10 + 2;
	}
	sub_1407DB590(v8, (int*)L"lootItemType,rewardId,expectedItemName,probability", 2 * v10);
	v11 = (_WORD*)v8 + v10;
	v48 = v11;
	if (v11)
		*v11 = 0;
	v12 = 0;
	sub_1400B52A0((__int64)v53);
	sub_1407E4830(&v52, 0i64, 0x1F0ui64);
	sub_1407E4830(v53, 0i64, 0x138ui64);
	sub_1407E4830(v54, 0i64, 0x90ui64);
	v13 = v54;
	v14 = 15i64;
	v15 = 0i64;
	while (v14)
	{
		*v13++ = 197;
		--v14;
	}
	if (*a2)
	{
		v16 = 0i64;
		while (1)
		{
			v17 = sub_14018B280(16i64, 0);
			v18 = v17;
			v39 = v17;
			v40 = v17;
			v41 = v17 + 4;
			if (v17)
				*(_WORD*)v17 = 0;
			v19 = *((_QWORD*)a2 + 1);
			v20 = *(_DWORD*)(v16 + v19);
			if (v20)
			{
				if (v20 != 8)
					goto LABEL_42;
				v21 = *(_DWORD*)(v16 + v19 + 4);
				if (qword_140C63840)
				{
					v22 = qword_140C63840(off_140A690C8, v21, qword_140C63858);
				}
				else
				{
					if (dword_140C64170 || (int)sub_1401E89C0() < 0)
						goto LABEL_42;
					v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652D0 + 24i64))(qword_140C652D0, v21);
				}
				if (!v22)
					goto LABEL_42;
				v23 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v22 + 8), &v52);
				if (!v23)
					goto LABEL_42;
				v25 = v23[119];
				if (!v25)
					goto LABEL_42;
				v26 = (int*)sub_14034BDD0(v24, v25);
				v27 = 0i64;
				if (*(_WORD*)v26)
				{
					do
						++v27;
					while (*((_WORD*)v26 + v27));
				}
			}
			else
			{
				v28 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v16 + v19 + 4), &v52);
				if (!v28)
					goto LABEL_42;
				v30 = v28[119];
				if (!v30)
					goto LABEL_42;
				v26 = (int*)sub_14034BDD0(v29, v30);
				v27 = 0i64;
				if (*(_WORD*)v26)
				{
					do
						++v27;
					while (*((_WORD*)v26 + v27));
				}
			}
			if (!((2 * v27) >> 1))
			{
				sub_1407DB590(v18, v26, 0i64);
			LABEL_42:
				v31 = sub_14018EFA0(
					&v50,
					(__int64)L"[type:%d id:%d]",
					*(unsigned int*)(v16 + *((_QWORD*)a2 + 1)),
					*(unsigned int*)(v16 + *((_QWORD*)a2 + 1) + 4));
				if (v31 != &v38)
				{
					sub_14001C480((__int64)&v38, (int*)v31[1], (int*)v31[2]);
					v18 = v39;
				}
				if (v51)
					sub_14018B900(v51, 0);
				goto LABEL_46;
			}
			sub_14001C310(&v38, v26, (int*)((char*)v26 + 2 * v27));
			v18 = v39;
			if (v39 == v40)
				goto LABEL_42;
		LABEL_46:
			if (!v12)
			{
				v32 = sub_14018EFA0(
					&v50,
					(__int64)L"\n%s    %3.3f",
					v18,
					(float)(*(float*)(v16 + *((_QWORD*)a2 + 1) + 8) * 100.0));
				sub_14001C310(&v42, (int*)v32[1], (int*)v32[2]);
				if (v51)
					sub_14018B900(v51, 0);
				if (v15 >= 0x14 && *a2 > 0x14)
				{
					v12 = 1;
					v33 = 0i64;
					do
						v5 = aAdditionalData[++v33] == 0;
					while (!v5);
					sub_14001C310(&v42, (int*)L"\n...Additional data omitted from chat log.", (int*)&aAdditionalData[v33]);
				}
			}
			v34 = sub_14018EFA0(
				&v50,
				(__int64)L"\r\n%d,%d,\"%s\",%g",
				*(unsigned int*)(v16 + *((_QWORD*)a2 + 1)),
				*(unsigned int*)(v16 + *((_QWORD*)a2 + 1) + 4),
				v18,
				*(float*)(v16 + *((_QWORD*)a2 + 1) + 8));
			sub_14001C310(&v46, (int*)v34[1], (int*)v34[2]);
			if (v51)
				sub_14018B900(v51, 0);
			if (v18)
				sub_14018B900((__int64)v18, 0);
			++v15;
			v16 += 12i64;
			if (v15 >= *a2)
			{
				v8 = v47;
				break;
			}
		}
	}
	v35 = 0i64;
	do
		v5 = aDetailsCopiedT_0[++v35] == 0;
	while (!v5);
	sub_14001C310(&v42, (int*)L"\n---------------------\ndetails copied to clipboard.", (int*)&aDetailsCopiedT_0[v35]);
	v36 = v43;
	sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, v43, 0, 0i64);
	sub_14063AD00(v8);
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v36)
		sub_14018B900((__int64)v36, 0);
	return 0i64;
}
// 1405FECE1: variable 'v24' is possibly undefined
// 1405FED23: variable 'v29' is possibly undefined
// 140A690C8: using guessed type wchar_t *off_140A690C8[2];
// 140B24148: using guessed type wchar_t asc_140B24148[27];
// 140B241F8: using guessed type wchar_t aDDSG[16];
// 140B24218: using guessed type wchar_t aItemnameProbab[25];
// 140B247B0: using guessed type wchar_t aDetailsCopiedT_0[52];
// 140B24818: using guessed type wchar_t aS33f[13];
// 140B24838: using guessed type wchar_t aTypeDIdD[16];
// 140B24870: using guessed type wchar_t aAdditionalData[43];
// 140B24910: using guessed type wchar_t aLootitemtypeRe[51];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64170: using guessed type int dword_140C64170;
// 140C652D0: using guessed type __int64 qword_140C652D0;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 1405FEA40: using guessed type int var_228[37];
// 1405FEA40: using guessed type int var_194[85];

