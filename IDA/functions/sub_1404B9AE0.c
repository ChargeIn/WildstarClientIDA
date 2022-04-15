#include "../winhttp.h"

//----- (00000001404B9AE0) ----------------------------------------------------
__int64 __fastcall sub_1404B9AE0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned int v5; // ebx
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rax

	result = sub_1405B1510(&qword_140C7DFB0);
	if (result)
	{
		v4 = *(_QWORD*)(result + 232);
		v5 = 0;
		if (!v4 || !*(_DWORD*)(result + 272))
			v4 = 0i64;
		v6 = *(_DWORD*)(v4 + 184);
		if ((v6 & 0xFFFFFFFA) != 0 || v6 == 4)
			return 0i64;
		v7 = sub_14077DD00(result + 440, a2);
		if (v7)
			v5 = *(_DWORD*)(v7 + 8);
		v8 = sub_140203DA0(v5);
		return v8 && (*(_DWORD*)(v8 + 16) & 8) == 0;
	}
	return result;
}
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

