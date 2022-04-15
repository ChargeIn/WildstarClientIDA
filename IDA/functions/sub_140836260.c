#include "../winhttp.h"

//----- (0000000140836260) ----------------------------------------------------
float __fastcall sub_140836260(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rax
	__int64 v5; // rax

	if (a2)
	{
		if (*(_QWORD*)(a1 + 48))
		{
			v3 = *(_QWORD**)(a1 + 48);
			while (v3[4] != *(_QWORD*)a2)
			{
				v3 = (_QWORD*)v3[1];
				if (!v3)
					return *(float*)(a2 + 8);
			}
			return *(float*)(v3[2] + 12i64);
		}
		else
		{
			return *(float*)(a2 + 8);
		}
	}
	else
	{
		v5 = sub_140834F40((__int64*)(a1 + 24), 0i64);
		if (v5)
			return *(float*)(v5 + 8);
		else
			return *(float*)(a1 + 16);
	}
}

