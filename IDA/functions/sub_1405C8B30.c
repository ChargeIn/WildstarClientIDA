#include "../winhttp.h"

//----- (00000001405C8B30) ----------------------------------------------------
__int64 __fastcall sub_1405C8B30(__int64 a1)
{
	_DWORD* v2; // rsi
	__int64 result; // rax
	int v4; // ebx
	int v5; // ecx

	v2 = *(_DWORD**)(*(_QWORD*)(a1 + 360) + 56i64);
	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
	if (v2)
	{
		if (result)
		{
			v4 = **(_DWORD**)(result + 112);
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)v2 + 8i64))(*(_QWORD*)v2);
			if ((_DWORD)result == v4)
			{
				v5 = v2[2];
				result = (unsigned int)(v5 - 7);
				if ((unsigned int)result > 1)
				{
					if (v5)
					{
						if (v5 != 185)
							*(_DWORD*)(a1 + 396) = 1;
					}
				}
			}
		}
	}
	return result;
}

