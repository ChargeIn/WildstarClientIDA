#include "../winhttp.h"

//----- (0000000140877CB0) ----------------------------------------------------
__int64 __fastcall sub_140877CB0(__int64 a1, __int64 a2)
{
	__int64 v2; // r11
	unsigned int v6; // edi
	__int64 v7; // rdx
	int v8; // r8d
	int v9; // eax
	__int64 v10; // r8
	__int64 v11; // [rsp+40h] [rbp-38h] BYREF
	__int64 v12; // [rsp+48h] [rbp-30h] BYREF
	__int64 v13; // [rsp+50h] [rbp-28h] BYREF
	__int64 v14; // [rsp+58h] [rbp-20h] BYREF
	__int64 v15; // [rsp+60h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 32);
	if (!v2)
		return 2i64;
	v6 = 1;
	if (*(_WORD*)(a2 + 18))
	{
		v7 = *(unsigned int*)(a1 + 44);
		v8 = 0;
		v11 = 0i64;
		v12 = 0i64;
		v13 = 0i64;
		v14 = 0i64;
		v15 = 0i64;
		v9 = *(_DWORD*)(a1 + 16);
		for (LODWORD(v11) = v7; v9; v9 &= v9 - 1)
			++v8;
		v10 = (unsigned int)(v8 << 11);
		HIDWORD(v11) = v10;
		if ((*(int(__fastcall**)(__int64, __int64, __int64, __int64*, __int64*, __int64*, __int64*, _DWORD, __int64))(*(_QWORD*)v2 + 88i64))(
			v2,
			v7,
			v10,
			&v12,
			&v13,
			&v14,
			&v15,
			HIDWORD(v15),
			v11) < 0)
			v6 = 2;
		if (v6 == 1)
		{
			sub_1408776D0(a1, a2, (__int64)&v11);
			if ((*(int(__fastcall**)(_QWORD, __int64, _QWORD, __int64, _DWORD))(**(_QWORD**)(a1 + 32) + 152i64))(
				*(_QWORD*)(a1 + 32),
				v12,
				(unsigned int)v13,
				v14,
				v15) < 0)
				return 2;
		}
	}
	return v6;
}

