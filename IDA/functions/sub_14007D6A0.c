#include "../winhttp.h"

//----- (000000014007D6A0) ----------------------------------------------------
__int64 __fastcall sub_14007D6A0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
		if ((int)result >= 0)
		{
			result = sub_1400A8900(a1, v7, a3 + 8);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 32));
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 44), 2ui64);
							if ((int)result >= 0)
								return sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x15ui64);
						}
					}
				}
			}
		}
	}
	return result;
}
// 14007D705: variable 'v7' is possibly undefined

