#include "../winhttp.h"

//----- (0000000140437990) ----------------------------------------------------
__int64 sub_140437990()
{
	__int64 v0; // r9
	_QWORD* v2; // r8
	_QWORD* v3; // rcx
	_QWORD* v4; // rax
	_QWORD* v5; // [rsp+8h] [rbp+8h]

	v0 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v0)
		return 0i64;
	v2 = *(_QWORD**)(qword_140C658D8 + 72);
	v3 = v2;
	v4 = (_QWORD*)v2[1];
	while (v4)
	{
		if (v4[4] < *(_QWORD*)(v0 + 424))
		{
			v4 = (_QWORD*)v4[3];
		}
		else
		{
			v3 = v4;
			v4 = (_QWORD*)v4[2];
		}
	}
	if (v3 == v2 || (v5 = v3, *(_QWORD*)(v0 + 424) < v3[4]))
		v5 = *(_QWORD**)(qword_140C658D8 + 72);
	if (v5 == v2)
		return 0i64;
	else
		return v5[5];
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

