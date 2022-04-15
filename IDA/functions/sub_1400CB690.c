#include "../winhttp.h"

//----- (00000001400CB690) ----------------------------------------------------
_QWORD* __fastcall sub_1400CB690(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* result; // rax
	_QWORD* v4; // rbx

	if ((*(_BYTE*)(a1 + 392) & 1) == 0)
	{
		*(_BYTE*)(a1 + 29) &= ~0x80u;
		*(_BYTE*)(a1 + 30) &= ~1u;
		v2 = *(_QWORD*)(a1 + 16);
		if (v2 && (*(_BYTE*)(v2 + 30) & 1) != 0)
			sub_1400CB660(v2);
		*(_DWORD*)(a1 + 392) |= 3u;
		*(_QWORD*)(a1 + 384) = -1i64;
		result = *(_QWORD**)(a1 + 560);
		v4 = (_QWORD*)*result;
		if ((_QWORD*)*result != result)
		{
			do
			{
				result = (_QWORD*)sub_1400CB690(v4[2]);
				v4 = (_QWORD*)*v4;
			} while (v4 != *(_QWORD**)(a1 + 560));
		}
	}
	return result;
}

