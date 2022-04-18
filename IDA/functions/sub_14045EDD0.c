#include "../winhttp.h"

//----- (000000014045EDD0) ----------------------------------------------------
void __fastcall sub_14045EDD0(_DWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rcx
	int v4; // ebp
	__int64 v5; // rdi
	__int16* v6; // rax
	char* v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rax
	unsigned int v10; // ebx
	__int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // ebx
	__int64 v14; // rax
	__int64 v15; // rcx
	int v16; // [rsp+20h] [rbp-58h]
	int v17; // [rsp+28h] [rbp-50h]
	char v18[8]; // [rsp+30h] [rbp-48h] BYREF
	int* v19; // [rsp+38h] [rbp-40h]
	int* v20; // [rsp+40h] [rbp-38h]
	int* v21; // [rsp+48h] [rbp-30h]
	__int64 v22; // [rsp+50h] [rbp-28h] BYREF
	__int64 v23; // [rsp+58h] [rbp-20h]
	__int64(__fastcall * *v24)(); // [rsp+80h] [rbp+8h] BYREF

	v2 = sub_14018B280(16i64, 0);
	v4 = 0;
	v5 = (__int64)v2;
	v19 = v2;
	v20 = v2;
	v21 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v6 = sub_14034BDD0(v3, 2673);
	v7 = (char*)sub_14018EFA0(&v22, (__int64)L"%s %d", v6, (unsigned int)a1[14]);
	if (v7 != v18)
	{
		sub_14001C480((__int64)v18, *((int**)v7 + 1), *((int**)v7 + 2));
		v5 = (__int64)v19;
	}
	if (v23)
		sub_14018B900(v23, 0);
	v8 = qword_140C65898;
	a1[1578] = 1;
	v9 = *(_QWORD*)(v8 + 120);
	if (v9 && a1[2] == *(_DWORD*)(v9 + 8))
		*(_DWORD*)(v8 + 28568) = 1;
	v10 = a1[14];
	sub_1405FCCB0(*(_QWORD*)qword_140C65B80);
	v24 = off_140B66F70;
	sub_14043B4E0(v11, v10, (__int64)&unk_140C7CCD0, (unsigned int(__fastcall***)(_QWORD, __int64)) & v24);
	v12 = qword_140C65898;
	v13 = 0;
	if (a1 == *(_DWORD**)(qword_140C65898 + 120))
	{
		v14 = sub_14024DFC0(a1[14]);
		if (v14)
		{
			v4 = *(_DWORD*)(v14 + 16);
			v13 = *(_DWORD*)(v14 + 12);
		}
		sub_1403C9E60(v15, a1[14]);
		v12 = qword_140C65898;
	}
	v17 = v13;
	v16 = v4;
	Apollo_LUAEvent(*(_QWORD*)(v12 + 29504), "PlayerLevelChange", byte_1409ECB84, (unsigned int)a1[14], v16, v17);
	sub_1403C9C00();
	if (v5)
		sub_14018B900(v5, 0);
}
// 14045EE16: variable 'v3' is possibly undefined
// 14045EECA: variable 'v11' is possibly undefined
// 14045EEF4: variable 'v15' is possibly undefined
// 1409ECB84: using guessed type _BYTE byte_1409ECB84[4];
// 140B07E30: using guessed type wchar_t aSD_6[6];
// 140B66F70: using guessed type __int64 (__fastcall *off_140B66F70[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 14045EDD0: using guessed type char var_48[8];

