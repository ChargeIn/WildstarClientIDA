//----- (0000000140483D20) ----------------------------------------------------
__int64 __fastcall sub_140483D20(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	_QWORD* v4; // rdi
	_QWORD* v5; // r14
	__int64 v6; // rcx
	__int16* v7; // rax
	__int64 v8; // rcx
	char v9; // si
	int v10; // eax
	__int16* v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	__int16* v14; // rax
	__int64 v15; // rcx
	int v16; // eax
	__int16* v17; // rax
	int v18; // ecx
	unsigned __int64 v19; // r9
	unsigned int v20; // r8d
	__int64* v21; // rcx
	unsigned __int64 v22; // rdx
	_DWORD* v23; // rax
	int* v24; // rbp
	int* v25; // rax
	__int64* v26; // r13
	int* v27; // r15
	int* v28; // r14
	unsigned __int64 i; // r12
	unsigned __int64 j; // rbp
	unsigned __int64 k; // rbp
	unsigned int v32; // ecx
	unsigned int v33; // ecx
	unsigned int v34; // ecx
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rbp
	unsigned __int64 v38; // rcx
	_WORD* v39; // rax
	unsigned int v40; // ecx
	__int64 v41; // r8
	int v42; // ecx
	unsigned int v43; // ecx
	unsigned int v44; // ecx
	unsigned int v45; // ecx
	unsigned int v46; // ecx
	unsigned int v47; // ecx
	unsigned int v49; // ecx
	unsigned int v50; // edx
	__int64 v51; // rax
	__int64 v52; // r8
	__int64 v53; // rcx
	unsigned int v54; // edx
	__int64 v55; // rax
	__int64 v56; // r8
	__int64 v57; // rcx
	__int64 v58; // rax
	int* v59; // rax
	__int64 v60; // rax
	char v61; // al
	unsigned int v62; // ecx
	__int64 v65; // [rsp+68h] [rbp+10h]
	__int64 v66; // [rsp+68h] [rbp+10h]
	unsigned int v67; // [rsp+70h] [rbp+18h] BYREF

	v4 = a2;
	v5 = (_QWORD*)a1;
	sub_140485490(a1, a2, *a3);
	*((_DWORD*)v4 + 71) = a3[111];
	*((_DWORD*)v4 + 70) = a3[110];
	*((_DWORD*)v4 + 69) = a3[109];
	*((_DWORD*)v4 + 72) = a3[112];
	*((_DWORD*)v4 + 58) = a3[133];
	*((_DWORD*)v4 + 73) = a3[150];
	*((_DWORD*)v4 + 56) = a3[148];
	v7 = sub_14034BDD0(v6, a3[134]);
	v9 = 0;
	if (v7 && *v7)
		v10 = a3[134];
	else
		v10 = 0;
	*((_DWORD*)v4 + 57) = v10;
	v11 = sub_14034BDD0(v8, a3[145]);
	if (v11 && *v11)
		v13 = a3[145];
	else
		v13 = 0;
	*((_DWORD*)v4 + 59) = v13;
	v14 = sub_14034BDD0(v12, a3[147]);
	if (v14 && *v14)
		v16 = a3[147];
	else
		v16 = 0;
	*((_DWORD*)v4 + 61) = v16;
	*((_DWORD*)v4 + 60) = a3[146];
	v17 = sub_14034BDD0(v15, a3[26]);
	v4[39] = v17;
	v18 = a3[27];
	*((_DWORD*)v4 + 80) = v18;
	if (v17 && *v17 || v18)
	{
		v19 = v5[2];
		v20 = *a3;
		v21 = v5 + 1;
		v67 = *a3;
		v22 = 0i64;
		if (v19)
		{
			v23 = (_DWORD*)*v21;
			while (*v23 != v20)
			{
				++v22;
				++v23;
				if (v22 >= v19)
					goto LABEL_20;
			}
		}
		else
		{
		LABEL_20:
			sub_140003460(v21, (int*)&v67);
		}
	}
	v24 = a3 + 135;
	if (a3[135] || a3[113] || a3[123])
	{
		v25 = sub_14018B280(48i64, 0);
		v26 = (__int64*)v25;
		if (v25)
		{
			*((_QWORD*)v25 + 1) = 0i64;
			*(_QWORD*)v25 = 0i64;
			*((_QWORD*)v25 + 3) = 0i64;
			*((_QWORD*)v25 + 2) = 0i64;
			v27 = a3 + 113;
			*((_QWORD*)v25 + 5) = 0i64;
			*((_QWORD*)v25 + 4) = 0i64;
			v28 = a3 + 123;
			for (i = 0i64; i < 0xA; ++i)
			{
				if (!*v24)
					break;
				sub_140003460(v26, v24++);
			}
			for (j = 0i64; j < 0xA; ++j)
			{
				if (!*v27)
					break;
				sub_140003460(v26 + 2, v27++);
			}
			v4 = a2;
			for (k = 0i64; k < 0xA; ++k)
			{
				if (!*v28)
					break;
				sub_140003460(v26 + 4, v28++);
			}
			v5 = (_QWORD*)a1;
		}
		else
		{
			v26 = 0i64;
		}
		v4[37] = v26;
	}
	v32 = a3[149];
	if (v32 && sub_140201FE0(v32))
		*((_DWORD*)v4 + 54) = a3[149];
	v33 = a3[154];
	if (v33 && sub_1401F7E60(v33))
		*((_DWORD*)v4 + 55) = a3[154];
	v34 = a3[105];
	if (v34)
	{
		v35 = sub_1401F82A0(v34);
		v37 = v35;
		if (v35)
		{
			v4[31] = sub_14034BDD0(v36, *(_DWORD*)(v35 + 4));
			*((_DWORD*)v4 + 66) = *(_DWORD*)(v37 + 8);
			v38 = *(_QWORD*)(v37 + 16);
			if (v38)
				v39 = v38 <= qword_140C3FE70 ? (_WORD*)(v38 + qword_140C3FE68) : 0i64;
			else
				v39 = 0i64;
			v4[32] = v39;
			if (v39)
			{
				if (!*v39)
					v39 = 0i64;
				v4[32] = v39;
			}
		}
	}
	v40 = a3[7];
	if (v40)
	{
		v41 = sub_1401F64E0(v40);
		if (v41)
		{
			v42 = a3[7];
			if (v42 >= 1)
			{
				if (v42 < 25)
					v9 = (v42 - 1) % 6;
				else
					v9 = 5;
			}
			*((_BYTE*)v4 + 344) = v9;
			*((_BYTE*)v4 + 345) = *(_BYTE*)(v41 + 20);
		}
	}
	v43 = a3[108];
	if (v43)
	{
		sub_140233B00(v43);
		*((_DWORD*)v4 + 67) = a3[108];
	}
	v44 = a3[107];
	if (v44)
	{
		sub_140233B00(v44);
		*((_DWORD*)v4 + 68) = a3[107];
	}
	v45 = a3[152];
	if (v45 && sub_140200EE0(v45))
		*((_DWORD*)v4 + 77) = a3[152];
	v46 = a3[106];
	if (v46 && sub_14020BD20(v46))
		*((_DWORD*)v4 + 81) = a3[106];
	v47 = a3[155];
	if (v47)
	{
		if (!sub_14021F3C0(v47))
			return 2147500037i64;
		*((_DWORD*)v4 + 82) = a3[155];
	}
	v49 = a3[156];
	if (v49)
	{
		if (!sub_1402092A0(v49))
			return 2147500037i64;
		*((_DWORD*)v4 + 83) = a3[156];
	}
	*((_DWORD*)v4 + 91) = a3[167];
	*((_DWORD*)v4 + 92) = a3[168];
	v50 = a3[11];
	if (v50)
	{
		v51 = v5[11];
		v52 = v51;
		v53 = *(_QWORD*)(v51 + 8);
		while (v53)
		{
			if (*(_DWORD*)(v53 + 32) < v50)
			{
				v53 = *(_QWORD*)(v53 + 24);
			}
			else
			{
				v52 = v53;
				v53 = *(_QWORD*)(v53 + 16);
			}
		}
		if (v52 == v51 || (v65 = v52, v50 < *(_DWORD*)(v52 + 32)))
			v65 = v5[11];
		if (v65 == v51)
			return 2147500037i64;
		*((_DWORD*)v4 + 87) = v50;
	}
	v54 = a3[12];
	if (v54)
	{
		v55 = v5[15];
		v56 = v55;
		v57 = *(_QWORD*)(v55 + 8);
		while (v57)
		{
			if (*(_DWORD*)(v57 + 32) < v54)
			{
				v57 = *(_QWORD*)(v57 + 24);
			}
			else
			{
				v56 = v57;
				v57 = *(_QWORD*)(v57 + 16);
			}
		}
		if (v56 == v55 || (v66 = v56, v54 < *(_DWORD*)(v56 + 32)))
			v66 = v5[15];
		if (v66 == v55)
			return 2147500037i64;
		*((_DWORD*)v4 + 88) = v54;
	}
	v58 = sub_1404835C0((__int64)v5, *(_DWORD*)v4);
	if (v58)
	{
		if (*(_DWORD*)(v58 + 348))
		{
			v59 = sub_140484600((__int64)(v5 + 10), (int*)(v58 + 348));
			v60 = sub_1404846C0((__int64)v59);
			if (v60)
			{
				v61 = *(_BYTE*)(v60 + 184);
				*((_BYTE*)v4 + 347) &= 0xFCu;
				*((_BYTE*)v4 + 346) = v61;
			}
		}
	}
	*((_DWORD*)v4 + 89) = a3[173];
	v62 = a3[153];
	if (v62)
		v4[42] = sub_1401F7A20(v62);
	*((_DWORD*)v4 + 90) = a3[151];
	*((_DWORD*)v4 + 93) = a3[172];
	*((_DWORD*)v4 + 4) = a3[8];
	return 0i64;
}
// 140483DA7: variable 'v6' is possibly undefined
// 140483DCE: variable 'v8' is possibly undefined
// 140483DF3: variable 'v12' is possibly undefined
// 140483E21: variable 'v15' is possibly undefined
// 140483FC9: variable 'v36' is possibly undefined
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

