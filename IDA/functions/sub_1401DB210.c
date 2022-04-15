#include "../winhttp.h"

//----- (00000001401DB210) ----------------------------------------------------
__int64 sub_1401DB210()
{
	int* v0; // rax
	__int64 v1; // rbx
	int v2; // edi

	if (qword_140C63798)
	{
		(**(void(__fastcall***)(__int64))qword_140C63798)(qword_140C63798);
		return 0i64;
	}
	else
	{
		v0 = sub_14018B280(368i64, 0);
		if (v0)
			v1 = sub_1401DC200((__int64)v0);
		else
			v1 = 0i64;
		v2 = sub_1401DC490(v1);
		if (v2 >= 0)
		{
			qword_140C63798 = v1;
			return 0i64;
		}
		else
		{
			if (v1)
			{
				sub_1401DC2B0(v1);
				sub_14018B900(v1, 0);
			}
			return (unsigned int)v2;
		}
	}
}
// 140C63798: using guessed type __int64 qword_140C63798;

