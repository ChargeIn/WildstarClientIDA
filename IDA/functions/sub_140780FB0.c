#include "../winhttp.h"

//----- (0000000140780FB0) ----------------------------------------------------
__int64 __fastcall sub_140780FB0(__int64 a1, __int64 a2, int a3, _DWORD* a4)
{
	__int64 v4; // rbx
	__int64 v6; // rcx
	int v8; // edx
	__int64 result; // rax

	v4 = a1 + 56;
	v6 = a1 + 56;
	if (*(_DWORD*)(a2 + 3412))
	{
		v8 = a3;
	}
	else
	{
		sub_1407870E0(v6, *(_DWORD*)(v4 + 32));
		v8 = a3;
		v6 = v4;
	}
	result = sub_1407870E0(v6, v8);
	*(_DWORD*)(v4 + 32) = a3;
	*(_DWORD*)(v4 + 36) = result;
	*a4 = result;
	return result;
}

