#include "../winhttp.h"

//----- (0000000140491BD0) ----------------------------------------------------
__int64 __fastcall sub_140491BD0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // [rsp+40h] [rbp+18h]

	v4 = sub_14021C940(a2);
	if (!v4)
		return 0i64;
	v6 = *(unsigned int*)(v4 + 20);
	if ((unsigned int)v6 >= 4)
		return 0i64;
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32 * v6 + 8);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v10 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v10 = v7;
	if (v10 == v7)
		return 0i64;
	else
		return *(_QWORD*)(v10 + 40);
}

