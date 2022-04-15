#include "../winhttp.h"

//----- (0000000140780350) ----------------------------------------------------
__int64 __fastcall sub_140780350(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rdx
	__int64 v6; // rdx
	int v7; // r8d

	result = sub_14077FE40(a1);
	if (*(_DWORD*)(a1 + 544))
	{
		result = sub_1405B1510(&qword_140C7DFB0);
		if (result)
		{
			if (*(_DWORD*)(result + 48) == 5)
			{
				result = sub_1405845F0(v3, *(_QWORD*)(result + 40));
				if (result)
				{
					v4 = *(int*)(result + 772);
					if (v4 < 0xA)
					{
						v5 = result + 8 * (v4 + 4 * v4 + 3);
						if (v5)
						{
							if ((*(_DWORD*)(v5 + 8) & 0x40000000) != 0)
							{
							LABEL_8:
								*(_DWORD*)(a1 + 544) = 1;
								return result;
							}
						}
					}
				}
			}
			else
			{
				v6 = *(_QWORD*)(result + 232);
				if (!v6 || !*(_DWORD*)(result + 272))
					v6 = 0i64;
				v7 = *(_DWORD*)(v6 + 184);
				if ((v7 & 0xFFFFFFFA) == 0 && v7 != 4 && (result == qword_140C7DFE0 || *(int*)(result + 496) >= 1))
					goto LABEL_8;
			}
			*(_DWORD*)(a1 + 240) = 0;
			*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
			*(_DWORD*)(a1 + 544) = 0;
		}
	}
	return result;
}
// 14078038A: variable 'v3' is possibly undefined
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

