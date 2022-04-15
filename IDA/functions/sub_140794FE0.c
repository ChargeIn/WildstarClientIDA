#include "../winhttp.h"

//----- (0000000140794FE0) ----------------------------------------------------
__int64 __fastcall sub_140794FE0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rsi
	unsigned __int64 v4; // r8
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64 v7; // rdi
	__int64 v8; // rax
	unsigned __int64 v9; // r8
	__int64 v10; // rax
	unsigned int* v11; // r9
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rax
	__int64 v17; // rdi
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	unsigned int* v20; // r9
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 result; // rax
	__int64 v24; // [rsp+20h] [rbp-18h] BYREF
	int v25; // [rsp+28h] [rbp-10h]

	v2 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v2 = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 16) += 16i64;
	v3 = -1i64;
	v4 = -1i64;
	do
		++v4;
	while (aG_14[v4]);
	v5 = sub_140062650(a1, (unsigned __int64*)aG_14, v4);
	v6 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v24 = v5;
	v25 = 4;
	sub_14005EA50(a1, (__int64*)(a1 + 120), (int*)&v24, v6);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_140057020((_QWORD*)a1, aG_13, &off_140B50BE0);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = sub_140062650(a1, (unsigned __int64*)aLua51, 7ui64);
	*(_DWORD*)(v7 + 8) = 4;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = -1i64;
	do
		++v9;
	while (aVersion_1[v9]);
	v10 = sub_140062650(a1, (unsigned __int64*)aVersion_1, v9);
	v11 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v24 = v10;
	v25 = 4;
	sub_14005EA50(a1, (__int64*)(a1 + 120), (int*)&v24, v11);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_140794EA0((_QWORD*)a1, (unsigned __int64*)aIpairs, (__int64)sub_1407937F0, (__int64)sub_1407936F0);
	sub_140794EA0((_QWORD*)a1, (unsigned __int64*)aPairs, (__int64)sub_140793600, (__int64)sub_140793500);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v12 = *(_QWORD*)(a1 + 16);
	v13 = sub_14005C1B0(a1, 0, 1);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v14 = *(_QWORD*)(v14 - 16);
	*(_DWORD*)(v14 + 8) = *(_DWORD*)(v14 - 8);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058BF0(a1, -2);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v15 = *(_QWORD*)(a1 + 16);
	v16 = sub_140062650(a1, (unsigned __int64*)aKv, 2ui64);
	*(_DWORD*)(v15 + 8) = 4;
	*(_QWORD*)v15 = v16;
	*(_QWORD*)(a1 + 16) += 16i64;
	v17 = *(_QWORD*)(a1 + 16);
	v18 = -1i64;
	do
		++v18;
	while (aMode[v18]);
	v19 = sub_140062650(a1, (unsigned __int64*)aMode, v18);
	v20 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v24 = v19;
	v25 = 4;
	sub_14005EA50(a1, (__int64*)(v17 - 32), (int*)&v24, v20);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_1400587D0((_QWORD*)a1, (__int64)sub_1407946D0, 1);
	do
		++v3;
	while (aNewproxy[v3]);
	v21 = sub_140062650(a1, (unsigned __int64*)aNewproxy, v3);
	v22 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v24 = v21;
	v25 = 4;
	result = sub_14005EA50(a1, (__int64*)(a1 + 120), (int*)&v24, v22);
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}
// 140B50BE0: using guessed type char *off_140B50BE0;

