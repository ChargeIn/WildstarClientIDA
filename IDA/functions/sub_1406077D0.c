#include "../winhttp.h"

//----- (00000001406077D0) ----------------------------------------------------
__int64 __fastcall sub_1406077D0(__int64 a1, int a2, __int64 a3, int a4)
{
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int16* v7; // rax
	__int64 v8; // rcx
	int v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	void(__fastcall * v12)(int*); // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	*(_DWORD*)a1 = a4;
	*(_QWORD*)(a1 + 4) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v5 = a1 + 16;
	v10 = 0;
	*(_QWORD*)(v5 + 40) = 0i64;
	*(_QWORD*)(v5 + 48) = 0i64;
	*(_DWORD*)(v5 + 68) = 0;
	*(_DWORD*)v5 = 1414420037;
	v13 = 0i64;
	*(_DWORD*)(a1 + 88) = a2;
	*(_DWORD*)(a1 + 92) = 1000;
	v11 = a1;
	v12 = sub_1406078A0;
	sub_140195960(v5, 1000, (__int64)&v10, 4);
	v7 = sub_14034BDD0(v6, *(_DWORD*)a1);
	if (v7 && *v7)
	{
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CountdownTick", L"S", v7);
		return a1;
	}
	else
	{
		sub_140607990(v8, *(_DWORD*)(a1 + 88) / 1000);
		return a1;
	}
}
// 14060783B: variable 'v6' is possibly undefined
// 14060788A: variable 'v8' is possibly undefined
// 1409EED2C: using guessed type wchar_t aS_56[2];
// 140C65898: using guessed type __int64 qword_140C65898;

