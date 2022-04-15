#include "../winhttp.h"

//----- (0000000140839CF0) ----------------------------------------------------
__int64 __fastcall sub_140839CF0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 104) = a2;
	if (a2)
	{
		result = *(unsigned int*)(a2 + 136);
		*(_DWORD*)(a2 + 136) = result ^ (result ^ (result + 1)) & 0x3FFFFFFF;
	}
	return result;
}

