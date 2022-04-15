#include "../winhttp.h"

//----- (0000000140880FB0) ----------------------------------------------------
__int64 __fastcall sub_140880FB0(__int64 a1, unsigned int* a2)
{
	int* v4; // rax

	if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 168i64) + 16i64) & 2) != 0)
	{
		*(_QWORD*)(a1 + 16) = *((_QWORD*)a2 + 1);
		return 1i64;
	}
	else
	{
		v4 = (int*)sub_1408819F0(dword_140C10F28, *a2);
		*(_QWORD*)(a1 + 16) = v4;
		if (v4)
		{
			sub_1407DB590(v4, *((int**)a2 + 1), *a2);
			*(_BYTE*)(a1 + 126) |= 0x10u;
			return 1i64;
		}
		else
		{
			return 52i64;
		}
	}
}
// 140C10F28: using guessed type int dword_140C10F28;

