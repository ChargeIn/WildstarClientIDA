#include "../winhttp.h"

//----- (0000000140428260) ----------------------------------------------------
void __fastcall sub_140428260(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // edx
	int v11; // ebp
	_QWORD* v12; // rbx
	__int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	__int64 v17; // rdx
	int v18; // [rsp+20h] [rbp-508h]
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-4F8h] BYREF
	int v20; // [rsp+38h] [rbp-4F0h]
	_QWORD* v21; // [rsp+40h] [rbp-4E8h]
	int v22; // [rsp+48h] [rbp-4E0h]
	char v23[1216]; // [rsp+50h] [rbp-4D8h] BYREF

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v19 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v21 = v2;
	v22 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = sub_1400578C0((__int64)v2);
	v10 = *a2;
	v11 = v9;
	v20 = v9;
	if (v10 == 1)
	{
		v12 = (_QWORD*)sub_14040FC60((__int64)v23, (__int64)(a2 + 2));
		if ((unsigned int)sub_140415BB0(v2, (__int64)v12))
		{
			sub_1400FB540((__int64)&v19);
			v2[2] -= 16i64;
		}
		if (*v12)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
			*v12 = 0i64;
		}
		v13 = v12[96];
		if (v13)
			sub_14018B900(v13, 0);
		v14 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v11);
		v15 = v2[2];
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		v2[2] += 16i64;
		sub_1400F06F0((__int64)v2, v15, L"nCount", v16);
		v2[2] -= 16i64;
	}
	v18 = v11;
	sub_1400EA3E0(a1, "ChannelUpdate_Crafting", byte_1409EADAC, *a2, v18);
	sub_1400579E0((__int64)v2, v17, v11);
}
// 140428382: variable 'v16' is possibly undefined
// 1404283C6: variable 'v17' is possibly undefined
// 1409EADAC: using guessed type _BYTE byte_1409EADAC[48];
// 140B00B98: using guessed type wchar_t aNcount_7[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140428260: using guessed type char var_4D8[1216];

