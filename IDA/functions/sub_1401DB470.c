#include "../winhttp.h"

//----- (00000001401DB470) ----------------------------------------------------
__int64 __fastcall sub_1401DB470(int a1, int a2, int a3, int a4, int a5, _DWORD* a6)
{
	__int64 v6; // rbp
	__int64 v7; // r15
	__int64 v8; // r14
	__int64 v9; // rsi
	unsigned int* v10; // rdx
	unsigned int v11; // r10d
	unsigned int* v12; // r9
	unsigned int* v13; // r8
	_QWORD* v14; // rax
	__int64 v15; // rcx
	unsigned int v16; // eax
	unsigned int* v17; // rdi
	__int64 v18; // rcx
	unsigned int v19; // eax
	unsigned int v20; // ebx
	unsigned int v21; // edi
	__int64 v22; // rax
	unsigned int* v23; // rcx
	__int64 v24; // rax
	unsigned int v25; // edx
	unsigned int v26; // edx
	unsigned int v27; // edx
	unsigned int v28; // eax
	unsigned int v29; // ebx
	unsigned int v30; // edi
	__int64 v31; // rax
	unsigned int* v32; // rcx
	__int64 v33; // rax
	unsigned int v34; // edx
	unsigned int v35; // edx
	unsigned int v36; // edx
	unsigned int v37; // edx
	unsigned int v38; // edx
	unsigned int v39; // edx
	unsigned int v40; // edx
	unsigned int v41; // eax
	unsigned int v42; // ebx
	unsigned int v43; // edi
	__int64 v44; // rax
	unsigned int* v45; // rcx
	__int64 v46; // rax
	unsigned int v47; // edx
	unsigned int v48; // edx
	unsigned int v49; // edx
	unsigned int v50; // edx
	unsigned int v51; // edx
	unsigned int v52; // edx
	unsigned int v53; // edx
	unsigned int v54; // edx
	unsigned int v55; // edx
	unsigned int v56; // edx

	v6 = a4;
	v7 = a3;
	v8 = a2;
	v9 = a1;
	if (dword_140C8A270)
		goto LABEL_107;
	v10 = dword_140D10170;
	v11 = 0;
	v12 = dword_140D64910;
	v13 = dword_140D2ECF0;
	v14 = dword_140DB90B0;
	v15 = 491i64;
	do
	{
		*v14 = 0x9600000096i64;
		v14[1] = 0x9600000096i64;
		v14[2] = 0x9600000096i64;
		v14 += 8;
		*(v14 - 5) = 0x9600000096i64;
		*(v14 - 4) = 0x9600000096i64;
		*(v14 - 3) = 0x9600000096i64;
		*(v14 - 2) = 0x9600000096i64;
		*(v14 - 1) = 0x9600000096i64;
		--v15;
	} while (v15);
	*v14 = 0x9600000096i64;
	v14[1] = 0x9600000096i64;
	v14[2] = 0x9600000096i64;
	v14[3] = 0x9600000096i64;
	do
	{
		*v13 = v11;
		v13[1] = v11;
		v13[2] = v11;
		v13[3] = v11;
		*v10 = v11;
		v13[4] = v11;
		v10[1] = v11;
		v13[5] = v11;
		v10[2] = v11;
		v13[6] = v11;
		v10[3] = v11;
		v16 = v11;
		v17 = v12;
		++v11;
		v18 = 11i64;
		v12 += 11;
		v10 += 4;
		v13 += 7;
		while (v18)
		{
			*v17++ = v16;
			--v18;
		}
	} while (v11 < 0x1EB8);
	if (qword_140C63838)
	{
		v19 = qword_140C63838(off_140A6B9E8, qword_140C63858);
	}
	else
	{
		if (dword_140C6556C)
		{
			v20 = 0;
			goto LABEL_17;
		}
		if ((int)sub_14021A920() < 0)
		{
			v20 = 0;
			goto LABEL_17;
		}
		v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63CB0 + 40i64))(qword_140C63CB0);
	}
	v20 = v19;
LABEL_17:
	v21 = 0;
	if (v20)
	{
		while (!qword_140C63848)
		{
			if (dword_140C6556C)
			{
				v23 = 0i64;
			}
			else
			{
				if ((int)sub_14021A920() >= 0)
				{
					v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63CB0 + 32i64))(qword_140C63CB0, v21);
					goto LABEL_25;
				}
				v23 = 0i64;
			}
		LABEL_26:
			v24 = v23[1];
			if ((unsigned int)v24 < 0x1EB8)
			{
				v25 = v23[2];
				if (v25)
					dword_140D10170[4 * v24 + 1] = v25;
				v26 = v23[3];
				if (v26)
					dword_140D10170[4 * v23[1] + 2] = v26;
				v27 = v23[4];
				if (v27)
					dword_140D10170[4 * v23[1] + 3] = v27;
			}
			if (++v21 >= v20)
				goto LABEL_34;
		}
		v22 = qword_140C63848(off_140A6B9E8, v21, qword_140C63858);
	LABEL_25:
		v23 = (unsigned int*)v22;
		goto LABEL_26;
	}
LABEL_34:
	if (qword_140C63838)
	{
		v28 = qword_140C63838(off_140A6BA20, qword_140C63858);
	}
	else
	{
		if (dword_140C640B0)
		{
			v29 = 0;
			goto LABEL_42;
		}
		if ((int)sub_14021AD60() < 0)
		{
			v29 = 0;
			goto LABEL_42;
		}
		v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EE8 + 40i64))(qword_140C63EE8);
	}
	v29 = v28;
LABEL_42:
	v30 = 0;
	if (v29)
	{
		while (!qword_140C63848)
		{
			if (dword_140C640B0)
			{
				v32 = 0i64;
			}
			else
			{
				if ((int)sub_14021AD60() >= 0)
				{
					v31 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EE8 + 32i64))(qword_140C63EE8, v30);
					goto LABEL_50;
				}
				v32 = 0i64;
			}
		LABEL_51:
			v33 = v32[1];
			if ((unsigned int)v33 < 0x1EB8)
			{
				v34 = v32[2];
				if (v34)
					dword_140D2ECF0[7 * v33 + 1] = v34;
				v35 = v32[3];
				if (v35)
					dword_140D2ECF0[7 * v32[1]] = v35;
				v36 = v32[4];
				if (v36)
					dword_140D2ECF0[7 * v32[1] + 2] = v36;
				v37 = v32[5];
				if (v37)
					dword_140D2ECF0[7 * v32[1] + 3] = v37;
				v38 = v32[6];
				if (v38)
					dword_140D2ECF0[7 * v32[1] + 4] = v38;
				v39 = v32[7];
				if (v39)
					dword_140D2ECF0[7 * v32[1] + 5] = v39;
				v40 = v32[8];
				if (v40)
					dword_140D2ECF0[7 * v32[1] + 6] = v40;
			}
			if (++v30 >= v29)
				goto LABEL_67;
		}
		v31 = qword_140C63848(off_140A6BA20, v30, qword_140C63858);
	LABEL_50:
		v32 = (unsigned int*)v31;
		goto LABEL_51;
	}
LABEL_67:
	if (qword_140C63838)
	{
		v41 = qword_140C63838(off_140A6BA58, qword_140C63858);
	LABEL_74:
		v42 = v41;
		goto LABEL_75;
	}
	if (dword_140C648A0)
	{
		v42 = 0;
	}
	else
	{
		if ((int)sub_14021B1A0() >= 0)
		{
			v41 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C653B0 + 40i64))(qword_140C653B0);
			goto LABEL_74;
		}
		v42 = 0;
	}
LABEL_75:
	v43 = 0;
	if (v42)
	{
		while (!qword_140C63848)
		{
			if (dword_140C648A0)
			{
				v45 = 0i64;
			}
			else
			{
				if ((int)sub_14021B1A0() >= 0)
				{
					v44 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653B0 + 32i64))(qword_140C653B0, v43);
					goto LABEL_83;
				}
				v45 = 0i64;
			}
		LABEL_84:
			v46 = v45[1];
			if ((unsigned int)v46 < 0x1EB8)
			{
				v47 = v45[2];
				if (v47)
					dword_140D64910[11 * v46 + 1] = v47;
				v48 = v45[3];
				if (v48)
					dword_140D64910[11 * v45[1] + 2] = v48;
				v49 = v45[4];
				if (v49)
					dword_140D64910[11 * v45[1] + 3] = v49;
				v50 = v45[5];
				if (v50)
					dword_140D64910[11 * v45[1] + 4] = v50;
				v51 = v45[6];
				if (v51)
					dword_140D64910[11 * v45[1] + 5] = v51;
				v52 = v45[7];
				if (v52)
					dword_140D64910[11 * v45[1] + 6] = v52;
				v53 = v45[8];
				if (v53)
					dword_140D64910[11 * v45[1] + 7] = v53;
				v54 = v45[9];
				if (v54)
					dword_140D64910[11 * v45[1] + 8] = v54;
				v55 = v45[10];
				if (v55)
					dword_140D64910[11 * v45[1] + 9] = v55;
				v56 = v45[11];
				if (v56)
					dword_140D64910[11 * v45[1] + 10] = v56;
			}
			if (++v43 >= v42)
				goto LABEL_106;
		}
		v44 = qword_140C63848(off_140A6BA58, v43, qword_140C63858);
	LABEL_83:
		v45 = (unsigned int*)v44;
		goto LABEL_84;
	}
LABEL_106:
	dword_140DBA7B4 = 5665;
	dword_140DBE934 = 5665;
	dword_140DBA7B0 = 5666;
	dword_140DBE938 = 5666;
	dword_140DBA7BC = 5667;
	dword_140DBE93C = 5667;
	dword_140DBA7B8 = 5668;
	dword_140DBE940 = 5668;
	dword_140DB9324 = 6644;
	dword_140DBF880 = 6644;
	dword_140DB9D88 = 822;
	dword_140DB9D7C = 819;
	dword_140DB9D84 = 821;
	dword_140DB9A38 = 610;
	dword_140DB9A30 = 608;
	dword_140DB9A34 = 609;
	dword_140C8A270 = 1;
LABEL_107:
	if ((int)v9 < 7864 && (int)v7 < 7)
		LODWORD(v9) = dword_140D2ECF0[7 * v9 + v7];
	if (a5)
		LODWORD(v9) = dword_140DB90B0[(int)v9];
	if ((int)v9 < 7864 && (int)v8 < 4)
		LODWORD(v9) = dword_140D10170[4 * (int)v9 + v8];
	if (a6)
		*a6 = v9;
	if ((int)v9 >= 7864 || (int)v6 >= 11)
		return (unsigned int)v9;
	else
		return dword_140D64910[11 * (int)v9 + v6];
}
// 140A6B9E8: using guessed type wchar_t *off_140A6B9E8[2];
// 140A6BA20: using guessed type wchar_t *off_140A6BA20[2];
// 140A6BA58: using guessed type wchar_t *off_140A6BA58[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CB0: using guessed type __int64 qword_140C63CB0;
// 140C63EE8: using guessed type __int64 qword_140C63EE8;
// 140C640B0: using guessed type int dword_140C640B0;
// 140C648A0: using guessed type int dword_140C648A0;
// 140C653B0: using guessed type __int64 qword_140C653B0;
// 140C6556C: using guessed type int dword_140C6556C;
// 140C8A270: using guessed type int dword_140C8A270;
// 140D10170: using guessed type _DWORD dword_140D10170[31456];
// 140D2ECF0: using guessed type _DWORD dword_140D2ECF0[55048];
// 140D64910: using guessed type unsigned int dword_140D64910[86504];
// 140DB90B0: using guessed type _DWORD dword_140DB90B0[157];
// 140DB9324: using guessed type int dword_140DB9324;
// 140DB9A30: using guessed type int dword_140DB9A30;
// 140DB9A34: using guessed type int dword_140DB9A34;
// 140DB9A38: using guessed type int dword_140DB9A38;
// 140DB9D7C: using guessed type int dword_140DB9D7C;
// 140DB9D84: using guessed type int dword_140DB9D84;
// 140DB9D88: using guessed type int dword_140DB9D88;
// 140DBA7B0: using guessed type int dword_140DBA7B0;
// 140DBA7B4: using guessed type int dword_140DBA7B4;
// 140DBA7B8: using guessed type int dword_140DBA7B8;
// 140DBA7BC: using guessed type int dword_140DBA7BC;
// 140DBE934: using guessed type int dword_140DBE934;
// 140DBE938: using guessed type int dword_140DBE938;
// 140DBE93C: using guessed type int dword_140DBE93C;
// 140DBE940: using guessed type int dword_140DBE940;
// 140DBF880: using guessed type int dword_140DBF880;

