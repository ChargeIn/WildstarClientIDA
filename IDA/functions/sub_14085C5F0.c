#include "../winhttp.h"

//----- (000000014085C5F0) ----------------------------------------------------
__int64 __fastcall sub_14085C5F0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v4; // r10
	unsigned __int8* v8; // r10
	unsigned int v9; // r8d
	unsigned int i; // ecx
	__int64 v11; // rdx
	__int64 result; // rax
	float* v13; // rdx

	if (!a2)
	{
		v4 = *(_QWORD*)(a1 + 40);
		if (v4)
		{
			v8 = *(unsigned __int8**)(v4 + 24);
			if (v8)
			{
				v9 = *v8;
				for (i = 0; ; ++i)
				{
					v11 = i + 1;
					if (v8[v11] == 10)
						break;
					if ((unsigned int)v11 >= v9)
						return result;
				}
				result = (__int64)&v8[(v9 + 4) & 0xFFFFFFFC];
				v13 = (float*)(result + 16i64 * i);
				if (v13)
				{
					if (*v13 != 1.0)
					{
						sub_140830940((__int64**)qword_140C61BA0, a1);
						return sub_140855080(a1, *(_QWORD*)(a1 + 40), 1.0, a3, a4);
					}
				}
			}
		}
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

