#include "../winhttp.h"

//----- (0000000140343ED0) ----------------------------------------------------
int sub_140343ED0()
{
	_QWORD* v0; // rax
	__int64 v1; // rdx
	__int64 v2; // rdx
	int result; // eax

	do
	{
		v0 = (_QWORD*)qword_140C7A0C8;
		if (!qword_140C7A0C8)
			break;
		qword_140C7A0C8 = *(_QWORD*)(qword_140C7A0C8 + 24);
		if (v0 == (_QWORD*)qword_140C7A0D0)
			qword_140C7A0D0 = v0[2];
		v1 = v0[3];
		if (v1)
			*(_QWORD*)(v1 + 16) = v0[2];
		v2 = v0[2];
		if (v2)
			*(_QWORD*)(v2 + 24) = v0[3];
		v0[3] = 0i64;
		v0[2] = 0i64;
	} while (v0[1]);
	result = (int)qword_140C7A0F0;
	if (qword_140C7A0F0)
		return CloseHandle(qword_140C7A0F0);
	return result;
}
// 140C7A0C8: using guessed type __int64 qword_140C7A0C8;
// 140C7A0D0: using guessed type __int64 qword_140C7A0D0;

