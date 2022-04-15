#include "../winhttp.h"

//----- (0000000140858670) ----------------------------------------------------
__int64 sub_140858670()
{
	__int64 result; // rax
	__int64 v1; // rdx
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // [rsp+28h] [rbp-20h]

	result = qword_140C62418;
	v1 = 0i64;
	v2 = qword_140C62418;
	if (qword_140C62418)
	{
		while (1)
		{
			v3 = *(_QWORD*)(v2 + 8);
			v5 = v1;
			if (v2 == result)
				qword_140C62418 = *(_QWORD*)(v2 + 8);
			else
				*(_QWORD*)(v1 + 8) = v3;
			v4 = qword_140C62420;
			if (v2 == qword_140C62420)
				v4 = v1;
			qword_140C62420 = v4;
			result = sub_140831560(v2);
			if (!v3)
				break;
			v1 = v5;
			v2 = v3;
			result = qword_140C62418;
		}
	}
	return result;
}
// 140C62418: using guessed type __int64 qword_140C62418;
// 140C62420: using guessed type __int64 qword_140C62420;

