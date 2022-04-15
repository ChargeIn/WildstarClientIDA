#include "../winhttp.h"

//----- (00000001404B42D0) ----------------------------------------------------
__int64 sub_1404B42D0()
{
	int* v0; // rbx
	int* v1; // rax

	if (!qword_140C659E8)
	{
		v0 = sub_14018B280(32i64, 0);
		if (v0)
		{
			v1 = sub_14018B280(48i64, 0);
			*((_QWORD*)v0 + 2) = 0i64;
			qword_140C659E8 = (__int64)v0;
			*((_QWORD*)v0 + 1) = v1;
			*(_BYTE*)v1 = 0;
			*(_QWORD*)(*((_QWORD*)v0 + 1) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v0 + 1) + 16i64) = *((_QWORD*)v0 + 1);
			*(_QWORD*)(*((_QWORD*)v0 + 1) + 24i64) = *((_QWORD*)v0 + 1);
			return 0i64;
		}
		qword_140C659E8 = 0i64;
	}
	return 0i64;
}
// 140C659E8: using guessed type __int64 qword_140C659E8;

