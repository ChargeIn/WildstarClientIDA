#include "../winhttp.h"

//----- (000000014049D470) ----------------------------------------------------
__int64 __fastcall sub_14049D470(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	unsigned __int64 v6; // r9
	int v7; // r10d
	unsigned int v8; // ecx
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rax
	unsigned int v11; // edx
	int v12; // r8d

	if (!a4)
		return a3 == 2;
	v6 = *(_QWORD*)(a4 + 704);
	v7 = *(_DWORD*)(a2 + 8);
	v8 = 0;
	v9 = 0i64;
	if (v6)
	{
		v10 = *(_DWORD**)(a4 + 696);
		while (*v10 != v7)
		{
			++v9;
			++v10;
			if (v9 >= v6)
				goto LABEL_7;
		}
		v11 = 1;
	}
	else
	{
	LABEL_7:
		v11 = 0;
	}
	v12 = a3 - 1;
	if (v12)
	{
		if (v12 == 1)
		{
			LOBYTE(v8) = v11 == 0;
			return v8;
		}
	}
	else
	{
		return v11;
	}
	return v8;
}

