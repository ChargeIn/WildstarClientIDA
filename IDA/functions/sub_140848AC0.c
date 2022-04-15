#include "../winhttp.h"

//----- (0000000140848AC0) ----------------------------------------------------
__int64 __fastcall sub_140848AC0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
	{
		result = *(_QWORD*)(result + 24);
		*(_DWORD*)(result + 464) = 1120534528;
	}
	else
	{
		MEMORY[0x1D0] = 1120534528;
	}
	return result;
}

