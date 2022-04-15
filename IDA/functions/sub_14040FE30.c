#include "../winhttp.h"

//----- (000000014040FE30) ----------------------------------------------------
_QWORD* __fastcall sub_14040FE30(_QWORD* a1, _QWORD* a2)
{
	__int64 v2; // rdi
	int v5; // eax
	_DWORD* v6; // rsi
	__int64 v7; // rax
	int v8; // eax
	int* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // rdx
	__int64 v13; // rax
	int* v14; // rax
	int* v15; // rsi
	__int64 v16; // rax
	int* v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rax
	bool v20; // zf
	int* v21; // rax
	_QWORD* v22; // rax
	int* v23; // rdx
	__int64 v24; // rax
	int* v25; // rsi
	int* v26; // r12
	__int64 v27; // rcx
	__int64 v28; // r14
	__int64 v29; // rax
	int* v30; // r14
	__int64 v31; // r13
	_WORD* v32; // rax
	int* v33; // rax
	__int64 v35; // [rsp+20h] [rbp-E0h] BYREF
	int* v36; // [rsp+28h] [rbp-D8h]
	int* v37; // [rsp+30h] [rbp-D0h]
	int* v38; // [rsp+38h] [rbp-C8h]
	char v39[8]; // [rsp+40h] [rbp-C0h] BYREF
	int* v40; // [rsp+48h] [rbp-B8h]
	_WORD* v41; // [rsp+50h] [rbp-B0h]
	__int64 v42; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v43)(); // [rsp+60h] [rbp-A0h] BYREF
	char v44[8]; // [rsp+68h] [rbp-98h] BYREF
	_WORD* v45; // [rsp+70h] [rbp-90h]
	_WORD* v46; // [rsp+78h] [rbp-88h]
	__int128 v47; // [rsp+120h] [rbp+20h]
	int* v48; // [rsp+130h] [rbp+30h]
	__int64 v49; // [rsp+170h] [rbp+70h] BYREF

	v2 = 0i64;
	if (!*((_DWORD*)a1 + 296) || !a1[1])
		goto LABEL_72;
	if ((dword_140DC2800 & 1) != 0)
	{
		v5 = dword_140DC280C;
	}
	else
	{
		dword_140DC2800 |= 1u;
		v5 = 0;
		dword_140DC280C = 0;
	}
	if (*((_DWORD*)a1 + 296))
		v6 = (_DWORD*)a1[1];
	else
		v6 = 0i64;
	if (v5)
	{
		v8 = dword_140DC2808;
	}
	else
	{
		dword_140DC280C = 1;
		v7 = sub_140200220(0x4BEu);
		if (v7)
		{
			v8 = *(_DWORD*)(v7 + 4);
			dword_140DC2808 = v8;
		}
		else
		{
			v8 = 0;
			dword_140DC2808 = 0;
		}
	}
	if (*v6 == v8)
	{
		sub_1400B6F30((__int64)&v43);
		v43 = off_140B69230;
		v48 = 0i64;
		v47 = 0i64;
		v9 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v47 = v9;
		*((_QWORD*)&v47 + 1) = v9;
		v10 = (__int64)(v9 + 4);
		v48 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		if (*((_DWORD*)a1 + 296))
			v11 = a1[1];
		else
			v11 = 0i64;
		v12 = (int*)sub_14034BDD0(v10, *(_DWORD*)(v11 + 480));
		if (v12)
		{
			v13 = 0i64;
			if (*(_WORD*)v12)
			{
				do
					++v13;
				while (*((_WORD*)v12 + v13));
			}
			sub_14001C480((__int64)v44, v12, (int*)((char*)v12 + 2 * v13));
		}
		else if (v45 != v46)
		{
			*v45 = 0;
			v46 = v45;
		}
		v14 = sub_14018B280(16i64, 0);
		v15 = v14;
		v36 = v14;
		v37 = v14;
		v38 = v14 + 4;
		if (v14)
			*(_WORD*)v14 = 0;
		if (*a1)
		{
			v16 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 48i64))(*a1);
			v17 = (int*)*sub_14034C700(&v49, (__int64)L"%I64u", v16);
			v18 = 0i64;
			if (*(_WORD*)v17)
			{
				do
					++v18;
				while (*((_WORD*)v17 + v18));
			}
			if ((2 * v18) >> 1)
			{
				sub_14001C310(&v35, v17, (int*)((char*)v17 + 2 * v18));
				v15 = v36;
			}
			else
			{
				sub_1407DB590(v15, v17, 0i64);
			}
			if (v49)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
		}
		else
		{
			v19 = 0i64;
			do
				v20 = *((_WORD*)&unk_1409E8A7C + ++v19) == 0;
			while (!v20);
			if ((2 * v19) >> 1)
			{
				sub_14001C310(&v35, (int*)&unk_1409E8A7C, (int*)((char*)&unk_1409E8A7C + 2 * v19));
				v15 = v36;
			}
			else
			{
				sub_1407DB590(v15, (int*)&unk_1409E8A7C, 0i64);
			}
		}
		v21 = sub_14018B280(96i64, 0);
		if (v21)
			v22 = (_QWORD*)sub_1404DDB40((__int64)v21, v15);
		else
			v22 = 0i64;
		sub_1400B7480((__int64)&v43, v22);
		v23 = *(int**)(sub_1400B7660(&v43) + 8);
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (*(_WORD*)v23)
		{
			do
				++v2;
			while (*((_WORD*)v23 + v2));
		}
		sub_14001C1B0(a2, v23, (__int64)v23 + 2 * v2);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if ((_QWORD)v47)
			sub_14018B900(v47, 0);
		sub_1400B7390(&v43);
		return a2;
	}
	v24 = *((_DWORD*)a1 + 296) ? a1[1] : 0i64;
	v25 = (int*)sub_14034BDD0((__int64)a1, *(_DWORD*)(v24 + 480));
	if (v25)
	{
		v36 = 0i64;
		v26 = 0i64;
		v38 = 0i64;
		v27 = 0i64;
		do
			v20 = asc_140AF8B08[++v27] == 0;
		while (!v20);
		v28 = (2 * v27) >> 1;
		if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v26 = sub_14018B280(2 * (v28 + 1), 0);
			v36 = v26;
			v38 = (int*)((char*)v26 + 2 * v28 + 2);
		}
		sub_1407DB590(v26, (int*)L" \r\n", 2 * v28);
		v37 = (int*)((char*)v26 + 2 * v28);
		if (v37)
			*((_WORD*)v26 + v28) = 0;
		v29 = 0i64;
		v30 = 0i64;
		v40 = 0i64;
		v42 = 0i64;
		if (*(_WORD*)v25)
		{
			do
				++v29;
			while (*((_WORD*)v25 + v29));
		}
		v31 = (2 * v29) >> 1;
		if ((unsigned __int64)(v31 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v30 = sub_14018B280(2 * (v31 + 1), 0);
			v40 = v30;
			v42 = (__int64)v30 + 2 * v31 + 2;
		}
		sub_1407DB590(v30, v25, 2 * v31);
		v32 = (_WORD*)v30 + v31;
		v41 = v32;
		if (v32)
			*v32 = 0;
		sub_1400F9A50(a2, (__int64)v39, (__int64)&v35);
		if (v30)
			sub_14018B900((__int64)v30, 0);
		if (v26)
			sub_14018B900((__int64)v26, 0);
	}
	else
	{
	LABEL_72:
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v33 = sub_14018B280(16i64, 0);
		a2[1] = v33;
		a2[2] = v33;
		a2[3] = v33 + 4;
		if (v33)
			*(_WORD*)v33 = 0;
	}
	return a2;
}
// 14041013B: variable 'a1' is possibly undefined
// 140AF8B08: using guessed type wchar_t asc_140AF8B08[4];
// 140AF8C50: using guessed type wchar_t aI64u[6];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140DC2800: using guessed type int dword_140DC2800;
// 140DC2808: using guessed type int dword_140DC2808;
// 140DC280C: using guessed type int dword_140DC280C;
// 14040FE30: using guessed type char var_F8[8];
// 14040FE30: using guessed type char var_120[8];

