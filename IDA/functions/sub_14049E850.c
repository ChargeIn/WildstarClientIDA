#include "../winhttp.h"

//----- (000000014049E850) ----------------------------------------------------
__int64 __fastcall sub_14049E850(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rax
	__int64 v5; // rdi
	BOOL v6; // eax
	unsigned int v7; // edx
	__int64 v8; // r8
	_QWORD* v9; // rax
	__int64 v10; // r9
	__int64 result; // rax
	int v12; // ebx
	unsigned __int64 v13; // [rsp+48h] [rbp+20h] BYREF

	v3 = qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v5)
	{
		v6 = sub_14079EE60(*(_QWORD*)(qword_140C65898 + 27728), v5 + 16, &v13);
		v7 = 0;
		if (v6)
		{
			v8 = *(_QWORD*)(*(_QWORD*)(v5 + 88) + 8 * v13);
			v3 = qword_140C65898;
		}
		else
		{
			v3 = qword_140C65898;
			v8 = 0i64;
		}
	}
	else
	{
		v7 = 0;
		v8 = 0i64;
	}
	v9 = *(_QWORD**)(v3 + 27728);
	if (v9 && v9[12])
		v10 = *(_QWORD*)(v9[11] + 8i64 * v9[13]);
	else
		v10 = 0i64;
	result = v8 == v10;
	v12 = a3 - 1;
	if (v12)
	{
		if (v12 == 1)
			LOBYTE(v7) = v8 != v10;
		return v7;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

