#include "../winhttp.h"

//----- (0000000140060CB0) ----------------------------------------------------
__int64 __fastcall sub_140060CB0(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rsi
	__int64 v5; // rdx
	__int64 v6; // r8
	__int64 result; // rax
	__int64 v8; // rcx

	v2 = *(_QWORD*)(a1 + 32);
	while (*(_QWORD*)(a1 + 152))
	{
		v5 = *(_QWORD*)(a1 + 152);
		if (*(_QWORD*)(v5 + 16) < a2)
			break;
		v6 = v5 + 24;
		*(_QWORD*)(a1 + 152) = *(_QWORD*)v5;
		if ((*(_BYTE*)(v5 + 9) & 3 & (unsigned __int8)~*(_BYTE*)(v2 + 32)) != 0)
		{
			if (*(_QWORD*)(v5 + 16) != v6)
			{
				*(_QWORD*)(*(_QWORD*)(v5 + 32) + 24i64) = *(_QWORD*)v6;
				*(_QWORD*)(*(_QWORD*)v6 + 32i64) = *(_QWORD*)(v5 + 32);
			}
			result = sub_140064780(a1, v5, 40i64);
		}
		else
		{
			*(_QWORD*)(*(_QWORD*)(v5 + 32) + 24i64) = *(_QWORD*)v6;
			*(_QWORD*)(*(_QWORD*)v6 + 32i64) = *(_QWORD*)(v5 + 32);
			v8 = *(_QWORD*)(v5 + 16);
			*(_QWORD*)v6 = *(_QWORD*)v8;
			*(_DWORD*)(v5 + 32) = *(_DWORD*)(v8 + 8);
			*(_QWORD*)(v5 + 16) = v6;
			result = sub_14005E590(a1, v5);
		}
	}
	return result;
}
// 140064780: using guessed type __int64 __fastcall sub_140064780(_QWORD, _QWORD, _QWORD);

