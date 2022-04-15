#include "../winhttp.h"

//----- (0000000140527540) ----------------------------------------------------
unsigned __int64 __fastcall sub_140527540(struct _FILETIME a1)
{
	int v1; // ecx
	unsigned __int64 v2; // rbx
	__int64 v3; // rax
	unsigned __int64 v4; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	SystemTimeAsFileTime = a1;
	if ((dword_140C8AED0 & 1) == 0)
	{
		dword_140C8AEC8 = 0;
		dword_140C8AED0 |= 1u;
	}
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v1 = dword_140C8AEC8;
	v2 = (*(_QWORD*)&SystemTimeAsFileTime - *(_QWORD*)(qword_140C65970 + 48)) / 0x989680ui64;
	if (dword_140C8AEC8)
	{
		v4 = qword_140C8AEC0;
	}
	else
	{
		dword_140C8AEC8 = 1;
		v3 = sub_140200220(0x93Eu);
		if (!v3)
		{
			qword_140C8AEC0 = 0i64;
			return 0i64;
		}
		v4 = *(unsigned int*)(v3 + 4);
		v1 = dword_140C8AEC8;
		qword_140C8AEC0 = v4;
	}
	if (v2 >= v4)
		return 0i64;
	if (!v1)
	{
		dword_140C8AEC8 = 1;
		v4 = sub_140200220(0x93Eu);
		if (v4)
		{
			qword_140C8AEC0 = *(unsigned int*)(v4 + 4);
			return qword_140C8AEC0 - v2;
		}
		qword_140C8AEC0 = 0i64;
	}
	return v4 - v2;
}
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C8AEC0: using guessed type __int64 qword_140C8AEC0;
// 140C8AEC8: using guessed type int dword_140C8AEC8;
// 140C8AED0: using guessed type int dword_140C8AED0;

