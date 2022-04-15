#include "../winhttp.h"

//----- (0000000140866430) ----------------------------------------------------
char __fastcall sub_140866430(__int64 a1)
{
	char v1; // di
	_QWORD* v3; // rbx
	char v4; // si

	v1 = 0;
	v3 = *(_QWORD**)(*(_QWORD*)(a1 + 160) + 64i64);
	v4 = 1;
	if (v3)
	{
		do
		{
			if ((*(unsigned int(__fastcall**)(_QWORD*))(*v3 + 112i64))(v3) == 2)
			{
				if ((unsigned int)sub_14086DF90((__int64)v3) == 1
					|| (unsigned int)sub_14086DF90((__int64)v3) == 2
					|| (unsigned int)sub_14086DF90((__int64)v3) == 5)
				{
					return 0;
				}
				if ((unsigned int)sub_14086DF90((__int64)v3) == 4)
					v1 = 1;
			}
			v3 = (_QWORD*)v3[8];
		} while (v3);
		if (v1)
		{
			if ((*(_BYTE*)(a1 + 644) & 1) == 0)
				return 0;
		}
	}
	return v4;
}

