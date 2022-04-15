#include "../winhttp.h"

//----- (0000000140366BD0) ----------------------------------------------------
__int64 __fastcall sub_140366BD0(__int64 a1, int a2)
{
	int v4; // ebp
	_QWORD* i; // rbx
	__int64 v6; // rdx
	__int64 v7; // rdx

	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 144i64))(qword_140C65688, a1 + 3504);
	if (!*(_DWORD*)(a1 + 4336) || a2 != 18)
	{
		v4 = a2 == 9;
		if ((*(_DWORD*)(a1 + 128) & 0x10000) == 0)
			goto LABEL_14;
		for (i = *(_QWORD**)(a1 + 5464); i; i = (_QWORD*)i[41])
		{
			if ((unsigned int)sub_1403915C0((__int64)i, a1 + 3504, v4))
			{
				if (*(_QWORD**)(a1 + 5432) == i)
				{
					v6 = i[3];
					if (v6)
						v7 = v6 + 64;
					else
						v7 = *(_QWORD*)(i[1] + 16i64) + 3504i64;
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 176i64))(qword_140C65688, v7);
				}
				else
				{
					sub_1403916D0((__int64)i);
				}
			}
		}
		if (!*(_QWORD*)(a1 + 5432))
			LABEL_14:
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 176i64))(qword_140C65688, a1 + 3504);
	}
	return 0i64;
}
// 140C65688: using guessed type __int64 qword_140C65688;

