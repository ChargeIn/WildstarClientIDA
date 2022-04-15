#include "../winhttp.h"

//----- (00000001404D60F0) ----------------------------------------------------
__int64 __fastcall sub_1404D60F0(_QWORD* a1, int a2, int a3, unsigned int* a4)
{
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rcx

	v4 = a1[11];
	if (!v4 || a2 != *(_DWORD*)(v4 + 152))
		return 1i64;
	switch (a3)
	{
	case 975:
		if (a1[25])
			return sub_1407290A0(a1[25], a4);
		break;
	case 976:
		if (a1[25])
			return sub_1407291F0(a1[25], a4);
		break;
	case 977:
		if (a1[25])
			return sub_140728DC0(a1[25], a4);
		break;
	default:
		if (a3 == 978 && a1[25])
			return sub_1407292A0((__int64*)a1[25], a4);
		break;
	}
	v6 = a1[12];
	if (!v6)
		return 1i64;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 88i64))(v6);
	if ((_DWORD)result == 1)
		return 1i64;
	return result;
}

