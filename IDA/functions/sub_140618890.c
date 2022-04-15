#include "../winhttp.h"

//----- (0000000140618890) ----------------------------------------------------
__int64 __fastcall sub_140618890(__int64 a1, int a2)
{
	__int64 result; // rax

	result = qword_140C65898;
	*(_DWORD*)(a1 + 16) = a2;
	*(_DWORD*)(result + 28568) = 1;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

