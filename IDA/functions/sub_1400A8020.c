#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A8020) ----------------------------------------------------
void __fastcall sub_1400A8020(__int64 a1)
{
	int v2; // r9d
	unsigned int v3; // edx
	unsigned int v4; // eax
	int v5; // eax
	unsigned int v6; // edx
	bool v7; // sf
	int v8; // edx
	int v9; // r9d
	int v10; // ecx
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v13)(); // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	if (!*(_QWORD*)(a1 + 80))
	{
		v2 = *(_DWORD*)a1;
		v3 = *(_DWORD*)(a1 + 16);
		v4 = dword_140C636A8 - *(_DWORD*)a1;
		if (v4 >= v3)
		{
			if (v4 < *(_DWORD*)(a1 + 8))
			{
				*(_DWORD*)a1 = v3 + v2;
			}
			else
			{
				*(_DWORD*)a1 = dword_140C636A8;
				*(_DWORD*)(a1 + 4) = 1;
			}
			goto LABEL_11;
		}
		v5 = *(_DWORD*)(a1 + 4);
		if (v5 != *(_DWORD*)(a1 + 12))
		{
			*(_DWORD*)(a1 + 4) = v5 + 1;
		LABEL_11:
			v10 = *(_DWORD*)(a1 + 24);
			if (v10)
			{
				if (v10 == 1)
					(*(void(__fastcall**)(_QWORD, _QWORD))(a1 + 40))(*(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 48));
			}
			else
			{
				(*(void(__fastcall**)(_QWORD))(a1 + 40))(*(_QWORD*)(a1 + 32));
			}
			return;
		}
		v6 = v3 - dword_140C636A8;
		v12 = a1;
		v7 = (int)(v2 + v6) < 0;
		v8 = v2 + v6;
		v9 = *(_DWORD*)(a1 + 56);
		v11 = 0;
		if (v7)
			v8 = 0;
		v14 = 0i64;
		v13 = sub_1400A8020;
		sub_140195960(a1 + 64, v8, (__int64)&v11, v9);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

