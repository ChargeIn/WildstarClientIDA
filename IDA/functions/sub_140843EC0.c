#include "../winhttp.h"

//----- (0000000140843EC0) ----------------------------------------------------
__int64 sub_140843EC0()
{
	__int64 v0; // rax
	_QWORD* v1; // rcx
	__int64 result; // rax
	unsigned int v3; // edx
	_QWORD* v4; // rax

	dword_140C61F80 = 0;
	dword_140C61FC0 = 0;
	HIDWORD(qword_140C61FB8) = -1;
	qword_140C61FB0 = 0i64;
	v0 = sub_1408819F0(dword_140C10F20, 2048i64);
	v1 = (_QWORD*)v0;
	qword_140C61FC8 = v0;
	if (v0)
	{
		LODWORD(qword_140C61FB8) = 64;
		qword_140C61FB0 = v0;
		v3 = 0;
		do
		{
			v4 = v1 + 4;
			++v3;
			*v1 = v1 + 4;
			v1 += 4;
		} while (v3 < (unsigned int)qword_140C61FB8);
		*(v4 - 4) = 0i64;
		result = 1i64;
	}
	else
	{
		result = 52i64;
	}
	qword_140C61FA0 = 0i64;
	qword_140C61FA8 = 0i64;
	if ((_DWORD)result == 1)
		return sub_1408340B0();
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61F80: using guessed type int dword_140C61F80;
// 140C61FA0: using guessed type __int64 qword_140C61FA0;
// 140C61FA8: using guessed type __int64 qword_140C61FA8;
// 140C61FB0: using guessed type __int64 qword_140C61FB0;
// 140C61FB8: using guessed type __int64 qword_140C61FB8;
// 140C61FC0: using guessed type int dword_140C61FC0;
// 140C61FC8: using guessed type __int64 qword_140C61FC8;

