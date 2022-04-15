#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A2600) ----------------------------------------------------
__int64 __fastcall sub_1400A2600(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_140337160(a1, (_BYTE*)a3, 49i64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BF60(a1, (_WORD*)(a3 + 56), 0x10ui64);
			if ((int)result >= 0)
			{
				result = sub_14006BF60(a1, (_WORD*)(a3 + 58), 0x10ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 60), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_140337160(a1, (_BYTE*)(a3 + 64), 33i64);
						if ((int)result >= 0)
						{
							result = sub_140337160(a1, (_BYTE*)(a3 + 97), 17i64);
							if ((int)result >= 0)
							{
								result = sub_14006BF60(a1, (_WORD*)(a3 + 114), 0x10ui64);
								if ((int)result >= 0)
								{
									v7 = (_BYTE*)sub_1403374E0(a2, *(unsigned __int16*)(a3 + 114));
									*(_QWORD*)(a3 + 120) = v7;
									if (v7)
										return sub_140337160(a1, v7, *(unsigned __int16*)(a3 + 114));
									else
										return 2147500037i64;
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}

