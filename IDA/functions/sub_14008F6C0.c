#include "../winhttp.h"

//----- (000000014008F6C0) ----------------------------------------------------
__int64 __fastcall sub_14008F6C0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 2ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
			if ((int)result >= 0)
				return sub_140337160(a1, (_BYTE*)(a3 + 16), 16i64);
		}
	}
	return result;
}

