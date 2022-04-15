#include "../winhttp.h"

//----- (0000000140877DE0) ----------------------------------------------------
__int64 __fastcall sub_140877DE0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	unsigned int v6; // edi
	int v7; // r8d
	__int64 v8; // rdx
	unsigned int v9; // edi
	int* v10; // rbp
	__int64 v11; // rcx
	__int64 v12; // r9
	__int64 v13; // r8
	unsigned int v14; // ecx
	int* v15; // rdx
	int v16; // [rsp+20h] [rbp-58h]
	int* v17; // [rsp+48h] [rbp-30h] BYREF
	__int64 v18; // [rsp+50h] [rbp-28h] BYREF
	__int64 v19; // [rsp+58h] [rbp-20h] BYREF
	__int64 v20; // [rsp+60h] [rbp-18h] BYREF

	v3 = *(_QWORD*)(a1 + 32);
	if (!v3)
		return 2i64;
	v6 = 1;
	if (a2)
	{
		v7 = *(unsigned __int16*)(a1 + 64);
		v8 = *(unsigned int*)(a1 + 44);
		v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		v20 = 0i64;
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD, int**, __int64*, __int64*, __int64*, _DWORD, unsigned __int64))(*(_QWORD*)v3 + 88i64))(
			v3,
			v8,
			(unsigned int)(a2 * v7),
			&v17,
			&v18,
			&v19,
			&v20,
			0,
			__PAIR64__(a2 * v7, v8)) < 0)
			v6 = 2;
		if (v6 == 1)
		{
			v9 = a2 * *(unsigned __int16*)(a1 + 64);
			v10 = v17;
			sub_1407E4830(v17, 0i64, v9);
			v11 = *(_QWORD*)(a1 + 8);
			if (v11)
				sub_140877220(v11, (__int64)v10, v9);
			*(_DWORD*)(a1 + 44) += v9;
			v12 = v19;
			v13 = (unsigned int)v18;
			v14 = *(_DWORD*)(a1 + 44);
			v6 = 1;
			if (v14 >= *(_DWORD*)(a1 + 40))
				v14 = 0;
			v15 = v17;
			v16 = v20;
			*(_DWORD*)(a1 + 44) = v14;
			if ((*(int(__fastcall**)(_QWORD, int*, __int64, __int64, int))(**(_QWORD**)(a1 + 32) + 152i64))(
				*(_QWORD*)(a1 + 32),
				v15,
				v13,
				v12,
				v16) < 0)
				return 2;
		}
	}
	return v6;
}

