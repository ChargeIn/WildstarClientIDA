#include "../winhttp.h"

//----- (0000000140004F60) ----------------------------------------------------
__int64 __fastcall sub_140004F60(__int64 a1, __int64 a2)
{
	unsigned int i; // ebx
	unsigned __int64 v5; // rdx
	__int64 v6; // r9
	unsigned __int64 v7; // rcx
	_QWORD* v8; // rax
	int v9; // eax
	__int64 v11; // [rsp+20h] [rbp-48h] BYREF
	int v12; // [rsp+28h] [rbp-40h]
	__int64 v13; // [rsp+30h] [rbp-38h]
	int v14; // [rsp+38h] [rbp-30h]
	__int64 v15; // [rsp+40h] [rbp-28h]
	int v16; // [rsp+48h] [rbp-20h]
	__int64 v17; // [rsp+50h] [rbp-18h]

	for (i = 0; i < *(_DWORD*)(a2 + 4); ++i)
	{
		v5 = *(_QWORD*)(a1 + 128);
		v6 = *(_QWORD*)(a2 + 8) + 40i64 * i;
		v7 = 0i64;
		if (v5)
		{
			v8 = *(_QWORD**)(a1 + 120);
			while (*v8 != *(_QWORD*)v6)
			{
				++v7;
				v8 += 8;
				if (v7 >= v5)
					goto LABEL_6;
			}
		}
		else
		{
		LABEL_6:
			v11 = *(_QWORD*)v6;
			v9 = *(_DWORD*)(v6 + 8);
			v13 = 0i64;
			v14 = 0;
			v15 = 0i64;
			v16 = 0;
			v12 = v9;
			v17 = 0i64;
			sub_1400073F0((__int64*)(a1 + 120), (__int64)&v11);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
		}
	}
	return 0i64;
}

