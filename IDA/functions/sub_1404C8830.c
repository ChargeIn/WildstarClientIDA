#include "../winhttp.h"

//----- (00000001404C8830) ----------------------------------------------------
__int64 sub_1404C8830()
{
	int* v0; // rax
	__int64 v1; // rax

	if (!qword_140C659F8)
	{
		v0 = sub_14018B280(288i64, 0);
		if (v0)
			qword_140C659F8 = sub_1404C89B0((__int64)v0);
		else
			qword_140C659F8 = 0i64;
	}
	v1 = qword_140C659F0;
	if (qword_140C659F0)
	{
		*(_QWORD*)(qword_140C659F0 + 656) = 0i64;
		*(_QWORD*)(v1 + 648) = sub_1404CA0D0;
	}
	return 0i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

