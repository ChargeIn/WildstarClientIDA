#include "../winhttp.h"

//----- (00000001403B5040) ----------------------------------------------------
__int64 __fastcall sub_1403B5040(__int64 a1)
{
	__int64 v1; // rdx
	unsigned int v2; // r9d
	__int64 v3; // rax
	int v4; // r10d
	__int64 v5; // rcx
	int v6; // eax
	__int64 v8; // [rsp+8h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 7168);
	v2 = 0;
	v3 = *(_QWORD*)(v1 + 8);
	v4 = 0;
	v5 = v1;
	while (v3)
	{
		if (*(int*)(v3 + 32) < 20)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v5 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v5 == v1 || (v6 = *(_DWORD*)(v5 + 32), v6 > 20) || v6 >= 20 && *(_DWORD*)(v5 + 36))
		v8 = v1;
	else
		v8 = v5;
	if (v8 != v1 && *(_DWORD*)(v8 + 48) == 1)
		v4 = *(_DWORD*)(v8 + 52);
	LOBYTE(v2) = v4 != 0;
	return v2;
}

