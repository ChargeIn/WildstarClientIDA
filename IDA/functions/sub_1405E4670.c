#include "../winhttp.h"

//----- (00000001405E4670) ----------------------------------------------------
__int64 __fastcall sub_1405E4670(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 v4; // rsi
	unsigned __int64 v6; // rdi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF

	v10 = a1;
	v4 = a4;
	if (a2)
	{
		v10 = a2;
		v6 = qword_140C4DF08(&v10);
		v7 = qword_140C4DF00 + 8 * (v6 % qword_140C4DEF8);
		if (*(_QWORD*)v7)
		{
			while (v6 != **(_QWORD**)v7 || !(unsigned int)qword_140C4DF10(&v10, *(_QWORD*)v7 + 16i64))
			{
				v7 = *(_QWORD*)v7 + 8i64;
				if (!*(_QWORD*)v7)
					goto LABEL_8;
			}
			v8 = *(_QWORD*)v7;
			*(_QWORD*)v7 = *(_QWORD*)(*(_QWORD*)v7 + 8i64);
			sub_14018B900(v8, 0);
			--qword_140C4DEF0;
		}
	}
LABEL_8:
	result = qword_140C4DF18;
	if (*(_QWORD*)(qword_140C4DF18 + 8 * v4) == a3)
		*(_QWORD*)(qword_140C4DF18 + 8 * v4) = 0i64;
	return result;
}
// 140C4DEF0: using guessed type __int64 qword_140C4DEF0;
// 140C4DEF8: using guessed type __int64 qword_140C4DEF8;
// 140C4DF00: using guessed type __int64 qword_140C4DF00;
// 140C4DF08: using guessed type __int64 (__fastcall *qword_140C4DF08)(_QWORD);
// 140C4DF10: using guessed type __int64 (__fastcall *qword_140C4DF10)(_QWORD, _QWORD);
// 140C4DF18: using guessed type __int64 qword_140C4DF18;

