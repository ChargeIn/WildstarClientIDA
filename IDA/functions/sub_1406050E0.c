#include "../winhttp.h"

//----- (00000001406050E0) ----------------------------------------------------
void __fastcall sub_1406050E0(__int64 a1, __int64* a2)
{
	__int64 v2; // rsi
	__int64 v5; // rcx
	_QWORD* v6; // rdx
	__int64 v7; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+30h] [rbp-18h]
	unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 96))
	{
		v5 = *(_QWORD*)(qword_140C65898 + 29272);
		if (v5 && *(_DWORD*)(v5 + 20))
		{
			sub_140604E20(a1, a1 + 80, 23);
		}
		else if (sub_14079EE60(v2, (__int64)a2, &v11)
			&& *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v11)
			&& (*(_DWORD*)(a1 + 80) != *(_DWORD*)a2 || *(_QWORD*)(a1 + 88) != a2[1]))
		{
			v6 = *(_QWORD**)(a1 + 64);
			if (v6 && v6[12])
				v7 = *(_QWORD*)(v6[11] + 8i64 * v6[13]);
			else
				v7 = 0i64;
			if (*(_DWORD*)(v7 + 272) != *(_DWORD*)a2 || *(_QWORD*)(v7 + 280) != a2[1])
			{
				v8 = 0i64;
				v9 = 0i64;
				v10 = 0i64;
				v8 = v6[9];
				v9 = *a2;
				v10 = a2[1];
				sub_1403F4900(qword_140C65898, 0x43Eu, (__int64)&v8);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

