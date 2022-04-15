#include "../winhttp.h"

//----- (0000000140391300) ----------------------------------------------------
__int64 __fastcall sub_140391300(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
		sub_140372AF0(v2);
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	v4 = result;
	if (result)
	{
		v5 = 0i64;
		do
		{
			v6 = *(_QWORD*)(a1 + 160);
			if (*(_QWORD*)(v5 + v6 + 8) == a1)
			{
				result = *(_QWORD*)(v5 + v6 + 16);
			}
			else
			{
				result = 0i64;
				if (*(_QWORD*)(v5 + v6 + 16) == a1)
					result = *(_QWORD*)(v5 + v6 + 8);
			}
			if (!*(_QWORD*)(result + 320))
			{
				v7 = *(_QWORD*)(result + 24);
				if (v7)
					result = sub_140372AF0(v7);
			}
			v5 += 24i64;
			--v4;
		} while (v4);
	}
	return result;
}

