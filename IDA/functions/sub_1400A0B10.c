#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A0B10) ----------------------------------------------------
__int64 __fastcall sub_1400A0B10(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 v6; // rbx
	_DWORD* v7; // rdi

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 3ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 2ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 2ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 2ui64);
				if ((int)result >= 0)
				{
					result = sub_140337160(a1, (_BYTE*)(a3 + 16), 12i64);
					if ((int)result >= 0)
					{
						v6 = 0i64;
						v7 = (_DWORD*)(a3 + 28);
						do
						{
							result = sub_14006C090(a1, v7, 1ui64);
							if ((int)result < 0)
								break;
							++v6;
							++v7;
						} while (v6 < 3);
					}
				}
			}
		}
	}
	return result;
}

