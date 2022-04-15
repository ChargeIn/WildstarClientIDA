#include "../winhttp.h"

//----- (0000000140865CB0) ----------------------------------------------------
__int64 __fastcall sub_140865CB0(__int64 a1, int a2)
{
	_DWORD* v3; // rcx
	__int64 result; // rax

	v3 = *(_DWORD**)(a1 + 32);
	result = *(_QWORD*)(a1 + 40);
	if (v3 != (_DWORD*)result)
	{
		do
		{
			if (*v3 == a2)
				break;
			v3 += 10;
		} while (v3 != (_DWORD*)result);
		if (v3 != (_DWORD*)result)
			return sub_140865CE0((__int64)(v3 + 2), a1);
	}
	return result;
}

