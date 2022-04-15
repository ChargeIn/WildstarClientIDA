#include "../winhttp.h"

//----- (0000000140065BB0) ----------------------------------------------------
__int64 __fastcall sub_140065BB0(__int64* a1, __int64 a2, __int64 a3, int a4)
{
	int v8; // edx
	__int64 v9; // rcx
	unsigned __int16* v10; // r8
	int v11; // eax
	__int64 v12; // rcx

	if (!a1)
	{
		*(_QWORD*)(a3 + 16) = -1i64;
		*(_DWORD*)a3 = 8;
		*(_DWORD*)(a3 + 8) = 255;
		return 8i64;
	}
	v8 = *((unsigned __int8*)a1 + 74) - 1;
	v9 = v8;
	if (v8 < 0)
		goto LABEL_8;
	v10 = (unsigned __int16*)a1 + v8 + 98;
	while (a2 != *(_QWORD*)(*(_QWORD*)(*a1 + 48) + 16i64 * *v10))
	{
		--v8;
		--v10;
		if (--v9 < 0)
			goto LABEL_8;
	}
	if (v8 < 0)
	{
	LABEL_8:
		if ((unsigned int)sub_140065BB0(a1[2], a2, a3, 0i64) == 8)
			return 8i64;
		v11 = sub_1400659F0(a1, a2, (_DWORD*)a3);
		*(_DWORD*)a3 = 7;
		*(_DWORD*)(a3 + 8) = v11;
		return 7i64;
	}
	else
	{
		*(_QWORD*)(a3 + 16) = -1i64;
		*(_DWORD*)a3 = 6;
		*(_DWORD*)(a3 + 8) = v8;
		if (!a4)
		{
			v12 = a1[5];
			if (v12)
			{
				while (*(unsigned __int8*)(v12 + 12) > v8)
				{
					v12 = *(_QWORD*)v12;
					if (!v12)
						return 6i64;
				}
				*(_BYTE*)(v12 + 13) = 1;
			}
		}
		return 6i64;
	}
}

