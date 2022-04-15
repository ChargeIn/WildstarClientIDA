#include "../winhttp.h"

//----- (00000001403D7BC0) ----------------------------------------------------
__int64 __fastcall sub_1403D7BC0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v8; // [rsp+40h] [rbp+18h]

	v3 = sub_1403D83C0(a1, a2);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(v3 + 16);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v8 = v5, a2 < *(_DWORD*)(v5 + 32)))
		v8 = v4;
	if (v8 == v4)
		return 0i64;
	else
		return *(_QWORD*)(v8 + 40);
}

