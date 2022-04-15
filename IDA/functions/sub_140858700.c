#include "../winhttp.h"

//----- (0000000140858700) ----------------------------------------------------
__int64 __fastcall sub_140858700(unsigned int a1, __int64 a2)
{
	__int64* v2; // r8
	__int64* v5; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	char v8; // cl

	v2 = (__int64*)qword_140C62438;
	if (!qword_140C62438)
	{
		if ((unsigned int)dword_140C62448 >= HIDWORD(qword_140C62440))
			return 2i64;
		v5 = (__int64*)sub_1408819F0(dword_140C10F28, (unsigned int)(qword_140C62438 + 32));
		v2 = v5;
		if (!v5)
			return 2i64;
		*v5 = qword_140C62438;
		qword_140C62438 = (__int64)v5;
	}
	if (qword_140C62430)
	{
		*(_QWORD*)qword_140C62430 = v2;
		v2 = (__int64*)qword_140C62438;
	}
	else
	{
		qword_140C62428 = (__int64)v2;
	}
	qword_140C62430 = (__int64)v2;
	qword_140C62438 = *v2;
	*v2 = 0i64;
	++dword_140C62448;
	v6 = qword_140C62430 + 8;
	if (qword_140C62430 == -8)
		return 2i64;
	*(_DWORD*)(qword_140C62430 + 16) = a1;
	*(_QWORD*)v6 = a2;
	*(_DWORD*)(v6 + 12) = dword_140C62410;
	*(_BYTE*)(v6 + 16) = 0;
	v8 = byte_140C62414;
	result = 1i64;
	if (a1 <= 1)
		v8 = 1;
	byte_140C62414 = v8;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62410: using guessed type int dword_140C62410;
// 140C62414: using guessed type char byte_140C62414;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;

