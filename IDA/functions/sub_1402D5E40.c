#include "../winhttp.h"

//----- (00000001402D5E40) ----------------------------------------------------
void __fastcall sub_1402D5E40(__int64 a1)
{
	__int64 v1; // rdi
	unsigned __int64 v2; // rsi
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 56))
	{
		v1 = qword_140C657F0;
		v5 = *(_QWORD*)(a1 + 16);
		v2 = (*(__int64(__fastcall**)(__int64*))(qword_140C657F0 + 120))(&v5);
		v3 = *(_QWORD*)(v1 + 112) + 8 * (v2 % *(_QWORD*)(v1 + 104));
		if (*(_QWORD*)v3)
		{
			while (v2 != **(_QWORD**)v3
				|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v1 + 128))(&v5, *(_QWORD*)v3 + 16i64))
			{
				v3 = *(_QWORD*)v3 + 8i64;
				if (!*(_QWORD*)v3)
					return;
			}
			v4 = *(_QWORD*)v3;
			*(_QWORD*)v3 = *(_QWORD*)(*(_QWORD*)v3 + 8i64);
			sub_14018B900(v4, 0);
			--* (_QWORD*)(v1 + 96);
		}
	}
}
// 140C657F0: using guessed type __int64 qword_140C657F0;

