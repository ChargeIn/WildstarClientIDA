#include "../winhttp.h"

//----- (000000014056D920) ----------------------------------------------------
__int64 __fastcall sub_14056D920(_QWORD* a1, char a2, char a3)
{
	char v3; // di
	__int64 result; // rax
	unsigned int v7; // edx

	v3 = a3 ^ a2;
	result = *(unsigned int*)(*(_QWORD*)a1[6] + 12i64);
	if ((_DWORD)result == 2 || (_DWORD)result == 14)
	{
		if ((v3 & 1) == 0)
			return result;
		if ((a3 & 1) != 0 && (a3 & 2) == 0)
		{
			sub_14056F210(qword_140C65970, a1, 1);
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathMissionUnlocked", byte_1409ECD0C, a1[6]);
			result = sub_140437A10((_QWORD*)qword_140C658D8, 0x5Du, 0, 0i64, 0, 0, 1);
		}
	}
	if ((v3 & 1) != 0 && (a3 & 1) != 0)
	{
		result = a1[6];
		switch (*(_DWORD*)(*(_QWORD*)result + 12i64))
		{
		case 4:
			v7 = 83;
			break;
		case 5:
			v7 = 85;
			break;
		case 6:
			v7 = 86;
			break;
		case 7:
			v7 = 84;
			break;
		default:
			return result;
		}
		return sub_140437A10((_QWORD*)qword_140C658D8, v7, 0, 0i64, 0, 0, 1);
	}
	return result;
}
// 1409ECD0C: using guessed type _BYTE byte_1409ECD0C[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65970: using guessed type __int64 qword_140C65970;

