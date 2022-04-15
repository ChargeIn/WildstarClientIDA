//----- (0000000140114700) ----------------------------------------------------
int* __fastcall sub_140114700(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v3; // rsi
	int v4; // r8d
	int v5; // edx
	__int64 v6; // rcx
	char* v7; // rax
	unsigned __int64 v8; // rax
	int v9; // edx
	__int64* v10; // rcx
	signed __int64 v11; // r8
	__int64 v12; // rax
	__int64 v13; // rdx
	unsigned __int64 v14; // rbp
	int v15; // eax
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int* v18; // r9
	unsigned __int64* v19; // rbx
	__int64 v20; // rax
	__int64* v21; // r15
	__int64 v22; // r14
	__int64 v23; // rax
	__int64 v24; // r8
	_QWORD* v25; // rax
	__int64 v26; // rcx
	__int64* v27; // rax
	unsigned __int64 v28; // r8
	__int64* v29; // r14
	__int64 v30; // rax
	unsigned int* v31; // r9
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // r9
	__int64 v35; // rdx
	int v36; // ecx
	__int64 v37; // rdx
	int v38; // ecx
	int v39; // ecx
	int v40; // ecx
	int v41; // ecx
	int v43; // eax
	__int64 v44; // [rsp+20h] [rbp-4048h] BYREF
	__int64 v45; // [rsp+28h] [rbp-4040h]
	__int64 v46[2048]; // [rsp+30h] [rbp-4038h] BYREF

	v1 = *(_QWORD**)(a1 + 400);
	sub_1407E4830((int*)v46, 0i64, 0x4000ui64);
	v3 = 0i64;
	v4 = 0;
	v5 = 0;
	v6 = 0i64;
	do
	{
		++v5;
		++v4;
		v46[v6] = (__int64)(&off_140C56A80)[v6];
		v7 = (&off_140C56A80)[v6 + 1];
		v6 += 2i64;
		v46[v6 - 1] = (__int64)v7;
	} while ((unsigned __int64)v5 < 0x97);
	v8 = 16i64 * v4;
	v9 = 0;
	v10 = &v46[v8 / 8];
	v11 = (char*)&(&off_140C57400)[v8 / 0xFFFFFFFFFFFFFFF8ui64] - (char*)v46;
	do
	{
		v12 = *(__int64*)((char*)v10 + v11);
		++v9;
		v10 += 2;
		*(v10 - 2) = v12;
		*(v10 - 1) = *(__int64*)((char*)v10 + v11 - 8);
	} while ((unsigned __int64)v9 < 0x12);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Apollo.EditBox");
	v13 = v1[2];
	switch (*(_DWORD*)(v13 - 8))
	{
	case 2:
		goto LABEL_11;
	case 5:
	case 6:
		goto LABEL_15;
	case 7:
	LABEL_11:
		v15 = *(_DWORD*)(v13 - 8);
		if (v15 != 2)
		{
			if (v15 == 7)
				v14 = *(_QWORD*)(v13 - 16) + 48i64;
			else
				v14 = 0i64;
			goto LABEL_16;
		}
		goto LABEL_15;
	case 8:
	LABEL_15:
		v14 = *(_QWORD*)(v13 - 16);
		goto LABEL_16;
	}
	v14 = 0i64;
LABEL_16:
	*(_QWORD*)v13 = *(_QWORD*)(v13 - 16);
	*(_DWORD*)(v13 + 8) = *(_DWORD*)(v13 - 8);
	v1[2] += 16i64;
	v16 = v1[2];
	v17 = sub_140062650((__int64)v1, (unsigned __int64*)"__index", 7ui64);
	v18 = (unsigned int*)(v1[2] - 16i64);
	v44 = v17;
	LODWORD(v45) = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v16 - 32), (int*)&v44, v18);
	v1[2] -= 16i64;
	v19 = (unsigned __int64*)v46[0];
	v20 = v1[2];
	v21 = v46;
	if (v46[0])
	{
		do
		{
			v22 = v21[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v23 = v1[5];
			if (v23 == v1[10])
				v24 = v1[15];
			else
				v24 = *(_QWORD*)(**(_QWORD**)(v23 + 8) + 24i64);
			v25 = sub_140060AB0((__int64)v1, 0, v24);
			v25[4] = v22;
			v26 = v1[2];
			*(_QWORD*)v26 = v25;
			*(_DWORD*)(v26 + 8) = 6;
			v1[2] += 16i64;
			v27 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v28 = -1i64;
			v29 = v27;
			do
				++v28;
			while (*((_BYTE*)v19 + v28));
			v30 = sub_140062650((__int64)v1, v19, v28);
			v31 = (unsigned int*)(v1[2] - 16i64);
			v44 = v30;
			LODWORD(v45) = 4;
			sub_14005EA50((__int64)v1, v29, (int*)&v44, v31);
			v1[2] -= 16i64;
			v19 = (unsigned __int64*)v21[2];
			v20 = v1[2];
			v21 += 2;
		} while (v19);
	}
	v32 = v1[4];
	v1[2] = v20 - 16;
	v33 = sub_140062650((__int64)v1, (unsigned __int64*)"Apollo.Window", 0xDui64);
	v34 = v1[2];
	v44 = v33;
	LODWORD(v45) = 4;
	sub_14005E8E0((__int64)v1, v32 + 160, (int*)&v44, v34);
	v1[2] += 16i64;
	v35 = v1[2];
	v36 = *(_DWORD*)(v35 - 8);
	v37 = v35 - 16;
	v38 = v36 - 2;
	if (!v38)
		goto LABEL_32;
	v39 = v38 - 3;
	if (!v39)
		goto LABEL_30;
	v40 = v39 - 1;
	if (!v40)
		goto LABEL_30;
	v41 = v40 - 1;
	if (v41)
	{
		if (v41 == 1)
			LABEL_30:
		v3 = *(_QWORD*)v37;
	}
	else
	{
	LABEL_32:
		v43 = *(_DWORD*)(v37 + 8);
		if (v43 == 2)
			goto LABEL_30;
		if (v43 == 7)
			v3 = *(_QWORD*)v37 + 48i64;
	}
	v1[2] = v37;
	return sub_1400ED720(a1, v14, v3);
}
// 140C56A80: using guessed type char *off_140C56A80;
// 140C57400: using guessed type char *off_140C57400;

