#include "../winhttp.h"

//----- (00000001404AAF00) ----------------------------------------------------
__int64 sub_1404AAF00()
{
	int* v1; // rax
	int* v2; // rbx
	int(__fastcall * *v3)(int*); // rax
	__int64 v4; // rbx

	if (qword_140C659C8)
		return 0i64;
	v1 = sub_14018B280(72i64, 0);
	v2 = v1;
	if (v1)
	{
		sub_1404AAFA0(v1);
		*(_QWORD*)v2 = off_140B68780;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = *(int(__fastcall***)(int*))v2;
	qword_140C659C8 = (__int64)v2;
	if ((*v3)(v2) >= 0)
		return 0i64;
	v4 = qword_140C659C8;
	if (qword_140C659C8)
	{
		sub_1404AB910((_QWORD*)qword_140C659C8);
		sub_14018B900(v4, 0);
	}
	qword_140C659C8 = 0i64;
	return 2147500037i64;
}
// 140B68780: using guessed type __int64 (__fastcall *off_140B68780[4])();
// 140C659C8: using guessed type __int64 qword_140C659C8;

