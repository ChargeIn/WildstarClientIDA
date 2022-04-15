#include "../winhttp.h"

//----- (00000001406005D0) ----------------------------------------------------
__int64 sub_1406005D0()
{
	int* v0; // rbx
	int* v1; // rax

	if (!qword_140C65BB0)
	{
		v0 = sub_14018B280(56i64, 0);
		if (v0)
		{
			v1 = sub_14018B280(24i64, 0);
			*((_QWORD*)v0 + 1) = v1;
			*(_QWORD*)v1 = v1;
			*(_QWORD*)(*((_QWORD*)v0 + 1) + 8i64) = *((_QWORD*)v0 + 1);
			sub_1400522F0((_QWORD*)v0 + 2);
			qword_140C65BB0 = (__int64)v0;
			return 0i64;
		}
		qword_140C65BB0 = 0i64;
	}
	return 0i64;
}
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

