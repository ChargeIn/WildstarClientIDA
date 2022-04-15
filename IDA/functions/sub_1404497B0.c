#include "../winhttp.h"

//----- (00000001404497B0) ----------------------------------------------------
__int64 sub_1404497B0()
{
	int* v1; // rax
	_QWORD* v2; // rbx
	int v3; // edi

	if (qword_140C658F8)
	{
		++dword_140C65900;
		return 0i64;
	}
	else
	{
		v1 = sub_14018B280(120i64, 0);
		if (v1)
			v2 = sub_140445C80(v1);
		else
			v2 = 0i64;
		v3 = sub_140445EE0((__int64)v2);
		if (v3 >= 0)
		{
			++dword_140C65900;
			qword_140C658F8 = (__int64)v2;
			return 0i64;
		}
		else
		{
			if (v2)
			{
				sub_140445D00(v2);
				sub_14018B900((__int64)v2, 0);
			}
			return (unsigned int)v3;
		}
	}
}
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65900: using guessed type int dword_140C65900;

