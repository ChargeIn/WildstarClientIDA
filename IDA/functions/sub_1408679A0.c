#include "../winhttp.h"

//----- (00000001408679A0) ----------------------------------------------------
_BOOL8 __fastcall sub_1408679A0(__int64 a1)
{
	int v1; // r8d
	_BYTE* v2; // rdx
	bool v4; // bl
	_BYTE* v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // ecx
	int v8; // edx
	bool v9; // zf
	__int64 v10; // rax

	v1 = *(unsigned __int16*)(a1 + 34);
	v2 = *(_BYTE**)(a1 + 16);
	v4 = 1;
	v5 = v2;
	if (!*(_WORD*)(a1 + 34))
		goto LABEL_19;
	v6 = *(unsigned __int16*)(a1 + 34);
	do
	{
		v4 = v4 && *v5++;
		--v6;
	} while (v6);
	if (v4)
	{
	LABEL_19:
		if (v2)
		{
			v7 = 0;
			if (v1)
			{
				do
				{
					*v2 = 0;
					++v7;
					++v2;
				} while (v7 < *(unsigned __int16*)(a1 + 34));
			}
		}
	}
	v8 = (int)sub_1407DDB28() % *(unsigned __int16*)(a1 + 34);
	v9 = (*(_BYTE*)(a1 + 40) & 2) == 0;
	*(_WORD*)(a1 + 32) = v8;
	if (!v9)
		*(_QWORD*)(a1 + 24) = *(_QWORD*)(a1 + 8) + 24i64 * (unsigned __int16)v8;
	v10 = *(_QWORD*)(a1 + 16);
	if (v10)
		*(_BYTE*)((unsigned __int16)v8 + v10) = 1;
	return v4;
}

