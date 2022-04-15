//----- (0000000140416130) ----------------------------------------------------
__int64 __fastcall sub_140416130(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
	__int64 v5; // rdi
	unsigned __int16* v7; // rbx
	int* v8; // rax
	__int64 v9; // rax
	int* v11; // rax
	__int64 v12; // rcx
	_QWORD* v13; // r12
	__int16* v14; // rax
	__int64 v15; // rcx
	int* v16; // r14
	int* v17; // rsi
	__int64 v18; // r13
	int* v19; // rax
	int* v20; // rax
	int* v21; // rdx
	__int64 v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	unsigned __int16* v26; // r11
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	unsigned __int16* v30; // r11
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	unsigned __int64 v34; // rcx
	_QWORD* v35; // rax
	__int64 v36; // r10
	__int64 v37; // rdx
	__int64 v38; // rax
	__int64 v39; // rcx
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	unsigned __int16* v43; // r11
	char v44[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v45; // [rsp+28h] [rbp-D8h]
	int* v46; // [rsp+30h] [rbp-D0h]
	__int64 v47; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v48)(); // [rsp+40h] [rbp-C0h] BYREF
	char v49[8]; // [rsp+48h] [rbp-B8h] BYREF
	_WORD* v50; // [rsp+50h] [rbp-B0h]
	_WORD* v51; // [rsp+58h] [rbp-A8h]
	__int128 v52; // [rsp+100h] [rbp+0h]
	int* v53; // [rsp+110h] [rbp+10h]
	__int64(__fastcall * *v54)(); // [rsp+120h] [rbp+20h] BYREF
	char v55[184]; // [rsp+128h] [rbp+28h] BYREF
	__int128 v56; // [rsp+1E0h] [rbp+E0h]
	int* v57; // [rsp+1F0h] [rbp+F0h]

	v5 = sub_140248AC0(a2);
	if (!v5)
		return 2147500037i64;
	sub_1400B6F30((__int64)&v54);
	v7 = 0i64;
	v57 = 0i64;
	v56 = 0i64;
	v54 = off_140B69230;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v56 = v8;
	*((_QWORD*)&v56 + 1) = v8;
	v57 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v9 = 0i64;
	while (asc_140AF7DE4[++v9] != 0)
		;
	sub_14001C480((__int64)v55, (int*)L"$#", (int*)&asc_140AF7DE4[v9]);
	v11 = sub_14018B280(88i64, 0);
	if (v11)
		v13 = sub_1400B6390(v11);
	else
		v13 = 0i64;
	v14 = sub_14034BDD0(v12, *(_DWORD*)(v5 + 20));
	v15 = 0i64;
	v45 = 0i64;
	v46 = 0i64;
	v47 = 0i64;
	v16 = 0i64;
	v17 = (int*)v14;
	if (*v14)
	{
		do
			++v15;
		while (v14[v15]);
	}
	v18 = (2 * v15) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v16 = sub_14018B280(2 * (v18 + 1), 0);
		v45 = v16;
		v46 = v16;
		v47 = (__int64)v16 + 2 * v18 + 2;
	}
	sub_1407DB590(v16, v17, 2 * v18);
	v19 = (int*)((char*)v16 + 2 * v18);
	v46 = v19;
	if (v19)
		*(_WORD*)v19 = 0;
	(*(void(__fastcall**)(_QWORD*, char*))(*v13 + 88i64))(v13, v44);
	if (v45)
		sub_14018B900((__int64)v45, 0);
	(*(void(__fastcall**)(_QWORD*, __int64))(*v13 + 104i64))(v13, 1i64);
	sub_1400B7480((__int64)&v54, v13);
	sub_1400B6F30((__int64)&v48);
	v48 = off_140B69230;
	v53 = 0i64;
	v52 = 0i64;
	v20 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v52 = v20;
	*((_QWORD*)&v52 + 1) = v20;
	v53 = v20 + 4;
	if (v20)
		*(_WORD*)v20 = 0;
	v21 = (int*)sub_14034BDD0((__int64)(v20 + 4), *(_DWORD*)(v5 + 24));
	if (v21)
	{
		v22 = 0i64;
		if (*(_WORD*)v21)
		{
			do
				++v22;
			while (*((_WORD*)v21 + v22));
		}
		sub_14001C480((__int64)v49, v21, (int*)((char*)v21 + 2 * v22));
	}
	else if (v50 != v51)
	{
		*v50 = 0;
		v51 = v50;
	}
	sub_1400B7660(&v54);
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
	v25 = *(_QWORD*)(v24 + 16);
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a4 + 16), v25, L"strName", v26);
	*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
	sub_1400B7660(&v48);
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
	v29 = *(_QWORD*)(v28 + 16);
	*(_QWORD*)v29 = *v27;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v28 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a4 + 16), v29, L"strFlavor", v30);
	*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
	v33 = *(_QWORD*)(v32 + 16);
	*(_QWORD*)v33 = *v31;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(v32 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a4 + 16), v33, L"nCount", a3);
	*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
	v34 = *(_QWORD*)(v5 + 8);
	if (v34 && v34 <= qword_140C3FE70)
		v7 = (unsigned __int16*)(v34 + qword_140C3FE68);
	v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
	v37 = *(_QWORD*)(v36 + 16);
	*(_QWORD*)v37 = *v35;
	*(_DWORD*)(v37 + 8) = *((_DWORD*)v35 + 2);
	*(_QWORD*)(v36 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a4 + 16), v37, L"strIcon", v7);
	*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
	v38 = sub_14020A3A0(*(_DWORD*)(v5 + 16));
	if (v38)
	{
		sub_14034BDD0(v39, *(_DWORD*)(v38 + 4));
		v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64) + 160i64), *(_DWORD*)(a4 + 8));
		v42 = *(_QWORD*)(v41 + 16);
		*(_QWORD*)v42 = *v40;
		*(_DWORD*)(v42 + 8) = *((_DWORD*)v40 + 2);
		*(_QWORD*)(v41 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a4 + 16), v42, L"eType", v43);
		*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
	}
	if ((_QWORD)v52)
		sub_14018B900(v52, 0);
	sub_1400B7390(&v48);
	if ((_QWORD)v56)
		sub_14018B900(v56, 0);
	sub_1400B7390(&v54);
	return 0i64;
}
// 14041623A: variable 'v12' is possibly undefined
// 1404163EC: variable 'v24' is possibly undefined
// 14041640F: variable 'v26' is possibly undefined
// 140416443: variable 'v28' is possibly undefined
// 140416466: variable 'v30' is possibly undefined
// 14041648C: variable 'v32' is possibly undefined
// 1404164F5: variable 'v36' is possibly undefined
// 14041653E: variable 'v39' is possibly undefined
// 14041655E: variable 'v41' is possibly undefined
// 140416581: variable 'v43' is possibly undefined
// 140AF7DE4: using guessed type wchar_t asc_140AF7DE4[3];
// 140AF9F58: using guessed type wchar_t aStricon[8];
// 140AF9F68: using guessed type wchar_t aNcount_5[7];
// 140AF9F78: using guessed type wchar_t aStrflavor[10];
// 140AF9F90: using guessed type wchar_t aStrname_11[8];
// 140AF9FE0: using guessed type wchar_t aEtype[6];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140416130: using guessed type char var_108[184];
// 140416130: using guessed type char var_210[8];
// 140416130: using guessed type char var_1E8[8];

