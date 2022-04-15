#include "../winhttp.h"

//----- (0000000140867640) ----------------------------------------------------
__int64 __fastcall sub_140867640(__int64 a1)
{
	__int64 v1; // r8
	int v3; // edx
	bool v4; // cl
	unsigned __int16 v5; // ax

	v1 = *(_QWORD*)(a1 + 24);
	if (!v1)
		return 17i64;
	v3 = *(_DWORD*)(a1 + 40);
	if ((v3 & 1) != 0)
	{
		v4 = sub_1408679A0(a1);
	}
	else
	{
		v5 = ++ * (_WORD*)(a1 + 32);
		v4 = 0;
		if (v5 >= *(_WORD*)(a1 + 34))
		{
			if ((v3 & 2) != 0)
				*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 8);
			*(_WORD*)(a1 + 32) = 0;
			v4 = 1;
		}
		else if ((v3 & 2) != 0)
		{
			*(_QWORD*)(a1 + 24) = v1 + 24;
		}
	}
	if ((*(_BYTE*)(a1 + 40) & 2) == 0 || v4 && !*(_BYTE*)(a1 + 45))
		return 17i64;
	*(_WORD*)(a1 + 36) = 0;
	return 1i64;
}

