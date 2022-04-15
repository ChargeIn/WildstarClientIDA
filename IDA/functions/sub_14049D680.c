#include "../winhttp.h"

//----- (000000014049D680) ----------------------------------------------------
bool __fastcall sub_14049D680(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	int v4; // eax
	BOOL v5; // eax
	BOOL v6; // edx
	int v7; // r11d
	int v8; // r11d

	if (a2 && ((v4 = *(_DWORD*)(a2 + 128), v4 == 20) || v4 == 23))
	{
		v5 = sub_1403BB170(qword_140C65898, a4);
		v6 = v5;
		v8 = v7 - 1;
		if (v8)
		{
			LOBYTE(v5) = 0;
			if (v8 == 1)
				LOBYTE(v5) = !v6;
		}
	}
	else
	{
		LOBYTE(v5) = 0;
	}
	return v5;
}
// 14049D6AD: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

