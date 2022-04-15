#include "../winhttp.h"

//----- (0000000140844BB0) ----------------------------------------------------
__int64 sub_140844BB0()
{
	__int64 v0; // rdx
	__int64 v1; // rcx
	__int64 v2; // r8
	_QWORD* v3; // rdx
	_QWORD* v4; // rcx
	__int64 v5; // rax
	unsigned __int64 v6; // rcx
	_QWORD* v7; // rbx
	__int64 result; // rax

	sub_140834610();
	sub_140843B30(v1, v0, v2);
	qword_140C61F90 = 0i64;
	qword_140C61F98 = 0i64;
	dword_140C61F88 = 0;
	if (HIDWORD(qword_140C61FB8))
	{
		v3 = (_QWORD*)qword_140C61FB0;
		while (1)
		{
			v4 = (_QWORD*)qword_140C61FA0;
			if (!qword_140C61FA0)
				break;
			qword_140C61FA0 = *(_QWORD*)qword_140C61FA0;
			v5 = qword_140C61FA8;
			if (v4 == (_QWORD*)qword_140C61FA8)
				v5 = 0i64;
			qword_140C61FA8 = v5;
			if ((unsigned __int64)v4 < qword_140C61FC8
				|| (unsigned __int64)v4 >= qword_140C61FC8 + 32 * (unsigned __int64)(unsigned int)qword_140C61FB8)
			{
				sub_140881720(dword_140C10F20, (__int64)v4);
				v3 = (_QWORD*)qword_140C61FB0;
				--dword_140C61FC0;
			}
			else
			{
				*v4 = v3;
				--dword_140C61FC0;
				v3 = v4;
				qword_140C61FB0 = (__int64)v4;
			}
		}
		v6 = qword_140C61FC8;
		if (v3)
		{
			do
			{
				v7 = (_QWORD*)*v3;
				if ((unsigned __int64)v3 < v6 || (unsigned __int64)v3 >= v6 + 32i64 * (unsigned int)qword_140C61FB8)
				{
					sub_140881720(dword_140C10F20, (__int64)v3);
					v6 = qword_140C61FC8;
				}
				v3 = v7;
			} while (v7);
		}
		if (v6)
			sub_140881720(dword_140C10F20, v6);
		qword_140C61FB8 = 0i64;
		qword_140C61FA0 = 0i64;
		qword_140C61FA8 = 0i64;
	}
	result = sub_14088C760((__int64)word_140C10F30);
	qword_140C61FD8 = 0i64;
	qword_140C61FD0 = 0i64;
	return result;
}
// 140844BBB: variable 'v1' is possibly undefined
// 140844BBB: variable 'v0' is possibly undefined
// 140844BBB: variable 'v2' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;
// 140C10F30: using guessed type _WORD word_140C10F30[12];
// 140C61F88: using guessed type int dword_140C61F88;
// 140C61F90: using guessed type __int64 qword_140C61F90;
// 140C61F98: using guessed type __int64 qword_140C61F98;
// 140C61FA0: using guessed type __int64 qword_140C61FA0;
// 140C61FA8: using guessed type __int64 qword_140C61FA8;
// 140C61FB0: using guessed type __int64 qword_140C61FB0;
// 140C61FB8: using guessed type __int64 qword_140C61FB8;
// 140C61FC0: using guessed type int dword_140C61FC0;
// 140C61FC8: using guessed type __int64 qword_140C61FC8;
// 140C61FD0: using guessed type __int64 qword_140C61FD0;
// 140C61FD8: using guessed type __int64 qword_140C61FD8;

