#include "../winhttp.h"

//----- (000000014009BFD0) ----------------------------------------------------
__int64 __fastcall sub_14009BFD0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		if (a3 == -8)
		{
			return 2147500037i64;
		}
		else
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v7);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 3ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C1C0(a1, (_DWORD*)(a3 + 28));
						if ((int)result >= 0)
						{
							result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 32));
							if ((int)result >= 0)
							{
								result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 40));
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0xEui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 52), 3ui64);
										if ((int)result >= 0)
											return sub_14006BE30(a1, (_BYTE*)(a3 + 56), 8ui64);
									}
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
// 14009C04A: variable 'v7' is possibly undefined

