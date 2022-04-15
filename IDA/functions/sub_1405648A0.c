#include "../winhttp.h"

//----- (00000001405648A0) ----------------------------------------------------
_QWORD* __fastcall sub_1405648A0(__int64 a1, _QWORD* a2, signed int a3, int a4, unsigned int a5)
{
	__int64 v7; // rdi
	int* v9; // rax
	int* v10; // rax
	_QWORD* v11; // r15
	__int64 v12; // rax
	int* v13; // r14
	__int64 v14; // r12
	int* v15; // rax
	int v16; // r14d
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rax
	unsigned int v21; // r8d
	unsigned int v22; // ecx
	__int64 v23; // rax
	int* v24; // rax
	_QWORD* v25; // r12
	__int64 v26; // rax
	int* v27; // r15
	__int64 v28; // r13
	int* v29; // rax
	int* v30; // rdx
	__int64 v31; // rax
	__int64 v32; // rax
	char v33[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v34; // [rsp+28h] [rbp-D8h]
	int* v35; // [rsp+30h] [rbp-D0h]
	__int64 v36; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v37)(); // [rsp+40h] [rbp-C0h] BYREF
	char v38[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v39; // [rsp+50h] [rbp-B0h]
	_WORD* v40; // [rsp+58h] [rbp-A8h]
	__int128 v41; // [rsp+100h] [rbp+0h]
	int* v42; // [rsp+110h] [rbp+10h]
	__int64 v43; // [rsp+160h] [rbp+60h]

	if (a3 >= 332)
	{
		v7 = 0i64;
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (MEMORY[0])
		{
			do
				++v7;
			while (*(_WORD*)(2 * v7));
		}
	LABEL_4:
		sub_14001C1B0(a2, 0i64, 2 * v7);
		return a2;
	}
	v43 = sub_140237240(a3);
	if (!v43)
	{
		v7 = 0i64;
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (MEMORY[0])
		{
			do
				++v7;
			while (*(_WORD*)(2 * v7));
		}
		goto LABEL_4;
	}
	sub_1400B6F30((__int64)&v37);
	v41 = 0i64;
	v37 = off_140B69230;
	v42 = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v41 = v9;
	*((_QWORD*)&v41 + 1) = v9;
	v42 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		v10 = sub_14018B280(96i64, 0);
		if (v10)
			v11 = (_QWORD*)sub_1404DB7E0((__int64)v10, *(_QWORD*)(qword_140C65898 + 25744));
		else
			v11 = 0i64;
		v12 = 0i64;
		v13 = 0i64;
		v34 = 0i64;
		v35 = 0i64;
		v36 = 0i64;
		do
			++v12;
		while (word_140B0A7C8[v12]);
		v14 = (2 * v12) >> 1;
		if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v13 = sub_14018B280(2 * (v14 + 1), 0);
			v34 = v13;
			v35 = v13;
			v36 = (__int64)v13 + 2 * v14 + 2;
		}
		sub_1407DB590(v13, (int*)word_140B0A7C8, 2 * v14);
		v15 = (int*)((char*)v13 + 2 * v14);
		v35 = v15;
		if (v15)
			*(_WORD*)v15 = 0;
		sub_1400B7480((__int64)&v37, v11);
		(*(void(__fastcall**)(_QWORD*, char*))(*v11 + 72i64))(v11, v33);
		if (v34)
			sub_14018B900((__int64)v34, 0);
	}
	v16 = *(_DWORD*)(v43 + 20);
	v17 = sub_1403D90D0(qword_140C65898, a4);
	v19 = v17;
	if (v17)
	{
		v20 = sub_1403ACD90(qword_140C65B70, a5, v17);
		v21 = *(_DWORD*)(v19 + 220);
		switch (a3)
		{
		case 50:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 132);
			goto LABEL_52;
		case 51:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 136);
			goto LABEL_52;
		case 52:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 140);
			goto LABEL_52;
		case 53:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 144);
			goto LABEL_52;
		case 54:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 148);
			goto LABEL_52;
		case 55:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 152);
			goto LABEL_52;
		case 56:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 156);
			goto LABEL_52;
		case 151:
			if (!v20)
				goto LABEL_52;
			v22 = *(_DWORD*)(*(_QWORD*)(v20 + 112) + 360i64);
			break;
		case 177:
			if (v21)
				v16 = *(_DWORD*)(sub_1401F31E0(v21) + 160);
			goto LABEL_52;
		case 281:
			if (!v20)
				goto LABEL_52;
			v22 = *(_DWORD*)(*(_QWORD*)(v20 + 112) + 364i64);
			break;
		case 282:
			if (!v20)
				goto LABEL_52;
			v22 = *(_DWORD*)(*(_QWORD*)(v20 + 112) + 368i64);
			break;
		case 283:
			if (!v20)
				goto LABEL_52;
			v22 = *(_DWORD*)(*(_QWORD*)(v20 + 112) + 372i64);
			break;
		default:
			goto LABEL_52;
		}
		if (!v22)
			goto LABEL_53;
		v23 = sub_1402259C0(v22);
		if (!v23)
			goto LABEL_53;
		v16 = *(_DWORD*)(v23 + 56);
	LABEL_52:
		if (!v16)
			LABEL_53 :
			v16 = *(_DWORD*)(v43 + 20);
		v24 = sub_14018B280(96i64, 0);
		if (v24)
			v25 = (_QWORD*)sub_1404DB7E0((__int64)v24, v19);
		else
			v25 = 0i64;
		v26 = 0i64;
		v27 = 0i64;
		v34 = 0i64;
		v35 = 0i64;
		v36 = 0i64;
		do
			++v26;
		while (word_140B0A7D8[v26]);
		v28 = (2 * v26) >> 1;
		if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v27 = sub_14018B280(2 * (v28 + 1), 0);
			v34 = v27;
			v35 = v27;
			v36 = (__int64)v27 + 2 * v28 + 2;
		}
		sub_1407DB590(v27, (int*)word_140B0A7D8, 2 * v28);
		v29 = (int*)((char*)v27 + 2 * v28);
		v35 = v29;
		if (v29)
			*(_WORD*)v29 = 0;
		sub_1400B7480((__int64)&v37, v25);
		(*(void(__fastcall**)(_QWORD*, char*))(*v25 + 72i64))(v25, v33);
		v18 = (__int64)v34;
		if (v34)
			sub_14018B900((__int64)v34, 0);
	}
	v30 = (int*)sub_14034BDD0(v18, v16);
	if (v30)
	{
		v31 = 0i64;
		if (*(_WORD*)v30)
		{
			do
				++v31;
			while (*((_WORD*)v30 + v31));
		}
		sub_14001C480((__int64)v38, v30, (int*)((char*)v30 + 2 * v31));
	}
	else if (v39 != v40)
	{
		*v39 = 0;
		v40 = v39;
	}
	v32 = sub_1400B7660(&v37);
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	sub_14001C1B0(a2, *(int**)(v32 + 8), *(_QWORD*)(v32 + 16));
	if ((_QWORD)v41)
		sub_14018B900(v41, 0);
	sub_1400B7390(&v37);
	return a2;
}
// 140564D5C: variable 'v18' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1405648A0: using guessed type char var_130[8];
// 1405648A0: using guessed type char var_108[8];

