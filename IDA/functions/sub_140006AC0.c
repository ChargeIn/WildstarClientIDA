#include "../winhttp.h"

//----- (0000000140006AC0) ----------------------------------------------------
__int64 sub_140006AC0()
{
	int v0; // ebx
	int v1; // eax
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v5; // rax

	v0 = 0;
	if ((dword_140C8B1A0 & 1) != 0)
	{
		v1 = dword_140C8B1AC;
	}
	else
	{
		dword_140C8B1AC = 0;
		dword_140C8B1A0 |= 1u;
		v1 = 0;
	}
	if (qword_140C65898)
	{
		v2 = qword_140C65898 + 7160;
		if (v1)
		{
			v0 = dword_140C8B1A8;
		}
		else
		{
			dword_140C8B1AC = 1;
			v3 = sub_140200220(0x4E3u);
			if (v3)
				v0 = *(_DWORD*)(v3 + 4);
			dword_140C8B1A8 = v0;
		}
		return (unsigned int)(int)(float)(sub_1403AC060(v2, 33, 0) * (float)v0);
	}
	else if (v1)
	{
		return (unsigned int)dword_140C8B1A8;
	}
	else
	{
		dword_140C8B1AC = 1;
		v5 = sub_140200220(0x4E3u);
		if (v5)
			v0 = *(_DWORD*)(v5 + 4);
		dword_140C8B1A8 = v0;
		return (unsigned int)v0;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8B1A0: using guessed type int dword_140C8B1A0;
// 140C8B1A8: using guessed type int dword_140C8B1A8;
// 140C8B1AC: using guessed type int dword_140C8B1AC;

