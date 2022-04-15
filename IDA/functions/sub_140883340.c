#include "../winhttp.h"

//----- (0000000140883340) ----------------------------------------------------
__int64 __fastcall sub_140883340(__int64 a1, char a2)
{
	__int64 v2; // r9
	__int64 v3; // r8
	__int64 v4; // rbx
	__int64 result; // rax
	__int64 v8; // rcx

	v2 = qword_140C62948;
	v3 = qword_140C62940;
	v4 = 0i64;
	result = (qword_140C62948 - qword_140C62940) >> 3;
	if ((_DWORD)result)
	{
		do
		{
			v8 = *(_QWORD*)(v3 + 8 * v4);
			if (v8)
			{
				sub_1408844E0(v8, a1 == v8, a2);
				v2 = qword_140C62948;
				v3 = qword_140C62940;
			}
			v4 = (unsigned int)(v4 + 1);
			result = (v2 - v3) >> 3;
		} while ((unsigned int)v4 < (unsigned int)result);
	}
	return result;
}
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;

