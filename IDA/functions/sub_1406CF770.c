#include "../winhttp.h"

//----- (00000001406CF770) ----------------------------------------------------
void __fastcall sub_1406CF770(__int64 a1)
{
	_QWORD* v1; // rdi
	int v3; // edx
	int v4; // r9d
	__int64 v5; // r8
	char* v6; // rax
	unsigned __int64 v7; // rax
	int v8; // r8d
	__int64* v9; // rcx
	signed __int64 v10; // r9
	__int64 v11; // rax
	unsigned __int64 v12; // rax
	int v13; // r8d
	__int64* v14; // rcx
	signed __int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rdx
	unsigned __int64 v18; // rsi
	int v19; // eax
	__int64 v20; // rbx
	__int64(__fastcall * v21)(__int64, __int64, __int64, __int64, __int64); // rax
	unsigned int* v22; // r9
	unsigned __int64* v23; // rbx
	__int64 v24; // rax
	__int64* v25; // r14
	__int64 v26; // rbp
	__int64 v27; // rax
	__int64 v28; // r8
	_QWORD* v29; // rax
	__int64 v30; // rcx
	__int64* v31; // rax
	unsigned __int64 v32; // r8
	__int64* v33; // rbp
	__int64(__fastcall * v34)(__int64, __int64, __int64, __int64, __int64); // rax
	unsigned int* v35; // r9
	__int64 v36; // rbx
	__int64(__fastcall * v37)(__int64, __int64, __int64, __int64, __int64); // rax
	__int64 v38; // r9
	__int64 v39; // rdx
	int v40; // ecx
	__int64 v41; // rdx
	int v42; // ecx
	int v43; // ecx
	int v44; // ecx
	int v45; // ecx
	__int64 v46; // r8
	int v47; // eax
	__int64(__fastcall * v48)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // rax
	__int64(__fastcall * v49)(__int64, __int64, __int64, __int64, __int64); // [rsp+20h] [rbp-4048h] BYREF
	__int64(__fastcall * v50)(__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64), __int64, __int64, __int64, __int64, __int64); // [rsp+28h] [rbp-4040h]
	__int64 v51[2048]; // [rsp+30h] [rbp-4038h] BYREF

	v1 = *(_QWORD**)(a1 + 400);
	sub_1407E4830((int*)v51, 0i64, 0x4000ui64);
	v3 = 0;
	v4 = 0;
	v5 = 0i64;
	do
	{
		++v4;
		++v3;
		v51[v5] = (__int64)(&off_140C56A80)[v5];
		v6 = (&off_140C56A80)[v5 + 1];
		v5 += 2i64;
		v51[v5 - 1] = (__int64)v6;
	} while ((unsigned __int64)v4 < 0x97);
	v7 = 16i64 * v3;
	v8 = 0;
	v9 = &v51[v7 / 8];
	v10 = (char*)&(&off_140C57680)[v7 / 0xFFFFFFFFFFFFFFF8ui64] - (char*)v51;
	do
	{
		++v8;
		++v3;
		*v9 = *(__int64*)((char*)v9 + v10);
		v11 = *(__int64*)((char*)v9 + v10 + 8);
		v9 += 2;
		*(v9 - 1) = v11;
	} while ((unsigned __int64)v8 < 0xE);
	v12 = 16i64 * v3;
	v13 = 0;
	v14 = &v51[v12 / 8];
	v15 = (char*)&(&off_140C5E540)[v12 / 0xFFFFFFFFFFFFFFF8ui64] - (char*)v51;
	do
	{
		v16 = *(__int64*)((char*)v14 + v15);
		++v13;
		v14 += 2;
		*(v14 - 2) = v16;
		*(v14 - 1) = *(__int64*)((char*)v14 + v15 - 8);
	} while ((unsigned __int64)v13 < 0xE);
	sub_1400569B0((__int64)v1, (unsigned __int64*)"Apollo.IconButton");
	v17 = v1[2];
	if (*(_DWORD*)(v17 - 8) != 2)
	{
		if (*(_DWORD*)(v17 - 8) == 5 || *(_DWORD*)(v17 - 8) == 6)
			goto LABEL_17;
		if (*(_DWORD*)(v17 - 8) != 7)
		{
			if (*(_DWORD*)(v17 - 8) != 8)
			{
				v18 = 0i64;
				goto LABEL_18;
			}
			goto LABEL_17;
		}
	}
	v19 = *(_DWORD*)(v17 - 8);
	if (v19 == 2)
	{
	LABEL_17:
		v18 = *(_QWORD*)(v17 - 16);
		goto LABEL_18;
	}
	if (v19 == 7)
		v18 = *(_QWORD*)(v17 - 16) + 48i64;
	else
		v18 = 0i64;
LABEL_18:
	*(_QWORD*)v17 = *(_QWORD*)(v17 - 16);
	*(_DWORD*)(v17 + 8) = *(_DWORD*)(v17 - 8);
	v1[2] += 16i64;
	v20 = v1[2];
	v21 = (__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"__index",
		7ui64);
	v22 = (unsigned int*)(v1[2] - 16i64);
	v49 = v21;
	LODWORD(v50) = 4;
	sub_14005EA50((__int64)v1, (__int64*)(v20 - 32), (int*)&v49, v22);
	v1[2] -= 16i64;
	v23 = (unsigned __int64*)v51[0];
	v24 = v1[2];
	v25 = v51;
	if (v51[0])
	{
		do
		{
			v26 = v25[1];
			if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
				sub_14005E2C0((__int64)v1);
			v27 = v1[5];
			if (v27 == v1[10])
				v28 = v1[15];
			else
				v28 = *(_QWORD*)(**(_QWORD**)(v27 + 8) + 24i64);
			v29 = sub_140060AB0((__int64)v1, 0, v28);
			v29[4] = v26;
			v30 = v1[2];
			*(_QWORD*)v30 = v29;
			*(_DWORD*)(v30 + 8) = 6;
			v1[2] += 16i64;
			v31 = (__int64*)sub_1400580E0((__int64)v1, -2);
			v32 = -1i64;
			v33 = v31;
			do
				++v32;
			while (*((_BYTE*)v23 + v32));
			v34 = (__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64))sub_140062650((__int64)v1, v23, v32);
			v35 = (unsigned int*)(v1[2] - 16i64);
			v49 = v34;
			LODWORD(v50) = 4;
			sub_14005EA50((__int64)v1, v33, (int*)&v49, v35);
			v1[2] -= 16i64;
			v23 = (unsigned __int64*)v25[2];
			v24 = v1[2];
			v25 += 2;
		} while (v23);
	}
	v36 = v1[4];
	v1[2] = v24 - 16;
	v37 = (__int64(__fastcall*)(__int64, __int64, __int64, __int64, __int64))sub_140062650(
		(__int64)v1,
		(unsigned __int64*)"Apollo.Button",
		0xDui64);
	v38 = v1[2];
	v49 = v37;
	LODWORD(v50) = 4;
	sub_14005E8E0((__int64)v1, v36 + 160, (int*)&v49, v38);
	v1[2] += 16i64;
	v39 = v1[2];
	v40 = *(_DWORD*)(v39 - 8);
	v41 = v39 - 16;
	v42 = v40 - 2;
	if (v42)
	{
		v43 = v42 - 3;
		if (!v43)
			goto LABEL_36;
		v44 = v43 - 1;
		if (!v44)
			goto LABEL_36;
		v45 = v44 - 1;
		if (v45)
		{
			if (v45 != 1)
			{
			LABEL_32:
				v46 = 0i64;
				goto LABEL_37;
			}
			goto LABEL_36;
		}
	}
	v47 = *(_DWORD*)(v41 + 8);
	if (v47 == 2)
	{
	LABEL_36:
		v46 = *(_QWORD*)v41;
		goto LABEL_37;
	}
	if (v47 != 7)
		goto LABEL_32;
	v46 = *(_QWORD*)v41 + 48i64;
LABEL_37:
	v1[2] = v41;
	sub_1400ED720(a1, v18, v46);
	v49 = sub_1406CEBC0;
	v48 = sub_140001B30;
	if (!sub_1406CEBC0)
		v48 = 0i64;
	v50 = v48;
	sub_1400F85D0(a1 + 2688, (int*)L"IconButton", &v49);
}
// 140B3B0B8: using guessed type wchar_t aIconbutton_0[11];
// 140C56A80: using guessed type char *off_140C56A80;
// 140C57680: using guessed type char *off_140C57680;
// 140C5E540: using guessed type char *off_140C5E540;

