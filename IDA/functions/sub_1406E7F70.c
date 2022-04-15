//----- (00000001406E7F70) ----------------------------------------------------
void __fastcall sub_1406E7F70(__int64 a1)
{
	_QWORD* v1; // rdi
	int v3; // r9d
	int v4; // r8d
	__int64 v5; // rdx
	char* v6; // rax
	char** v7; // rcx
	int v8; // edx
	char* v9; // r8
	char* v10; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rbp
	int v13; // eax
	__int64 v14; // rbx
	int* (__fastcall * v15)(__int64, __int64, __int64, __int64, __int64); // rax
	unsigned int* v16; // r9
	unsigned __int64* v17; // rbx
	__int64 v18; // rax
	__int64* v19; // rsi
	__int64 v20; // r14
	__int64 v21; // rax
	__int64 v22; // r8
	_QWORD* v23; // rax
	__int64 v24; // rcx
	__int64* v25; // rax
	unsigned __int64 v26; // r8
	__int64* v27; // r14
	int* (__fastcall * v28)(__int64, __int64, __int64, __int64, __int64); // rax
	unsigned int* v29; // r9
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rdx
	__int64 v33; // rsi
	wchar_t** v34; // rbx
	__int64* v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rax
	__int64* v43; // rax
	__int64 v44; // rax
	__int64* v45; // rax
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rbx
	__int64 v49; // rax
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // rax
	__int64* v55; // rax
	__int64 v56; // rax
	__int64* v57; // rax
	__int64 v58; // rbx
	int* (__fastcall * v59)(__int64, __int64, __int64, __int64, __int64); // rax
	__int64 v60; // r9
	__int64 v61; // rdx
	int v62; // ecx
	__int64 v63; // rdx
	int v64; // ecx
	int v65; // ecx
	int v66; // ecx
	int v67; // ecx
	__int64 v68; // r8
	int v69; // eax
	__int64(__fastcall * v70)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	int* (__fastcall * v71)(__int64, __int64, __int64, __int64, __int64); // [rsp+20h] [rbp-4048h] BYREF
	__int64(__fastcall * v72)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // [rsp+28h] [rbp-4040h]
	__int64 v73[2048]; // [rsp+30h] [rbp-4038h] BYREF

	v1 = *(_QWORD**)(a1 + 400);
	sub_1407E4830((int*)v73, 0i64, 0x4000ui64);
	v3 = 0;
	v4 = 0;
	v5 = 0i64;
	do
	{
		++v4;
		++v3;
		v73[v5] = (__int64)(&off_140C56A80)[v5];
		v6 = (&off_140C56A80)[v5 + 1];
		v5 += 2i64;
		v73[v5 - 1] = (__int64)v6;
	} while ((unsigned __int64)v4 < 0x97);
	v7 = &off_140C5E970;
	v8 = 0;
	v9 = (char*)v73 + 16i64 * v3 - (_QWORD)&off_140C5E970;
	do
	{
		v10 = *v7;
		++v8;
		v7 += 2;
		*(char**)((char*)v7 + (_QWORD)v9 - 16) = v10;
		*(char**)((char*)v7 + (_QWORD)v9 - 8) = *(v7 - 1);
	} while ((unsigned __int64)v8 < 0x1C);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Apollo.MatrixWindow");
	v11 = v1[2];
	if (*(_DWORD*)(v11 - 8) != 2)
	{
		if (*(_DWORD*)(v11 - 8) == 5 || *(_DWORD*)(v11 - 8) == 6)
			goto LABEL_15;
		if (*(_DWORD*)(v11 - 8) != 7)
		{
			if (*(_DWORD*)(v11 - 8) != 8)
			{
				v12 = 0i64;
				goto LABEL_16;
			}
			goto LABEL_15;
		}
	}
	v13 = *(_DWORD*)(v11 - 8);
	if (v13 == 2)
	{
	LABEL_15:
		v12 = *(_QWORD*)(v11 - 16);
		goto LABEL_16;
	}
	if (v13 == 7)
		v12 = *(_QWORD*)(v11 - 16) + 48i64;
	else
		v12 = 0i64;
LABEL_16:
	*(_QWORD*)v11 = *(_QWORD*)(v11 - 16);
	*(_DWORD*)(v11 + 8) = *(_DWORD*)(v11 - 8);
	v1[2] += 16i64;
	v14 = v1[2];
	v15 = (int* (__fastcall*)(__int64, __int64, __int64, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"__index",
		7ui64);
	v16 = (unsigned int*)(v1[2] - 16i64);
	v71 = v15;
	LODWORD(v72) = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v14 - 32), (int*)&v71, v16);
	v1[2] -= 16i64;
	v17 = (unsigned __int64*)v73[0];
	v18 = v1[2];
	v19 = v73;
	if (v73[0])
	{
		do
		{
			v20 = v19[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v21 = v1[5];
			if (v21 == v1[10])
				v22 = v1[15];
			else
				v22 = *(_QWORD*)(**(_QWORD**)(v21 + 8) + 24i64);
			v23 = sub_140060AB0((__int64)v1, 0, v22);
			v23[4] = v20;
			v24 = v1[2];
			*(_QWORD*)v24 = v23;
			*(_DWORD*)(v24 + 8) = 6;
			v1[2] += 16i64;
			v25 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v26 = -1i64;
			v27 = v25;
			do
				++v26;
			while (*((_BYTE*)v17 + v26));
			v28 = (int* (__fastcall*)(__int64, __int64, __int64, __int64, __int64))sub_140062650((__int64)v1, v17, v26);
			v29 = (unsigned int*)(v1[2] - 16i64);
			v71 = v28;
			LODWORD(v72) = 4;
			sub_14005EA50((__int64)v1, v27, (int*)&v71, v29);
			v1[2] -= 16i64;
			v17 = (unsigned __int64*)v19[2];
			v18 = v1[2];
			v19 += 2;
		} while (v17);
	}
	v1[2] = v18;
	sub_140057020(v1, "MatrixWindow", &qword_140B720B8);
	sub_140058710((__int64)v1, (unsigned __int64*)"CodeEnumPrimalMatrixRewardType", 0x1Eui64);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v30 = v1[2];
	v31 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v30 + 8) = 5;
	v33 = 6i64;
	*(_QWORD*)v30 = v31;
	v1[2] += 16i64;
	v34 = &off_140C33D50;
	do
	{
		sub_1400F06F0((__int64)v1, v32, *v34, *((_DWORD*)v34 + 2));
		v34 += 2;
		--v33;
	} while (v33);
	v35 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v35, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"CodeEnumPrimalMatrixNodeVisualType", 0x22ui64);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v36 = v1[2];
	v37 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v36 + 8) = 5;
	*(_QWORD*)v36 = v37;
	v1[2] += 16i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Red", 3ui64);
	v38 = v1[2];
	*(_QWORD*)v38 = 0i64;
	*(_DWORD*)(v38 + 8) = 3;
	v1[2] += 16i64;
	v39 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v39, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Green", 5ui64);
	v40 = v1[2];
	*(_QWORD*)v40 = 0x3FF0000000000000i64;
	*(_DWORD*)(v40 + 8) = 3;
	v1[2] += 16i64;
	v41 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v41, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Blue", 4ui64);
	v42 = v1[2];
	*(_QWORD*)v42 = 0x4000000000000000i64;
	*(_DWORD*)(v42 + 8) = 3;
	v1[2] += 16i64;
	v43 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v43, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Purple", 6ui64);
	v44 = v1[2];
	*(_QWORD*)v44 = 0x4008000000000000i64;
	*(_DWORD*)(v44 + 8) = 3;
	v1[2] += 16i64;
	v45 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v45, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Mixed", 5ui64);
	v46 = v1[2];
	*(_QWORD*)v46 = 0x4010000000000000i64;
	*(_DWORD*)(v46 + 8) = 3;
	v1[2] += 16i64;
	v47 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v47, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_14005EA50((__int64)v1, (__int64*)(v1[2] - 48i64), (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"CodeEnumPrimalMatrixNodeState", 0x1Dui64);
	if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
		sub_14005E2C0((__int64)v1);
	v48 = v1[2];
	v49 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v48 + 8) = 5;
	*(_QWORD*)v48 = v49;
	v1[2] += 16i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Locked", 6ui64);
	v50 = v1[2];
	*(_QWORD*)v50 = 0i64;
	*(_DWORD*)(v50 + 8) = 3;
	v1[2] += 16i64;
	v51 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v51, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Unlocked", 8ui64);
	v52 = v1[2];
	*(_QWORD*)v52 = 0x3FF0000000000000i64;
	*(_DWORD*)(v52 + 8) = 3;
	v1[2] += 16i64;
	v53 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v53, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Started", 7ui64);
	v54 = v1[2];
	*(_QWORD*)v54 = 0x4000000000000000i64;
	*(_DWORD*)(v54 + 8) = 3;
	v1[2] += 16i64;
	v55 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v55, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_140058710((__int64)v1, (unsigned __int64*)"Completed", 9ui64);
	v56 = v1[2];
	*(_QWORD*)v56 = 0x4008000000000000i64;
	*(_DWORD*)(v56 + 8) = 3;
	v1[2] += 16i64;
	v57 = (__int64*)sub_1400580E0((__int64)v1, -3);
	sub_14005EA50((__int64)v1, v57, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 32i64;
	sub_14005EA50((__int64)v1, (__int64*)(v1[2] - 48i64), (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
	v1[2] -= 48i64;
	v58 = v1[4];
	v59 = (int* (__fastcall*)(__int64, __int64, __int64, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"Apollo.Window",
		0xDui64);
	v60 = v1[2];
	v71 = v59;
	LODWORD(v72) = 4;
	sub_14005E8E0((__int64)v1, v58 + 160, (int*)&v71, v60);
	v1[2] += 16i64;
	v61 = v1[2];
	v62 = *(_DWORD*)(v61 - 8);
	v63 = v61 - 16;
	v64 = v62 - 2;
	if (v64)
	{
		v65 = v64 - 3;
		if (!v65)
			goto LABEL_42;
		v66 = v65 - 1;
		if (!v66)
			goto LABEL_42;
		v67 = v66 - 1;
		if (v67)
		{
			if (v67 != 1)
			{
			LABEL_38:
				v68 = 0i64;
				goto LABEL_43;
			}
			goto LABEL_42;
		}
	}
	v69 = *(_DWORD*)(v63 + 8);
	if (v69 == 2)
	{
	LABEL_42:
		v68 = *(_QWORD*)v63;
		goto LABEL_43;
	}
	if (v69 != 7)
		goto LABEL_38;
	v68 = *(_QWORD*)v63 + 48i64;
LABEL_43:
	v1[2] = v63;
	sub_1400ED720(a1, v12, v68);
	v71 = sub_1406E87D0;
	v70 = sub_140001B30;
	if (!sub_1406E87D0)
		v70 = 0i64;
	v72 = v70;
	sub_1400F85D0(a1 + 2688, (int*)L"MatrixWindow", &v71);
}
// 1406E825A: variable 'v32' is possibly undefined
// 140B3FB00: using guessed type wchar_t aMatrixwindow_0[13];
// 140B720B8: using guessed type __int64 qword_140B720B8;
// 140C33D50: using guessed type wchar_t *off_140C33D50;
// 140C56A80: using guessed type char *off_140C56A80;
// 140C5E970: using guessed type char *off_140C5E970;

