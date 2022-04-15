#include "../winhttp.h"

//----- (000000014056A2B0) ----------------------------------------------------
__int64 __fastcall sub_14056A2B0(__int64 a1, __int64 a2, int a3)
{
	int v6; // ecx
	__int64 v7; // r11
	unsigned __int64 v8; // r8
	__int64 v9; // rdx
	__int64 i; // rcx
	__int64 v12; // r11
	int v13; // eax
	int v14; // edx

	if (!(unsigned int)sub_1403A6930(qword_140C65898)
		|| !*(_DWORD*)(a1 + 32) && (unsigned int)(*(_DWORD*)(a1 + 36) - 17) <= 3)
	{
		return 0i64;
	}
	v6 = *(_DWORD*)(a1 + 128);
	if ((v6 & 0x80u) != 0)
		return 0i64;
	if (!a3 || (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 332i64) & 0x40000) == 0 && (v6 & 0x40) == 0)
	{
		if ((unsigned int)sub_14056A3F0(a1))
		{
			if (sub_140569A20(*(_QWORD*)(a1 + 64)))
			{
				if ((unsigned int)sub_14056B0A0(a1))
				{
					v8 = *(_QWORD*)(a1 + 304);
					v9 = 0i64;
					if (v8)
					{
						for (i = *(_QWORD*)(a1 + 296);
							*(_DWORD*)i != *(_DWORD*)a2 || *(_QWORD*)(i + 8) != *(_QWORD*)(a2 + 8);
							i += 16i64)
						{
							if (++v9 >= v8)
								return 0i64;
						}
						return 1i64;
					}
				}
			}
			return 0i64;
		}
		v12 = *(_QWORD*)(v7 + 120);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 64) + 456i64) && !(unsigned int)sub_1403A69B0())
			return 0i64;
		if (*(_DWORD*)a2 && *(_QWORD*)(a2 + 8) && v12)
		{
			v13 = *(_DWORD*)(v12 + 128);
			if (v13 == 20 || v13 == 23)
				v14 = *(_DWORD*)(v12 + 416);
			else
				v14 = 0;
			if (*(_DWORD*)a2 != v14)
				return 0i64;
		}
	}
	return 1i64;
}
// 14056A391: variable 'v7' is possibly undefined
// 14056A3B7: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

