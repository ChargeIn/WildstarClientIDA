#include "../winhttp.h"

//----- (000000014049C910) ----------------------------------------------------
_BOOL8 __fastcall sub_14049C910(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	int v4; // eax
	_BOOL8 result; // rax

	result = a2
		&& ((v4 = *(_DWORD*)(a2 + 128), v4 == 20) || v4 == 23)
		&& sub_1404A2090(a1, a3, *(_DWORD*)(qword_140C65898 + 28132), a4);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

