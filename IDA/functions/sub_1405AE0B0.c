#include "../winhttp.h"

//----- (00000001405AE0B0) ----------------------------------------------------
__int64 __fastcall sub_1405AE0B0(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64* i; // rbx

	result = *(_QWORD*)(a1 + 424) - *(_QWORD*)(a1 + 416);
	if ((result & 0xFFFFFFFFFFFFFFF8ui64) != 0)
	{
		if (a2)
		{
			for (i = *(__int64**)(a1 + 416); i != *(__int64**)(a1 + 424); ++i)
				result = sub_1405AEA60(a1, *i);
		}
		else
		{
			result = qword_140C659F0;
			if (!*(_DWORD*)qword_140C659F0)
				return sub_1405AEC80(a1);
		}
	}
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

