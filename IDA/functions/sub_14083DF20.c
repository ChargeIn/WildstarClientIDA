#include "../winhttp.h"

//----- (000000014083DF20) ----------------------------------------------------
__int64 __fastcall sub_14083DF20(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	_QWORD* v4; // rax
	__int64 v5; // r8
	_QWORD* v6; // rcx
	_QWORD* v9; // rbx
	_QWORD* v10; // rax
	__int64 result; // rax
	__int64 v12; // [rsp+28h] [rbp-10h]

	v4 = *(_QWORD**)(a1 + 16);
	LODWORD(v12) = a3;
	v5 = a1 + 16;
	v6 = *(_QWORD**)(a1 + 24);
	if (v4 == v6)
		goto LABEL_7;
	do
	{
		if (*v4 == a4)
			break;
		v4 += 3;
	} while (v4 != v6);
	if (v4 == v6)
	{
	LABEL_7:
		v9 = 0i64;
	}
	else
	{
		v9 = v4 + 1;
		if (v4 != (_QWORD*)-8i64)
		{
			*v9 = a2;
			goto LABEL_10;
		}
	}
	v10 = (_QWORD*)sub_14083EFD0(v5, 0);
	if (!v10)
		goto LABEL_11;
	v9 = v10 + 1;
	*v10 = a4;
	v10[1] = a2;
LABEL_10:
	v9[1] = v12;
LABEL_11:
	result = 52i64;
	if (v9)
		return 1i64;
	return result;
}
// 14083DF91: variable 'v12' is possibly undefined

