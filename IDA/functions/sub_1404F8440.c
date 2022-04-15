//----- (00000001404F8440) ----------------------------------------------------
void __fastcall sub_1404F8440(__int64 a1)
{
	_QWORD* v1; // rdi
	int v3; // r9d
	int v4; // r8d
	__int64 v5; // rdx
	char* v6; // rax
	unsigned __int64 v7; // rax
	int v8; // edx
	__int64* v9; // rcx
	signed __int64 v10; // r8
	__int64 v11; // rax
	__int64 v12; // rdx
	unsigned __int64 v13; // rsi
	int v14; // eax
	__int64 v15; // rbx
	__int64(__fastcall * v16)(__int64, __int64, WCHAR*, __int64, __int64); // rax
	unsigned int* v17; // r9
	unsigned __int64* v18; // rbx
	__int64 v19; // rax
	__int64* v20; // r14
	__int64 v21; // rbp
	__int64 v22; // rax
	__int64 v23; // r8
	_QWORD* v24; // rax
	__int64 v25; // rcx
	__int64* v26; // rax
	unsigned __int64 v27; // r8
	__int64* v28; // rbp
	__int64(__fastcall * v29)(__int64, __int64, WCHAR*, __int64, __int64); // rax
	unsigned int* v30; // r9
	__int64 v31; // rbx
	__int64(__fastcall * v32)(__int64, __int64, WCHAR*, __int64, __int64); // rax
	__int64 v33; // r9
	__int64 v34; // rdx
	int v35; // ecx
	__int64 v36; // rdx
	int v37; // ecx
	int v38; // ecx
	int v39; // ecx
	int v40; // ecx
	__int64 v41; // r8
	int v42; // eax
	__int64(__fastcall * v43)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	__int64(__fastcall * v44)(__int64, __int64, WCHAR*, __int64, __int64); // [rsp+20h] [rbp-4048h] BYREF
	__int64(__fastcall * v45)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // [rsp+28h] [rbp-4040h]
	__int64 v46[2048]; // [rsp+30h] [rbp-4038h] BYREF

	v1 = *(_QWORD**)(a1 + 400);
	sub_1407E4830((int*)v46, 0i64, 0x4000ui64);
	v3 = 0;
	v4 = 0;
	v5 = 0i64;
	do
	{
		++v4;
		++v3;
		v46[v5] = (__int64)(&off_140C56A80)[v5];
		v6 = (&off_140C56A80)[v5 + 1];
		v5 += 2i64;
		v46[v5 - 1] = (__int64)v6;
	} while ((unsigned __int64)v4 < 0x97);
	v7 = 16i64 * v3;
	v8 = 0;
	v9 = &v46[v7 / 8];
	v10 = (char*)&(&off_140C59430)[v7 / 0xFFFFFFFFFFFFFFF8ui64] - (char*)v46;
	do
	{
		v11 = *(__int64*)((char*)v9 + v10);
		++v8;
		v9 += 2;
		*(v9 - 2) = v11;
		*(v9 - 1) = *(__int64*)((char*)v9 + v10 - 8);
	} while ((unsigned __int64)v8 < 0x38);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Apollo.CostumeWindow");
	v12 = v1[2];
	if (*(_DWORD*)(v12 - 8) != 2)
	{
		if (*(_DWORD*)(v12 - 8) == 5 || *(_DWORD*)(v12 - 8) == 6)
			goto LABEL_15;
		if (*(_DWORD*)(v12 - 8) != 7)
		{
			if (*(_DWORD*)(v12 - 8) != 8)
			{
				v13 = 0i64;
				goto LABEL_16;
			}
			goto LABEL_15;
		}
	}
	v14 = *(_DWORD*)(v12 - 8);
	if (v14 == 2)
	{
	LABEL_15:
		v13 = *(_QWORD*)(v12 - 16);
		goto LABEL_16;
	}
	if (v14 == 7)
		v13 = *(_QWORD*)(v12 - 16) + 48i64;
	else
		v13 = 0i64;
LABEL_16:
	*(_QWORD*)v12 = *(_QWORD*)(v12 - 16);
	*(_DWORD*)(v12 + 8) = *(_DWORD*)(v12 - 8);
	v1[2] += 16i64;
	v15 = v1[2];
	v16 = (__int64(__fastcall*)(__int64, __int64, WCHAR*, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"__index",
		7ui64);
	v17 = (unsigned int*)(v1[2] - 16i64);
	v44 = v16;
	LODWORD(v45) = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v15 - 32), (int*)&v44, v17);
	v1[2] -= 16i64;
	v18 = (unsigned __int64*)v46[0];
	v19 = v1[2];
	v20 = v46;
	if (v46[0])
	{
		do
		{
			v21 = v20[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v22 = v1[5];
			if (v22 == v1[10])
				v23 = v1[15];
			else
				v23 = *(_QWORD*)(**(_QWORD**)(v22 + 8) + 24i64);
			v24 = sub_140060AB0((__int64)v1, 0, v23);
			v24[4] = v21;
			v25 = v1[2];
			*(_QWORD*)v25 = v24;
			*(_DWORD*)(v25 + 8) = 6;
			v1[2] += 16i64;
			v26 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v27 = -1i64;
			v28 = v26;
			do
				++v27;
			while (*((_BYTE*)v18 + v27));
			v29 = (__int64(__fastcall*)(__int64, __int64, WCHAR*, __int64, __int64))sub_140062650((__int64)v1, v18, v27);
			v30 = (unsigned int*)(v1[2] - 16i64);
			v44 = v29;
			LODWORD(v45) = 4;
			sub_14005EA50((__int64)v1, v28, (int*)&v44, v30);
			v1[2] -= 16i64;
			v18 = (unsigned __int64*)v20[2];
			v19 = v1[2];
			v20 += 2;
		} while (v18);
	}
	v31 = v1[4];
	v1[2] = v19 - 16;
	v32 = (__int64(__fastcall*)(__int64, __int64, WCHAR*, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"Apollo.Window",
		0xDui64);
	v33 = v1[2];
	v44 = v32;
	LODWORD(v45) = 4;
	sub_14005E8E0((__int64)v1, v31 + 160, (int*)&v44, v33);
	v1[2] += 16i64;
	v34 = v1[2];
	v35 = *(_DWORD*)(v34 - 8);
	v36 = v34 - 16;
	v37 = v35 - 2;
	if (v37)
	{
		v38 = v37 - 3;
		if (!v38)
			goto LABEL_34;
		v39 = v38 - 1;
		if (!v39)
			goto LABEL_34;
		v40 = v39 - 1;
		if (v40)
		{
			if (v40 != 1)
			{
			LABEL_30:
				v41 = 0i64;
				goto LABEL_35;
			}
			goto LABEL_34;
		}
	}
	v42 = *(_DWORD*)(v36 + 8);
	if (v42 == 2)
	{
	LABEL_34:
		v41 = *(_QWORD*)v36;
		goto LABEL_35;
	}
	if (v42 != 7)
		goto LABEL_30;
	v41 = *(_QWORD*)v36 + 48i64;
LABEL_35:
	v1[2] = v36;
	sub_1400ED720(a1, v13, v41);
	v44 = sub_1404F7F50;
	v43 = sub_140001B30;
	if (!sub_1404F7F50)
		v43 = 0i64;
	v45 = v43;
	sub_1400F85D0(a1 + 2688, (int*)L"CostumeWindow", &v44);
}
// 140B0F7E8: using guessed type wchar_t aCostumewindow_0[14];
// 140C56A80: using guessed type char *off_140C56A80;
// 140C59430: using guessed type char *off_140C59430;

