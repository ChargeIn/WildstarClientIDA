#include "../winhttp.h"

//----- (000000014082A860) ----------------------------------------------------
__int64 __fastcall sub_14082A860(__int64* a1, int a2, __int64 a3)
{
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	bool v11; // zf
	__int64 v12; // rcx

	v3 = *a1;
	v4 = a1[1];
	if (v3 == v4)
		return 20i64;
	do
	{
		if (*(_DWORD*)v3 == a2)
			break;
		v3 += 16i64;
	} while (v3 != v4);
	if (v3 == v4 || v3 == -8)
		return 20i64;
	v6 = *(_QWORD*)(v3 + 8);
	v7 = 0i64;
	v8 = *(_QWORD*)(v6 + 8);
	v9 = v8;
	if (v8)
	{
		while (v9 != a3)
		{
			v7 = v9;
			v9 = *(_QWORD*)(v9 + 8);
			if (!v9)
				return 1i64;
		}
		if (v9)
		{
			v11 = v9 == v8;
			v12 = *(_QWORD*)(v9 + 8);
			if (v11)
			{
				*(_QWORD*)(v6 + 8) = v12;
				return 1i64;
			}
			*(_QWORD*)(v7 + 8) = v12;
		}
	}
	return 1i64;
}

