#include "../winhttp.h"

//----- (00000001405846F0) ----------------------------------------------------
__int64 __fastcall sub_1405846F0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // rbp
	unsigned __int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // rsi

	result = sub_140404300(qword_140C658A0, a2);
	v3 = result;
	if (result)
	{
		v4 = qword_140C7DE20;
		v5 = 0i64;
		if (qword_140C7DE20)
		{
			v6 = qword_140C7DE18;
			while (sub_140580040(*(__int64**)(v6 + 8 * v5)) != v3)
			{
				if (++v5 >= v4)
					return 0i64;
			}
			return *(_QWORD*)(v6 + 8 * v5);
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

