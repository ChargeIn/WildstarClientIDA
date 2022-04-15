#include "../winhttp.h"

//----- (0000000140086AC0) ----------------------------------------------------
__int64 __fastcall sub_140086AC0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 1ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 1ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 1ui64);
					if ((int)result >= 0)
					{
						result = sub_1400852F0(a1, v8, a3 + 32);
						if ((int)result >= 0)
						{
							result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 48));
							if ((int)result >= 0)
							{
								result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 56));
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 3ui64);
									if ((int)result >= 0)
									{
										result = sub_140086410(a1, a2, a3 + 72);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 104), 0x20ui64);
											if ((int)result >= 0)
												return sub_14006BE30(a1, (_BYTE*)(a3 + 108), 8ui64);
										}
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
// 140086B0F: variable 'v7' is possibly undefined
// 140086B71: variable 'v8' is possibly undefined

