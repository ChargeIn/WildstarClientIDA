#include "../winhttp.h"

//----- (000000014049E900) ----------------------------------------------------
__int64 __fastcall sub_14049E900(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v6; // rdi
	BOOL v7; // eax
	unsigned int v8; // edx
	__int64 v9; // r8
	int v10; // ebx
	unsigned __int64 v11; // [rsp+48h] [rbp+20h] BYREF

	if (!a4)
		return a3 == 2;
	v6 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v6)
	{
		v7 = sub_14079EE60(*(_QWORD*)(qword_140C65898 + 27728), a4 + 416, &v11);
		v8 = 0;
		if (v7)
		{
			v9 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v11);
			goto LABEL_8;
		}
	}
	else
	{
		v8 = 0;
	}
	v9 = 0i64;
LABEL_8:
	v10 = a3 - 1;
	if (v10)
	{
		if (v10 == 1)
		{
			LOBYTE(v8) = v9 == 0;
			return v8;
		}
	}
	else
	{
		return v9 != 0;
	}
	return v8;
}
// 140C65898: using guessed type __int64 qword_140C65898;

