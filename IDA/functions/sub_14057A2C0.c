#include "../winhttp.h"

//----- (000000014057A2C0) ----------------------------------------------------
void __fastcall sub_14057A2C0(__int64 a1)
{
	__int64 v1; // rax
	int v3; // edi
	_DWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
	__int64 v5; // [rsp+28h] [rbp-38h]
	__int64(__fastcall * v6)(); // [rsp+30h] [rbp-30h]
	__int64 v7; // [rsp+38h] [rbp-28h]
	__int64 v8; // [rsp+40h] [rbp-20h] BYREF
	int v9; // [rsp+48h] [rbp-18h]
	__int64 v10; // [rsp+50h] [rbp-10h]
	int v11; // [rsp+70h] [rbp+10h] BYREF
	int v12; // [rsp+74h] [rbp+14h]

	v1 = *(_QWORD*)(a1 + 25744);
	if (v1 && *(_DWORD*)(v1 + 3408))
	{
		v8 = 0i64;
		v9 = 0;
		v10 = 0i64;
		sub_140799E80((unsigned int*)(a1 + 28808), (__int64)&v8);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 3408i64) && (_DWORD)v8)
		{
			v4[0] = dword_140C636A8;
			v4[1] = v8;
			v5 = v10;
			sub_1403F4900(qword_140C65898, 0x637u, (__int64)v4);
		}
		v3 = *(_DWORD*)(*(_QWORD*)(a1 + 25744) + 6120i64);
		if (v3 != *(_DWORD*)(a1 + 29008))
		{
			v11 = *(_DWORD*)(a1 + 29008);
			v12 = v3;
			sub_1403F4900(a1, 0x63Au, (__int64)&v11);
			*(_DWORD*)(a1 + 29008) = v3;
		}
		v4[0] = 0;
		v5 = sub_14001C280(a1);
		v7 = 0i64;
		v6 = sub_14057A2C0;
		sub_140195960(a1 + 28720, dword_140C3A004, (__int64)v4, 4);
		sub_14079A4F0((__int64)&v8);
		sub_14018B900(v10, 0);
	}
	else
	{
		sub_14079A4F0(a1 + 28808);
		sub_140195D70(a1 + 28720);
	}
}
// 140C3A004: using guessed type int dword_140C3A004;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

