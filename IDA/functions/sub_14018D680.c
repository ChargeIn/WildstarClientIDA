#include "../winhttp.h"

//----- (000000014018D680) ----------------------------------------------------
void sub_14018D680()
{
	int* v0; // rcx
	__int64 v1; // rax
	int* v2; // rax

	if (!dword_140C636AC)
	{
		v0 = sub_14018B280(24i64, 0);
		if (v0)
		{
			*((_QWORD*)v0 + 1) = 7i64;
			*((_QWORD*)v0 + 2) = 0i64;
			*(_QWORD*)v0 = &unk_140A40920;
		}
		else
		{
			v0 = 0i64;
		}
		v1 = qword_140C63770;
		dword_140C636AC = 1;
		qword_140C63770 = (__int64)v0;
		*((_QWORD*)v0 + 2) = v1;
	}
	if (!*(_QWORD*)&qword_140C63788)
	{
		v2 = sub_14018B280(4912i64, 0);
		if (v2)
			*(_QWORD*)&qword_140C63788 = sub_1401B3BA0((__int64)v2);
		else
			*(_QWORD*)&qword_140C63788 = 0i64;
	}
}
// 140C636AC: using guessed type int dword_140C636AC;
// 140C63770: using guessed type __int64 qword_140C63770;

