#include "../winhttp.h"

//----- (000000014087C5F0) ----------------------------------------------------
bool __fastcall sub_14087C5F0(__int64 a1, int a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rcx
	bool v4; // zf

	v2 = *(_DWORD**)(a1 + 8);
	v3 = *(_DWORD**)(a1 + 16);
	v4 = v2 == v3;
	if (v2 != v3)
	{
		do
		{
			if (*v2 == a2)
				break;
			++v2;
		} while (v2 != v3);
		v4 = v2 == v3;
	}
	return !v4;
}

