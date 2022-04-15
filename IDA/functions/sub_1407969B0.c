//----- (00000001407969B0) ----------------------------------------------------
__int64 __fastcall sub_1407969B0(__int64 a1)
{
	void* v2; // r14
	unsigned __int64* i; // rbp
	__int64 v4; // rdi
	unsigned __int64 v5; // r15
	unsigned __int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // rax
	_DWORD* v10; // rax
	__int64* v11; // r13
	_DWORD* v12; // rdi
	unsigned __int64 v13; // r8
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 v16; // rax
	int v17; // ecx
	unsigned __int64 v18; // r8
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // r9
	_DWORD* v22; // rax
	__int64 v23; // rdi
	__int64 v24; // rax
	int v25; // r12d
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rcx
	_QWORD* v29; // rax
	const char* v30; // r9
	unsigned __int64 v31; // rsi
	__int64 v32; // rdi
	__int64 v33; // rax
	_DWORD* v34; // rcx
	__int64 v35; // rax
	__int64* v36; // rdi
	__int64 v37; // rax
	__int64* v38; // rax
	unsigned __int64 v39; // r8
	__int64 v40; // rax
	unsigned int* v41; // r9
	unsigned __int64 v42; // rsi
	__int64 v43; // rdi
	__int64 v44; // rax
	unsigned __int64 v45; // rcx
	__int64* v46; // rdi
	unsigned __int64 v47; // r8
	__int64 v48; // rax
	unsigned int* v49; // r9
	_DWORD* v50; // rdi
	unsigned __int64 v51; // r8
	__int64 v52; // rax
	__int64 v53; // r9
	_DWORD* v54; // rax
	int v55; // ecx
	__int64 v56; // rcx
	__int64 v57; // rax
	__int64* v58; // rax
	__int64 v59; // rax
	unsigned int* v60; // r9
	__int64 v62; // [rsp+20h] [rbp-38h] BYREF
	int v63; // [rsp+28h] [rbp-30h]

	v2 = 0i64;
	for (i = (unsigned __int64*)sub_140056BB0((_QWORD*)a1, 1u, 0i64);
		*(_QWORD*)(a1 + 16) < (unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64);
		*(_QWORD*)(a1 + 16) += 16i64)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v4 = *(_QWORD*)(a1 + 32);
	v5 = -1i64;
	v6 = -1i64;
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 24) + 16i64;
	do
		++v6;
	while (aLoaded_2[v6]);
	v7 = sub_140062650(a1, (unsigned __int64*)aLoaded_2, v6);
	v8 = *(_QWORD*)(a1 + 16);
	v62 = v7;
	v63 = 4;
	sub_14005E8E0(a1, v4 + 160, (int*)&v62, v8);
	v9 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = (_DWORD*)(v9 + 16);
	v11 = (__int64*)dword_140A12138;
	v12 = dword_140A12138;
	v13 = -1i64;
	if ((unsigned __int64)v10 < *(_QWORD*)(a1 + 16))
		v12 = v10;
	do
		++v13;
	while (*((_BYTE*)i + v13));
	v14 = sub_140062650(a1, i, v13);
	v15 = *(_QWORD*)(a1 + 16);
	v62 = v14;
	v63 = 4;
	sub_14005E8E0(a1, (__int64)v12, (int*)&v62, v15);
	*(_QWORD*)(a1 + 16) += 16i64;
	v16 = *(_QWORD*)(a1 + 16);
	v17 = *(_DWORD*)(v16 - 8);
	if (v17 && (v17 != 1 || *(_DWORD*)(v16 - 16)))
	{
		if (v17 == 2)
		{
			v2 = *(void**)(v16 - 16);
		}
		else if (v17 == 7)
		{
			v2 = (void*)(*(_QWORD*)(v16 - 16) + 48i64);
		}
		if (v2 == &unk_1409FA1FC)
			sub_140056830((_QWORD*)a1, (unsigned __int64*)"loop or previous error loading module '%s'", (const char*)i);
		return 1i64;
	}
	v18 = -1i64;
	v19 = *(_QWORD*)(**(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64) + 24i64);
	*(_DWORD*)(a1 + 144) = 5;
	*(_QWORD*)(a1 + 136) = v19;
	do
		++v18;
	while (aLoaders[v18]);
	v20 = sub_140062650(a1, (unsigned __int64*)aLoaders, v18);
	v21 = *(_QWORD*)(a1 + 16);
	v62 = v20;
	v63 = 4;
	sub_14005E8E0(a1, a1 + 136, (int*)&v62, v21);
	*(_QWORD*)(a1 + 16) += 16i64;
	v22 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (v22 == dword_140A12138 || v22[2] != 5)
		sub_140056830((_QWORD*)a1, (unsigned __int64*)aPackageLoaders);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v23 = *(_QWORD*)(a1 + 16);
	v24 = sub_140062650(a1, (unsigned __int64*)&unk_140C665F2, 0i64);
	*(_DWORD*)(v23 + 8) = 4;
	v25 = 1;
	*(_QWORD*)v23 = v24;
	*(_QWORD*)(a1 + 16) += 16i64;
	while (1)
	{
		while (1)
		{
			v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 16) - 32i64), v25);
			*(_QWORD*)v27 = *v26;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v28 = *(_QWORD*)(a1 + 16);
			if ((_DWORD*)(v28 - 16) != dword_140A12138 && !*(_DWORD*)(v28 - 16 + 8))
			{
				v29 = (_QWORD*)(v28 - 32);
				if (*(_DWORD*)(v28 - 24) != 4)
				{
					if (!(unsigned int)sub_14005E620(a1, v28 - 32))
					{
						v30 = 0i64;
						goto LABEL_34;
					}
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v29 = (_QWORD*)(*(_QWORD*)(a1 + 16) - 32i64);
				}
				v30 = (const char*)(*v29 + 32i64);
			LABEL_34:
				sub_140056830((_QWORD*)a1, (unsigned __int64*)"module '%s' not found:%s", (const char*)i, v30);
			}
			if (i)
			{
				v31 = -1i64;
				do
					++v31;
				while (*((_BYTE*)i + v31));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v32 = *(_QWORD*)(a1 + 16);
				v33 = sub_140062650(a1, i, v31);
				*(_DWORD*)(v32 + 8) = 4;
				*(_QWORD*)v32 = v33;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			}
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 32i64), 1);
			v34 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
			if (v34 != dword_140A12138)
				break;
		LABEL_49:
			*(_QWORD*)(a1 + 16) = v34;
			++v25;
		}
		if (v34[2] == 6)
			break;
		if (v34 == dword_140A12138 || (unsigned int)(v34[2] - 3) > 1)
			goto LABEL_49;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		sub_14005F210(a1, 2, ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4) - 1);
		*(_QWORD*)(a1 + 16) -= 16i64;
		++v25;
	}
	v35 = *(_QWORD*)(a1 + 16);
	v36 = (__int64*)dword_140A12138;
	*(_QWORD*)v35 = &unk_1409FA1FC;
	*(_DWORD*)(v35 + 8) = 2;
	v37 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 16) += 16i64;
	v38 = (__int64*)(v37 + 16);
	v39 = -1i64;
	if ((unsigned __int64)v38 < *(_QWORD*)(a1 + 16))
		v36 = v38;
	do
		++v39;
	while (*((_BYTE*)i + v39));
	v40 = sub_140062650(a1, i, v39);
	v41 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v62 = v40;
	v63 = 4;
	sub_14005EA50(a1, v36, (int*)&v62, v41);
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (i)
	{
		v42 = -1i64;
		do
			++v42;
		while (*((_BYTE*)i + v42));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v43 = *(_QWORD*)(a1 + 16);
		v44 = sub_140062650(a1, i, v42);
		*(_DWORD*)(v43 + 8) = 4;
		*(_QWORD*)v43 = v44;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 32i64), 1);
	v45 = *(_QWORD*)(a1 + 16);
	if ((_DWORD*)(v45 - 16) == dword_140A12138 || *(_DWORD*)(v45 - 16 + 8))
	{
		v46 = (__int64*)dword_140A12138;
		v47 = -1i64;
		if (*(_QWORD*)(a1 + 24) + 16i64 < v45)
			v46 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
		do
			++v47;
		while (*((_BYTE*)i + v47));
		v48 = sub_140062650(a1, i, v47);
		v49 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
		v62 = v48;
		v63 = 4;
		sub_14005EA50(a1, v46, (int*)&v62, v49);
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	v50 = dword_140A12138;
	v51 = -1i64;
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
		v50 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
	do
		++v51;
	while (*((_BYTE*)i + v51));
	v52 = sub_140062650(a1, i, v51);
	v53 = *(_QWORD*)(a1 + 16);
	v62 = v52;
	v63 = 4;
	sub_14005E8E0(a1, (__int64)v50, (int*)&v62, v53);
	*(_QWORD*)(a1 + 16) += 16i64;
	v54 = *(_DWORD**)(a1 + 16);
	v55 = *(v54 - 2);
	if (v55 == 2)
	{
		v2 = (void*)*((_QWORD*)v54 - 2);
	}
	else if (v55 == 7)
	{
		v2 = (void*)(*((_QWORD*)v54 - 2) + 48i64);
	}
	if (v2 == &unk_1409FA1FC)
	{
		*v54 = 1;
		v54[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		v56 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v56 = *(_QWORD*)(v56 - 16);
		*(_DWORD*)(v56 + 8) = *(_DWORD*)(v56 - 8);
		v57 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 16) += 16i64;
		v58 = (__int64*)(v57 + 16);
		if ((unsigned __int64)v58 < *(_QWORD*)(a1 + 16))
			v11 = v58;
		do
			++v5;
		while (*((_BYTE*)i + v5));
		v59 = sub_140062650(a1, i, v5);
		v60 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
		v62 = v59;
		v63 = 4;
		sub_14005EA50(a1, v11, (int*)&v62, v60);
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	return 1i64;
}
// 140796C13: variable 'v27' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

