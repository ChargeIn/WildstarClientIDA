#include "../winhttp.h"

//----- (00000001403448E0) ----------------------------------------------------
int sub_1403448E0()
{
	_QWORD* v0; // rax
	__int64 v1; // rdx
	__int64 v2; // rdx
	int result; // eax

	do
	{
		v0 = (_QWORD*)qword_140C7A200;
		if (!qword_140C7A200)
			break;
		qword_140C7A200 = *(_QWORD*)(qword_140C7A200 + 24);
		if (v0 == (_QWORD*)qword_140C7A208)
			qword_140C7A208 = v0[2];
		v1 = v0[3];
		if (v1)
			*(_QWORD*)(v1 + 16) = v0[2];
		v2 = v0[2];
		if (v2)
			*(_QWORD*)(v2 + 24) = v0[3];
		v0[3] = 0i64;
		v0[2] = 0i64;
	} while (v0[1]);
	result = (int)qword_140C7A228;
	if (qword_140C7A228)
		return CloseHandle(qword_140C7A228);
	return result;
}
// 140C7A200: using guessed type __int64 qword_140C7A200;
// 140C7A208: using guessed type __int64 qword_140C7A208;

