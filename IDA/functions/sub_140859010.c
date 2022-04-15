#include "../winhttp.h"

//----- (0000000140859010) ----------------------------------------------------
void sub_140859010()
{
	_QWORD* v0; // rdx
	_QWORD* v1; // rcx
	__int64 v2; // rax
	unsigned __int64 v3; // rcx
	_QWORD* v4; // rbx

	qword_140C62418 = 0i64;
	qword_140C62420 = 0i64;
	if (HIDWORD(qword_140C62440))
	{
		v0 = (_QWORD*)qword_140C62438;
		while (1)
		{
			v1 = (_QWORD*)qword_140C62428;
			if (!qword_140C62428)
				break;
			qword_140C62428 = *(_QWORD*)qword_140C62428;
			v2 = qword_140C62430;
			if (v1 == (_QWORD*)qword_140C62430)
				v2 = 0i64;
			qword_140C62430 = v2;
			if ((unsigned __int64)v1 < qword_140C62450
				|| (unsigned __int64)v1 >= qword_140C62450 + 32 * (unsigned __int64)(unsigned int)qword_140C62440)
			{
				sub_140881720(dword_140C10F28, (__int64)v1);
				v0 = (_QWORD*)qword_140C62438;
				--dword_140C62448;
			}
			else
			{
				*v1 = v0;
				--dword_140C62448;
				v0 = v1;
				qword_140C62438 = (__int64)v1;
			}
		}
		v3 = qword_140C62450;
		if (v0)
		{
			do
			{
				v4 = (_QWORD*)*v0;
				if ((unsigned __int64)v0 < v3 || (unsigned __int64)v0 >= v3 + 32i64 * (unsigned int)qword_140C62440)
				{
					sub_140881720(dword_140C10F28, (__int64)v0);
					v3 = qword_140C62450;
				}
				v0 = v4;
			} while (v4);
		}
		if (v3)
			sub_140881720(dword_140C10F28, v3);
		qword_140C62440 = 0i64;
		qword_140C62428 = 0i64;
		qword_140C62430 = 0i64;
	}
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C62418: using guessed type __int64 qword_140C62418;
// 140C62420: using guessed type __int64 qword_140C62420;
// 140C62428: using guessed type __int64 qword_140C62428;
// 140C62430: using guessed type __int64 qword_140C62430;
// 140C62438: using guessed type __int64 qword_140C62438;
// 140C62440: using guessed type __int64 qword_140C62440;
// 140C62448: using guessed type int dword_140C62448;
// 140C62450: using guessed type __int64 qword_140C62450;

