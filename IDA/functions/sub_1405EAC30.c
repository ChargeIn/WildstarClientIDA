//----- (00000001405EAC30) ----------------------------------------------------
__int64 __fastcall sub_1405EAC30(_QWORD* a1)
{
	int* v1; // r8
	unsigned __int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rdi
	int* v12; // rdx
	__int64 v13; // rcx
	int* v14; // rdi
	unsigned __int16* v15; // rsi
	__int64 v16; // rax
	__int64 v17; // rax
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	__int64 v21; // [rsp+20h] [rbp-108h] BYREF
	unsigned __int16* v22; // [rsp+28h] [rbp-100h]
	unsigned __int16* v23; // [rsp+30h] [rbp-F8h]
	unsigned __int16* v24; // [rsp+38h] [rbp-F0h]
	__int64(__fastcall * *v25)(); // [rsp+40h] [rbp-E8h] BYREF
	char v26[184]; // [rsp+48h] [rbp-E0h] BYREF
	__int128 v27; // [rsp+100h] [rbp-28h]
	int* v28; // [rsp+110h] [rbp-18h]

	v1 = (int*)qword_140C63650;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0i64;
	if (v3)
	{
		v1 = *(int**)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)&v1[2 * v5] + 400i64) != a1)
		{
			v4 = (unsigned int)(v4 + 1);
			v5 = (unsigned int)v4;
			if ((unsigned int)v4 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)&v1[2 * (unsigned int)v4];
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	sub_1400EAF90(v6, v4, v1);
	v7 = (_DWORD*)a1[3];
	if (((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || v7[2])
		&& (v8 = sub_140056AB0(a1, 1u)) != 0
		&& (v9 = *(_QWORD*)(v8 + 8)) != 0
		&& (v10 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v9 + 8), *(_QWORD*)(qword_140C65898 + 120)), (v11 = v10) != 0)
		&& *(_QWORD*)(v10 + 8))
	{
		sub_1400B6F30((__int64)&v25);
		v25 = off_140B69230;
		v28 = 0i64;
		v27 = 0i64;
		v12 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v27 = v12;
		*((_QWORD*)&v27 + 1) = v12;
		v28 = v12 + 4;
		if (v12)
			*(_WORD*)v12 = 0;
		v14 = (int*)sub_14034BDD0(v13, *(_DWORD*)(*(_QWORD*)(v11 + 8) + 32i64));
		v15 = (unsigned __int16*)sub_14018B280(16i64, 0);
		v22 = v15;
		v23 = v15;
		v24 = v15 + 8;
		if (v15)
			*v15 = 0;
		if (v14)
		{
			v16 = 0i64;
			if (*(_WORD*)v14)
			{
				do
					++v16;
				while (*((_WORD*)v14 + v16));
			}
			sub_14001C480((__int64)v26, v14, (int*)((char*)v14 + 2 * v16));
			v17 = sub_1400B7660(&v25);
			if ((__int64*)v17 != &v21)
			{
				sub_14001C480((__int64)&v21, *(int**)(v17 + 8), *(int**)(v17 + 16));
				v15 = v22;
			}
		}
		v18 = (unsigned __int64*)sub_14018F0E0(&v21, v15)[1];
		if (v18)
		{
			v19 = -1i64;
			do
				++v19;
			while (*((_BYTE*)v18 + v19));
			sub_140058710((__int64)a1, v18, v19);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v22)
			sub_14018B900((__int64)v22, 0);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if ((_QWORD)v27)
			sub_14018B900(v27, 0);
		sub_1400B7390(&v25);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 1405EAD6D: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1405EAC30: using guessed type char var_E0[184];

