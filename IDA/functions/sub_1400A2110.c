#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A2110) ----------------------------------------------------
__int64 __fastcall sub_1400A2110(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_1400A8900(a1, v7, a3 + 4);
		if ((int)result >= 0)
		{
			result = sub_1400A8980(a1, v8, a3 + 20);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
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
// 1400A215F: variable 'v7' is possibly undefined
// 1400A216F: variable 'v8' is possibly undefined

