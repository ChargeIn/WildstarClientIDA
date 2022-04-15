#include "../winhttp.h"

//----- (00000001405B2E60) ----------------------------------------------------
void __fastcall sub_1405B2E60(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	if (a2)
	{
		v5 = a2;
		v2 = qword_140C4A3C0(&v5);
		v3 = qword_140C4A3B8 + 8 * (v2 % qword_140C4A3B0);
		if (*(_QWORD*)v3)
		{
			while (v2 != **(_QWORD**)v3 || !(unsigned int)qword_140C4A3C8(&v5, *(_QWORD*)v3 + 16i64))
			{
				v3 = *(_QWORD*)v3 + 8i64;
				if (!*(_QWORD*)v3)
					return;
			}
			v4 = *(_QWORD*)v3;
			*(_QWORD*)v3 = *(_QWORD*)(*(_QWORD*)v3 + 8i64);
			sub_14018B900(v4, 0);
			--qword_140C4A3A8;
		}
	}
}
// 140C4A3A8: using guessed type __int64 qword_140C4A3A8;
// 140C4A3B0: using guessed type __int64 qword_140C4A3B0;
// 140C4A3B8: using guessed type __int64 qword_140C4A3B8;
// 140C4A3C0: using guessed type __int64 (__fastcall *qword_140C4A3C0)(_QWORD);
// 140C4A3C8: using guessed type __int64 (__fastcall *qword_140C4A3C8)(_QWORD, _QWORD);

