#include "../winhttp.h"

//----- (00000001403B3F70) ----------------------------------------------------
__int64 __fastcall sub_1403B3F70(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v5; // rax
	unsigned int* v6; // r10
	unsigned __int64 v7; // r8
	int v8; // r11d
	unsigned int v9; // edx
	unsigned int v10; // ecx
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // rcx

	if (!a3)
		return 0i64;
	v5 = sub_140245C00(*(_DWORD*)(168i64 * a2 + *(_QWORD*)(a1 + 48) + 64));
	v6 = (unsigned int*)v5;
	if (!v5)
		return 0i64;
	v7 = *(_QWORD*)(a3 + 5792);
	v8 = *(_DWORD*)(v5 + 8);
	v9 = 0;
	v10 = 0;
	if (v7)
	{
		v11 = *(_QWORD*)(a3 + 5784);
		v12 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v11 + 8 * v12) + 8i64) != v8)
		{
			v12 = ++v10;
			if (v10 >= v7)
				goto LABEL_12;
		}
		v13 = *(_QWORD*)(v11 + 8i64 * v10);
		if (v13 && *(_DWORD*)(v13 + 12))
			v9 = *(_DWORD*)(v13 + 84);
	}
LABEL_12:
	if (v9 >= v6[7])
		return (unsigned int)sub_1405E5E70((__int64*)(a3 + 5784), *v6) != 0 ? 0xB4 : 0;
	else
		return 181i64;
}

