#include "../winhttp.h"

//----- (000000014056D740) ----------------------------------------------------
__int64 __fastcall sub_14056D740(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64 result; // rax
	unsigned int v5; // edx
	int v6; // ecx

	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathMissionActivate", byte_1409ECCAC, *(_QWORD*)(a1 + 48));
	v3 = **(_QWORD**)(a1 + 48);
	result = *(int*)(v3 + 12);
	switch ((int)result)
	{
	case 0:
		result = sub_140617410(v2, *(_DWORD*)(v3 + 20));
		if (result)
		{
			result = *(_QWORD*)(result + 152);
			v6 = *(_DWORD*)(result + 4);
			if (v6 == 4)
			{
				v5 = 82;
				goto LABEL_17;
			}
			if (v6 > 4)
			{
				if (v6 <= 6)
				{
					v5 = 115;
					goto LABEL_17;
				}
				if (v6 <= 8)
				{
					v5 = 114;
					goto LABEL_17;
				}
			}
		}
		return result;
	case 3:
		v5 = 89;
		goto LABEL_17;
	case 12:
		v5 = 90;
		goto LABEL_17;
	case 13:
		v5 = 91;
		goto LABEL_17;
	case 15:
		v5 = 88;
		goto LABEL_17;
	case 18:
		v5 = 92;
		goto LABEL_17;
	case 20:
		v5 = 94;
		goto LABEL_17;
	case 21:
		v5 = 97;
	LABEL_17:
		result = sub_140437A10((_QWORD*)qword_140C658D8, v5, 0, 0i64, 0, 0, 1);
		break;
	default:
		return result;
	}
	return result;
}
// 14056D7CA: variable 'v2' is possibly undefined
// 1409ECCAC: using guessed type _BYTE byte_1409ECCAC[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;

