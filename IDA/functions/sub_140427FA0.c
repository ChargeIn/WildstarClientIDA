#include "../winhttp.h"

//----- (0000000140427FA0) ----------------------------------------------------
void __fastcall sub_140427FA0(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // edx
	int v11; // ebp
	unsigned int v12; // edx
	unsigned int v13; // edx
	__int64 v14; // rdx
	_QWORD* v15; // rbx
	__int64 v16; // rcx
	_QWORD* v17; // rbx
	__int64 v18; // rcx
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r10d
	int v22; // edx
	int v23; // [rsp+20h] [rbp-9C8h]
	__int64(__fastcall * *v24)(); // [rsp+30h] [rbp-9B8h] BYREF
	int v25; // [rsp+38h] [rbp-9B0h]
	_QWORD* v26; // [rsp+40h] [rbp-9A8h]
	int v27; // [rsp+48h] [rbp-9A0h]
	char v28[1216]; // [rsp+50h] [rbp-998h] BYREF
	char v29[1216]; // [rsp+510h] [rbp-4D8h] BYREF

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v24 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v26 = v2;
	v27 = 1;
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
	v25 = v9;
	v12 = v10 - 1;
	if (!v12)
	{
		v14 = (__int64)(a2 + 2);
		if (!a2[298] || !*((_QWORD*)a2 + 2))
			goto LABEL_33;
		v17 = (_QWORD*)sub_14040FC60((__int64)v29, v14);
		if ((unsigned int)sub_140415BB0(v2, (__int64)v17))
		{
			sub_1400FB540((__int64)&v24);
			v2[2] -= 16i64;
		}
		if (*v17)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v17 + 8i64))(*v17);
			*v17 = 0i64;
		}
		v18 = v17[96];
		if (v18)
			sub_14018B900(v18, 0);
		v19 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v11);
		v20 = v2[2];
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		v2[2] += 16i64;
		sub_1400F06F0((__int64)v2, v20, L"nCount", v21);
		v2[2] -= 16i64;
		v22 = a2[307];
		if (!v22 || !(unsigned int)sub_140649870(v2, v22))
			goto LABEL_32;
		goto LABEL_31;
	}
	v13 = v12 - 1;
	if (!v13)
	{
		if ((unsigned int)sub_140501210(v2, (_QWORD*)a2 + 154))
		{
			sub_1400FB540((__int64)&v24);
			v2[2] -= 16i64;
		}
		if ((unsigned int)sub_140501210(v2, (_QWORD*)a2 + 157))
		{
			sub_1400FB540((__int64)&v24);
			v2[2] -= 16i64;
		}
		if (a2 == (unsigned int*)-1280i64 || !(unsigned int)sub_140501210(v2, (_QWORD*)a2 + 160))
			goto LABEL_32;
	LABEL_31:
		sub_1400FB540((__int64)&v24);
		v2[2] -= 16i64;
		goto LABEL_32;
	}
	if (v13 != 1)
	{
	LABEL_32:
		v23 = v11;
		sub_1400EA3E0(a1, "ChannelUpdate_Loot", byte_1409EAD54, *a2, v23);
		goto LABEL_33;
	}
	v14 = (__int64)(a2 + 2);
	if (a2[298] && *((_QWORD*)a2 + 2))
	{
		v15 = (_QWORD*)sub_14040FC60((__int64)v28, v14);
		if ((unsigned int)sub_140415BB0(v2, (__int64)v15))
		{
			sub_1400FB540((__int64)&v24);
			v2[2] -= 16i64;
		}
		if (*v15)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v15 + 8i64))(*v15);
			*v15 = 0i64;
		}
		v16 = v15[96];
		if (v16)
			sub_14018B900(v16, 0);
		goto LABEL_32;
	}
LABEL_33:
	sub_1400579E0((__int64)v2, v14, v11);
}
// 1404281EA: variable 'v21' is possibly undefined
// 14042825A: variable 'v14' is possibly undefined
// 1409EAD54: using guessed type _BYTE byte_1409EAD54[24];
// 140B00A38: using guessed type wchar_t aNcount_6[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140427FA0: using guessed type char var_998[1216];
// 140427FA0: using guessed type char var_4D8[1216];

