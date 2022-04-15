//----- (00000001406CB900) ----------------------------------------------------
void __fastcall sub_1406CB900(__int64 a1)
{
	_QWORD* v1; // rdi
	int v3; // r8d
	__int64 v4; // rdx
	char* v5; // rax
	__int64 v6; // rdx
	unsigned __int64 v7; // rsi
	int v8; // eax
	__int64 v9; // rbx
	__int64(__fastcall * v10)(__int64, __int64, _QWORD*, __int64, __int64); // rax
	unsigned int* v11; // r9
	unsigned __int64* v12; // rbx
	__int64 v13; // rax
	__int64* v14; // r14
	__int64 v15; // rbp
	__int64 v16; // rax
	__int64 v17; // r8
	_QWORD* v18; // rax
	__int64 v19; // rcx
	__int64* v20; // rax
	unsigned __int64 v21; // r8
	__int64* v22; // rbp
	__int64(__fastcall * v23)(__int64, __int64, _QWORD*, __int64, __int64); // rax
	unsigned int* v24; // r9
	__int64 v25; // rbx
	__int64(__fastcall * v26)(__int64, __int64, _QWORD*, __int64, __int64); // rax
	__int64 v27; // r9
	__int64 v28; // rdx
	int v29; // ecx
	__int64 v30; // rdx
	int v31; // ecx
	int v32; // ecx
	int v33; // ecx
	int v34; // ecx
	__int64 v35; // r8
	int v36; // eax
	__int64(__fastcall * v37)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	__int64(__fastcall * v38)(__int64, __int64, _QWORD*, __int64, __int64); // [rsp+20h] [rbp-4048h] BYREF
	__int64(__fastcall * v39)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // [rsp+28h] [rbp-4040h]
	__int64 v40[2048]; // [rsp+30h] [rbp-4038h] BYREF

	v1 = *(_QWORD**)(a1 + 400);
	sub_1407E4830((int*)v40, 0i64, 0x4000ui64);
	v3 = 0;
	v4 = 0i64;
	do
	{
		v5 = (&off_140C56A80)[v4];
		++v3;
		v4 += 2i64;
		*(__int64(__fastcall**)(__int64, __int64, _QWORD*, __int64, __int64))((char*)&v38 + v4 * 8) = (__int64(__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))v5;
		v40[v4 - 1] = (__int64)(&off_140C56A80)[v4 - 1];
	} while ((unsigned __int64)v3 < 0x97);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Apollo.TradeCommitButton");
	v6 = v1[2];
	if (*(_DWORD*)(v6 - 8) != 2)
	{
		if (*(_DWORD*)(v6 - 8) == 5 || *(_DWORD*)(v6 - 8) == 6)
			goto LABEL_13;
		if (*(_DWORD*)(v6 - 8) != 7)
		{
			if (*(_DWORD*)(v6 - 8) != 8)
			{
				v7 = 0i64;
				goto LABEL_14;
			}
			goto LABEL_13;
		}
	}
	v8 = *(_DWORD*)(v6 - 8);
	if (v8 == 2)
	{
	LABEL_13:
		v7 = *(_QWORD*)(v6 - 16);
		goto LABEL_14;
	}
	if (v8 == 7)
		v7 = *(_QWORD*)(v6 - 16) + 48i64;
	else
		v7 = 0i64;
LABEL_14:
	*(_QWORD*)v6 = *(_QWORD*)(v6 - 16);
	*(_DWORD*)(v6 + 8) = *(_DWORD*)(v6 - 8);
	v1[2] += 16i64;
	v9 = v1[2];
	v10 = (__int64(__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"__index",
		7ui64);
	v11 = (unsigned int*)(v1[2] - 16i64);
	v38 = v10;
	LODWORD(v39) = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v9 - 32), (int*)&v38, v11);
	v1[2] -= 16i64;
	v12 = (unsigned __int64*)v40[0];
	v13 = v1[2];
	v14 = v40;
	if (v40[0])
	{
		do
		{
			v15 = v14[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v16 = v1[5];
			if (v16 == v1[10])
				v17 = v1[15];
			else
				v17 = *(_QWORD*)(**(_QWORD**)(v16 + 8) + 24i64);
			v18 = sub_140060AB0((__int64)v1, 0, v17);
			v18[4] = v15;
			v19 = v1[2];
			*(_QWORD*)v19 = v18;
			*(_DWORD*)(v19 + 8) = 6;
			v1[2] += 16i64;
			v20 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v21 = -1i64;
			v22 = v20;
			do
				++v21;
			while (*((_BYTE*)v12 + v21));
			v23 = (__int64(__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))sub_140062650((__int64)v1, v12, v21);
			v24 = (unsigned int*)(v1[2] - 16i64);
			v38 = v23;
			LODWORD(v39) = 4;
			sub_14005EA50((__int64)v1, v22, (int*)&v38, v24);
			v1[2] -= 16i64;
			v12 = (unsigned __int64*)v14[2];
			v13 = v1[2];
			v14 += 2;
		} while (v12);
	}
	v25 = v1[4];
	v1[2] = v13 - 16;
	v26 = (__int64(__fastcall*)(__int64, __int64, _QWORD*, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"Apollo.Window",
		0xDui64);
	v27 = v1[2];
	v38 = v26;
	LODWORD(v39) = 4;
	sub_14005E8E0((__int64)v1, v25 + 160, (int*)&v38, v27);
	v1[2] += 16i64;
	v28 = v1[2];
	v29 = *(_DWORD*)(v28 - 8);
	v30 = v28 - 16;
	v31 = v29 - 2;
	if (v31)
	{
		v32 = v31 - 3;
		if (!v32)
			goto LABEL_32;
		v33 = v32 - 1;
		if (!v33)
			goto LABEL_32;
		v34 = v33 - 1;
		if (v34)
		{
			if (v34 != 1)
			{
			LABEL_28:
				v35 = 0i64;
				goto LABEL_33;
			}
			goto LABEL_32;
		}
	}
	v36 = *(_DWORD*)(v30 + 8);
	if (v36 == 2)
	{
	LABEL_32:
		v35 = *(_QWORD*)v30;
		goto LABEL_33;
	}
	if (v36 != 7)
		goto LABEL_28;
	v35 = *(_QWORD*)v30 + 48i64;
LABEL_33:
	v1[2] = v30;
	sub_1400ED720(a1, v7, v35);
	v38 = sub_1406CB620;
	v37 = sub_140001B30;
	if (!sub_1406CB620)
		v37 = 0i64;
	v39 = v37;
	sub_1400F85D0(a1 + 2688, (int*)L"TradeCommitButton", &v38);
}
// 140B3A478: using guessed type wchar_t aTradecommitbut[18];
// 140C56A80: using guessed type char *off_140C56A80;

