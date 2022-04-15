#include "../winhttp.h"

//----- (000000014049D7B0) ----------------------------------------------------
__int64 __fastcall sub_14049D7B0(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v7; // r9d
	unsigned int v8; // r8d
	unsigned int v9; // ecx
	unsigned __int16* v10; // rdx
	unsigned int v11; // ecx
	int v12; // r10d

	if (!a2 || a2 != *(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v7 = *(_DWORD*)(qword_140C65898 + 28144);
	v8 = 0;
	v9 = 0;
	if (v7)
	{
		v10 = (unsigned __int16*)(qword_140C65898 + 28148);
		while (*v10 != a4)
		{
			++v9;
			++v10;
			if (v9 >= v7)
				goto LABEL_8;
		}
		v11 = 1;
	}
	else
	{
	LABEL_8:
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
// 140C65898: using guessed type __int64 qword_140C65898;

