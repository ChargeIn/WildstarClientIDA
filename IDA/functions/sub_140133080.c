#include "../winhttp.h"

//----- (0000000140133080) ----------------------------------------------------
void __fastcall sub_140133080(__int64 a1)
{
	int v2; // edx
	int v3; // [rsp+20h] [rbp-28h] BYREF
	__int64 v4; // [rsp+28h] [rbp-20h]
	void(__fastcall * v5)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v6; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(a1 + 24))
	{
		if (!*(_QWORD*)(a1 + 112))
		{
			v2 = *(_DWORD*)(a1 + 64);
			*(_DWORD*)(a1 + 68) = v2;
			*(_DWORD*)(a1 + 88) = 0;
			v3 = 0;
			v6 = 0i64;
			v4 = a1;
			v5 = sub_1401330E0;
			sub_140195960(a1 + 96, v2, (__int64)&v3, 4);
			*(_DWORD*)(a1 + 72) = 1;
		}
	}
}

