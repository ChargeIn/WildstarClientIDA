#include "../winhttp.h"

//----- (000000014015B0A0) ----------------------------------------------------
__int64 __fastcall sub_14015B0A0(__int64 a1, int a2)
{
	_DWORD* v4; // rax
	int v5; // ecx
	__int64 v6; // rax
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // rax
	_DWORD* v15; // rbx
	int v16; // eax
	_DWORD* v17; // rax
	__int64 v18; // r11
	int v19; // ecx
	__int64 v21; // [rsp+20h] [rbp-18h] BYREF
	int v22; // [rsp+28h] [rbp-10h]

	v4 = sub_1400580E0(a1, a2);
	v5 = v4[2];
	if (v5 == 2)
	{
		v6 = *(_QWORD*)v4;
	}
	else
	{
		if (v5 != 7)
			return 0i64;
		v6 = *(_QWORD*)v4 + 48i64;
	}
	if (!v6)
		return 0i64;
	v7 = (int*)sub_1400580E0(a1, a2);
	v8 = v7[2];
	if ((_DWORD)v8 == 5 || (_DWORD)v8 == 7)
		v9 = *(_QWORD*)(*(_QWORD*)v7 + 16i64);
	else
		v9 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v8 + 224);
	if (!v9)
		return 0i64;
	v10 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v10 = v9;
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v11 = *(_QWORD*)(a1 + 32);
	v12 = sub_140062650(a1, (unsigned __int64*)"Apollo.Menu", 0xBui64);
	v13 = *(_QWORD*)(a1 + 16);
	v21 = v12;
	v22 = 4;
	sub_14005E8E0(a1, v11 + 160, (int*)&v21, v13);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400586A0(a1, -1);
	sub_1400586A0(a1, -2);
	v14 = *(_QWORD*)(a1 + 16);
	v15 = (_DWORD*)(v14 - 32);
	if ((_DWORD*)(v14 - 16) == dword_140A12138 || v15 == dword_140A12138)
		v16 = 0;
	else
		v16 = sub_14005AC20(v14 - 16, (__int64)v15);
	*(_QWORD*)(a1 + 16) = v15;
	if (!v16)
		return 0i64;
	v17 = sub_1400580E0(a1, a2);
	v19 = v17[2];
	if (v19 == 2)
	{
		v18 = *(_QWORD*)v17;
	}
	else if (v19 == 7)
	{
		return *(_QWORD*)(*(_QWORD*)v17 + 48i64);
	}
	return *(_QWORD*)v18;
}
// 14015B1ED: variable 'v18' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

