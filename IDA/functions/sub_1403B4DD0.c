#include "../winhttp.h"

//----- (00000001403B4DD0) ----------------------------------------------------
__int64 __fastcall sub_1403B4DD0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rcx
	__int64 v3; // rax
	int v4; // eax
	__int64 v6; // [rsp+8h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 7168);
	v2 = v1;
	v3 = *(_QWORD*)(v1 + 8);
	while (v3)
	{
		if (*(int*)(v3 + 32) < 26)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v2 = v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v2 == v1 || (v4 = *(_DWORD*)(v2 + 32), v4 > 26) || v4 >= 26 && *(_DWORD*)(v2 + 36))
		v6 = v1;
	else
		v6 = v2;
	if (v6 == v1 || *(_DWORD*)(v6 + 48) != 1)
		return 0i64;
	else
		return *(unsigned int*)(v6 + 52);
}

