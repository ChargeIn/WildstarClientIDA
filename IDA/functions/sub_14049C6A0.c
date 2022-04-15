#include "../winhttp.h"

//----- (000000014049C6A0) ----------------------------------------------------
__int64 __fastcall sub_14049C6A0(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v7; // rcx
	unsigned int v8; // ebx
	int v9; // eax
	int v10; // edi

	if (!a2)
		return 0i64;
	v7 = *(_QWORD*)(a2 + 272);
	v8 = 0;
	if (v7)
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7);
	else
		v9 = 0;
	v10 = a3 - 1;
	if (v10)
	{
		if (v10 == 1)
		{
			LOBYTE(v8) = v9 != a4;
			return v8;
		}
	}
	else
	{
		return v9 == a4;
	}
	return v8;
}

