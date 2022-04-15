#include "../winhttp.h"

//----- (0000000140165AC0) ----------------------------------------------------
__int64 __fastcall sub_140165AC0(_QWORD* a1)
{
	__int64 v2; // rbx
	int v3; // edi
	int v4; // eax
	__int64 v5; // rdx
	int v6; // eax
	char v7; // dl
	_DWORD* v8; // rcx

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u) - 1;
	v4 = sub_140056D60(a1, 3u);
	v5 = *(_QWORD*)(v2 + 664);
	v6 = v4 - 1;
	if ((v5 & 0x10) == 0)
	{
		if ((v5 & 8) != 0)
		{
			if (*(_DWORD*)(v2 + 1032) == v3)
			{
				v7 = 1;
				goto LABEL_10;
			}
		}
		else if (*(_DWORD*)(v2 + 1032) == v3 && *(_DWORD*)(v2 + 1036) == v6)
		{
			v7 = 1;
			goto LABEL_10;
		}
		v7 = 0;
		goto LABEL_10;
	}
	v7 = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v2 + 1152) + 8i64 * v3) + 9i64);
LABEL_10:
	v8 = (_DWORD*)a1[2];
	v8[2] = 1;
	*v8 = v7 != 0;
	a1[2] += 16i64;
	return 1i64;
}

