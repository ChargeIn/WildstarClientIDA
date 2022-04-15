#include "../winhttp.h"

//----- (0000000140858850) ----------------------------------------------------
__int64 sub_140858850()
{
	__int64 v0; // rax
	_QWORD* v1; // rcx
	__int64 result; // rax
	unsigned int v3; // edx
	_QWORD* v4; // rax

	dword_140C62410 = 0;
	dword_140C62448 = 0;
	HIDWORD(qword_140C62440) = -1;
	qword_140C62438 = 0i64;
	v0 = sub_1408819F0(dword_140C10F28, 0x4000i64);
	v1 = (_QWORD*)v0;
	qword_140C62450 = v0;
	if (v0)
	{
		LODWORD(qword_140C62440) = 512;
		qword_140C62438 = v0;
		v3 = 0;
		do
		{
			v4 = v1 + 4;
			++v3;
			*v1 = v1 + 4;
			v1 += 4;
		} while (v3 < (unsigned int)qword_140C62440);
		*(v4 - 4) = 0i64;
		result = 1i64;
	}
	else
	{
		result = 52i64;
	}
	qword_140C62428 = 0i64;
	qword_140C62430 = 0i64;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62410: using guessed type int dword_140C62410;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;
// 140C62450: using guessed type __int64 qword_140C62450;

