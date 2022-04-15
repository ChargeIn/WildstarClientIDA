#include "../winhttp.h"

//----- (0000000140516AE0) ----------------------------------------------------
char __fastcall sub_140516AE0(__int64 a1)
{
	unsigned int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rdx
	__int64 v5; // rax
	char result; // al
	unsigned __int64 v7; // [rsp+30h] [rbp-18h] BYREF
	int v8; // [rsp+38h] [rbp-10h]
	__int64 v9; // [rsp+50h] [rbp+8h]

	v2 = *(_DWORD*)(a1 + 16);
	v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v9 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	result = v9;
	if (v9 != v3)
	{
		result = v9 + 40;
		if (v9 != -40)
		{
			v7 = 0i64;
			v8 = 0;
			v7 = __PAIR64__(v2, *(_DWORD*)(v9 + 44));
			v8 = 1;
			sub_1403F4900(qword_140C65898, 0x14Fu, (__int64)&v7);
			return sub_1400D4040(*(_QWORD*)(a1 + 8), "LootItemRequested", *(char**)(a1 + 8), L"i", *(_DWORD*)(a1 + 16));
		}
	}
	return result;
}
// 140B6B8F8: using guessed type wchar_t aI_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;

