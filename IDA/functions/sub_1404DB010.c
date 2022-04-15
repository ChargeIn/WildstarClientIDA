#include "../winhttp.h"

//----- (00000001404DB010) ----------------------------------------------------
__int64 __fastcall sub_1404DB010(__int64 a1, unsigned __int8 a2)
{
	__int64 result; // rax

	if (qword_140C65898)
	{
		result = a2;
		*(_DWORD*)(qword_140C65898 + 31000) = a2;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

