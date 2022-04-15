#include "../winhttp.h"

//----- (00000001405C13D0) ----------------------------------------------------
void __fastcall sub_1405C13D0(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int16* v4; // rax
	__int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

	if (!*(_DWORD*)(a1 + 48) || !*(_QWORD*)(a1 + 56))
	{
		v2 = *(_QWORD*)(qword_140C65898 + 27728);
		if (v2)
		{
			if (((*(_DWORD*)(v2 + 8) >> 3) & 1) != 0)
			{
				v3 = *(_QWORD*)(qword_140C65898 + 120);
				if (*(_DWORD*)(v3 + 416) == *(_DWORD*)a2 && *(_QWORD*)(v3 + 424) == a2[1])
				{
					v4 = sub_14034BDD0(v3, 406770);
					sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v4, 0, 0i64);
				}
				else
				{
					v5[0] = *a2;
					v5[1] = a2[1];
					sub_1403F4900(qword_140C65898, 0x5D1u, (__int64)v5);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

