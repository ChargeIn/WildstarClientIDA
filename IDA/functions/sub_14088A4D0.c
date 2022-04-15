#include "../winhttp.h"

//----- (000000014088A4D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14088A4D0(__int64 a1)
{
	unsigned __int64 result; // rax
	_QWORD* v3; // rdx
	_QWORD* v4; // r8
	__int64 v5; // rax
	unsigned __int64 v6; // r8
	_QWORD* v7; // rbx

	sub_140828EB0(-1i64);
	sub_140828530();
	while (qword_140C629D8)
		WaitForSingleObject(qword_140C629D0, 0xFFFFFFFF);
	if (qword_140C629D0)
		CloseHandle(qword_140C629D0);
	qword_140C629D0 = 0i64;
	qword_140C629D8 = 0i64;
	qword_140C629E0 = 0i64;
	result = sub_14088C760((__int64)&unk_140C629F0);
	if (HIDWORD(qword_140C62A48))
	{
		v3 = (_QWORD*)qword_140C62A40;
		while (1)
		{
			v4 = (_QWORD*)qword_140C62A30;
			if (!qword_140C62A30)
				break;
			qword_140C62A30 = *(_QWORD*)qword_140C62A30;
			v5 = qword_140C62A38;
			if (v4 == (_QWORD*)qword_140C62A38)
				v5 = 0i64;
			qword_140C62A38 = v5;
			if ((unsigned __int64)v4 < qword_140C62A58
				|| (result = qword_140C62A58 + 24i64 * (unsigned int)qword_140C62A48, (unsigned __int64)v4 >= result))
			{
				result = sub_140881720(dword_140C10F20, (__int64)v4);
				v3 = (_QWORD*)qword_140C62A40;
				--dword_140C62A50;
			}
			else
			{
				*v4 = v3;
				--dword_140C62A50;
				v3 = v4;
				qword_140C62A40 = (__int64)v4;
			}
		}
		v6 = qword_140C62A58;
		if (v3)
		{
			do
			{
				v7 = (_QWORD*)*v3;
				if ((unsigned __int64)v3 < v6
					|| (result = v6 + 24i64 * (unsigned int)qword_140C62A48, (unsigned __int64)v3 >= result))
				{
					result = sub_140881720(dword_140C10F20, (__int64)v3);
					v6 = qword_140C62A58;
				}
				v3 = v7;
			} while (v7);
		}
		if (v6)
			result = sub_140881720(dword_140C10F20, v6);
		qword_140C62A48 = 0i64;
		qword_140C62A30 = 0i64;
		qword_140C62A38 = 0i64;
	}
	if (a1)
	{
		qword_140C629C0 = 0i64;
		return sub_140881720(dword_140C10F20, a1);
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;
// 140C629D8: using guessed type __int64 qword_140C629D8;
// 140C629E0: using guessed type __int64 qword_140C629E0;
// 140C62A30: using guessed type __int64 qword_140C62A30;
// 140C62A38: using guessed type __int64 qword_140C62A38;
// 140C62A40: using guessed type __int64 qword_140C62A40;
// 140C62A48: using guessed type __int64 qword_140C62A48;
// 140C62A50: using guessed type int dword_140C62A50;
// 140C62A58: using guessed type __int64 qword_140C62A58;

