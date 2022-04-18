#include "../winhttp.h"

//----- (00000001405E28C0) ----------------------------------------------------
__int64 __fastcall sub_1405E28C0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rdi
	__int64 result; // rax
	_QWORD* v6; // rbx
	unsigned int** v7; // rbx
	unsigned int* v8; // rbx

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 344))(a2);
	result = v4 / *(_QWORD*)(a1 + 328);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 336) + 8 * (v4 % *(_QWORD*)(a1 + 328)));
	if (v6)
	{
		while (1)
		{
			if (v4 == *v6)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(a1 + 352))(a2, v6 + 2);
				if ((_DWORD)result)
					break;
			}
			v6 = (_QWORD*)v6[1];
			if (!v6)
				return result;
		}
		v7 = (unsigned int**)(v6 + 4);
		if (v7)
		{
			v8 = *v7;
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FriendshipSuggestedRemove", byte_1409EAABC, *v8);
			sub_1400B6120(a1 + 320, a2);
			sub_1400B6120(a1 + 280, (__int64)v8);
			return sub_1405DDE00((__int64)v8);
		}
	}
	return result;
}
// 1409EAABC: using guessed type _BYTE byte_1409EAABC[32];
// 140C65898: using guessed type __int64 qword_140C65898;

