#include "../winhttp.h"

//----- (0000000140873860) ----------------------------------------------------
__int64 __fastcall sub_140873860(__int64 a1, int* a2)
{
	__int64 v4; // rcx
	unsigned int v5; // eax
	unsigned int v6; // edx
	__int64 v7; // rcx
	unsigned int v8; // eax
	unsigned int v9; // ecx
	int v10; // eax
	unsigned int v11; // ecx
	unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
	int v13; // [rsp+40h] [rbp+18h] BYREF

	if (*(_BYTE*)(a1 + 44))
		return 17i64;
	v4 = *(_QWORD*)(a1 + 56);
	v12 = *a2;
	v5 = (*(__int64(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v4 + 64i64))(v4, &v12);
	*(_DWORD*)(a1 + 196) += v12;
	v6 = v5;
	v12 = *(_DWORD*)(a1 + 196) - *(_DWORD*)(a1 + 192);
	if (v12 >= 0x400)
	{
		do
		{
			if (v6 != 45)
				break;
			v7 = *(_QWORD*)(a1 + 8);
			v13 = 1024;
			v8 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 24i64))(v7, &v13);
			v9 = v12;
			v6 = v8;
			v10 = v13;
			*(_DWORD*)(a1 + 192) += v13;
			v11 = v9 - v10;
			v12 = v11;
			*(_BYTE*)(a1 + 44) = v6 == 17;
		} while (v11 >= 0x400);
	}
	return v6;
}

