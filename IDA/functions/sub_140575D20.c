#include "../winhttp.h"

//----- (0000000140575D20) ----------------------------------------------------
__int64 __fastcall sub_140575D20(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 result; // rax
	_QWORD* i; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // r8
	_QWORD* v6; // rdx
	_QWORD* v7; // [rsp+40h] [rbp+8h] BYREF

	v7 = (_QWORD*)a1;
	v1 = (_QWORD*)qword_140C65B78;
	result = *(_QWORD*)qword_140C65B78;
	*(_QWORD*)qword_140C65B78 = 0i64;
	v7 = (_QWORD*)result;
	if (result)
	{
		*(_QWORD*)(result + 24) = &v7;
		for (i = v7; v7; i = v7)
		{
			v4 = (_QWORD*)i[3];
			if (v4)
				*v4 = i[4];
			v5 = i[4];
			v6 = i + 4;
			if (v5)
				*(_QWORD*)(v5 + 24) = i[3];
			*v6 = 0i64;
			i[3] = v1;
			*v6 = *v1;
			*v1 = i;
			if (*v6)
				*(_QWORD*)(*v6 + 24i64) = v6;
			result = (*(__int64(__fastcall**)(_QWORD*))(*i + 8i64))(i);
		}
	}
	return result;
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

