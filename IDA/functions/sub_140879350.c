#include "../winhttp.h"

//----- (0000000140879350) ----------------------------------------------------
char __fastcall sub_140879350(__int64 a1)
{
	__int64 v1; // rax
	char v2; // al

	v1 = *(unsigned int*)(a1 + 140);
	*(_DWORD*)(a1 + 140) = 0;
	*(_DWORD*)(a1 + 104) -= v1;
	*(_QWORD*)(a1 + 96) += v1;
	if (!*(_DWORD*)(a1 + 104))
	{
		v2 = *(_BYTE*)(a1 + 126);
		if ((v2 & 2) != 0)
		{
			LOBYTE(v1) = v2 & 0xFD;
			*(_BYTE*)(a1 + 126) = v1;
		}
		else
		{
			LOBYTE(v1) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 128i64))(*(_QWORD*)(a1 + 88));
		}
	}
	return v1;
}

