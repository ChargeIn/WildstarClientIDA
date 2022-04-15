#include "../winhttp.h"

//----- (00000001402B8200) ----------------------------------------------------
__int64 __fastcall sub_1402B8200(__int64 a1, __int64 a2, int a3, int a4)
{
	int v5; // eax
	__int64 v6; // rcx
	__int64* v7; // rsi
	int v9; // edi
	__int64 v11; // rcx
	__int64 v12; // [rsp+30h] [rbp-38h] BYREF
	__int64 v13; // [rsp+38h] [rbp-30h] BYREF
	int v14[3]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v15; // [rsp+4Ch] [rbp-1Ch]
	int v16; // [rsp+54h] [rbp-14h]

	*(_DWORD*)(a1 + 4) = a4;
	*(_DWORD*)a1 = a3;
	v14[1] = 2;
	*(_QWORD*)(a1 + 8) = 0i64;
	v5 = *(_DWORD*)(a2 + 240);
	v16 = 0;
	v14[0] = 16 * a4;
	v14[2] = 4;
	*(_DWORD*)(a1 + 16) = v5 - 1;
	v6 = *(_QWORD*)(a2 + 6336);
	v15 = 0x10000i64;
	v7 = (__int64*)(a1 + 24);
	v9 = (*(__int64(__fastcall**)(__int64, int*, _QWORD, __int64))(*(_QWORD*)v6 + 24i64))(v6, v14, 0i64, a1 + 24);
	if (v9 >= 0)
	{
		if (*(_DWORD*)(a2 + 8664))
		{
			if (!(unsigned int)sub_1408194D0(*(_QWORD*)(a2 + 6336), *v7, (__int64)&v13))
			{
				v11 = *(_QWORD*)(a2 + 6336);
				LODWORD(v12) = 1;
				sub_140819670(v11, v13, 1u, 1u, (__int64)&v12);
			}
		}
		return 0i64;
	}
	else
	{
		v12 = 0x141DE7680i64;
		sub_1401A3130(14, 2, &v12, (unsigned int)v9);
		return (unsigned int)v9;
	}
}

