#include "../winhttp.h"

//----- (000000014086C560) ----------------------------------------------------
__int64 __fastcall sub_14086C560(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 result; // rax

	if (a3 != 50000)
		*(_BYTE*)(a1 + 479) |= 8u;
	if ((*(_BYTE*)(a1 + 479) & 7) != 1
		&& (*(unsigned __int8(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 64i64))(*(_QWORD*)(a1 + 192)))
	{
		return 35i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 192) + 40i64))(
		*(_QWORD*)(a1 + 192),
		a2,
		a3);
	if ((_DWORD)result == 1)
	{
		sub_14086C9F0(a1);
		if (*(_BYTE*)(a1 + 486))
		{
			if (qword_140C61B68)
			{
				sub_14082E400((__int64)qword_140C61B68, (void**)a1);
				sub_14082E5B0((__int64)qword_140C61B68, a1);
			}
			sub_1408551C0((__int64*)a1, 0i64, 0, 0, 4);
		}
		return 1i64;
	}
	return result;
}

