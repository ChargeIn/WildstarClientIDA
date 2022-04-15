#include "../winhttp.h"

//----- (000000014014EAB0) ----------------------------------------------------
__int64 __fastcall sub_14014EAB0(_QWORD* a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	_QWORD* v6; // r14
	__int64 v7; // rax
	__int64 v8; // r9
	int* v9; // rax
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	v4 = sub_140059170(a1, 8ui64);
	v5 = a1[4];
	v6 = (_QWORD*)v4;
	v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Apollo.WindowLocation", 0x15ui64);
	v8 = a1[2];
	v11 = v7;
	v12 = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v11, v8);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	v9 = sub_14018B280(96i64, 0);
	if (v9)
	{
		*(_OWORD*)v9 = *(_OWORD*)a2;
		*((_QWORD*)v9 + 2) = *(_QWORD*)(a2 + 16);
		*((_QWORD*)v9 + 3) = *(_QWORD*)(a2 + 24);
		*((_QWORD*)v9 + 4) = *(_QWORD*)(a2 + 32);
		*((_QWORD*)v9 + 5) = *(_QWORD*)(a2 + 40);
		v9[12] = *(_DWORD*)(a2 + 48);
		v9[13] = *(_DWORD*)(a2 + 52);
		v9[14] = *(_DWORD*)(a2 + 56);
		v9[15] = *(_DWORD*)(a2 + 60);
		v9[16] = *(_DWORD*)(a2 + 64);
		v9[17] = *(_DWORD*)(a2 + 68);
		v9[18] = *(_DWORD*)(a2 + 72);
		v9[19] = *(_DWORD*)(a2 + 76);
		v9[20] = *(_DWORD*)(a2 + 80);
		*v6 = v9;
	}
	else
	{
		*v6 = 0i64;
	}
	return 1i64;
}

