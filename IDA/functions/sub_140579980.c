#include "../winhttp.h"

//----- (0000000140579980) ----------------------------------------------------
__int64 __fastcall sub_140579980(__int64 a1, int a2)
{
	_QWORD* v2; // rdi
	__int64 result; // rax
	_QWORD* i; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rdx
	_QWORD* v8; // rcx
	_QWORD* v9; // [rsp+30h] [rbp+8h] BYREF

	v9 = (_QWORD*)a1;
	v2 = (_QWORD*)qword_140C65B78;
	result = *(_QWORD*)qword_140C65B78;
	*(_QWORD*)qword_140C65B78 = 0i64;
	v9 = (_QWORD*)result;
	if (result)
	{
		*(_QWORD*)(result + 24) = &v9;
		for (i = v9; v9; i = v9)
		{
			v6 = (_QWORD*)i[3];
			if (v6)
				*v6 = i[4];
			v7 = i[4];
			v8 = i + 4;
			if (v7)
				*(_QWORD*)(v7 + 24) = i[3];
			*v8 = 0i64;
			i[3] = v2;
			*v8 = *v2;
			*v2 = i;
			if (*v8)
				*(_QWORD*)(*v8 + 24i64) = v8;
			result = (*(__int64(__fastcall**)(_QWORD*))(*i + 56i64))(i);
			if ((_DWORD)result == a2)
				result = (*(__int64(__fastcall**)(_QWORD*))(*i + 48i64))(i);
		}
	}
	return result;
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

