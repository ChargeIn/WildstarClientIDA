#include "../winhttp.h"

//----- (000000014030E3B0) ----------------------------------------------------
__int64 __fastcall sub_14030E3B0(__int64 a1, int a2)
{
	__int64 v2; // r11
	unsigned int v3; // r8d
	unsigned int v5; // r9d
	__int64 v6; // rax
	int v7; // edx

	v2 = *(_QWORD*)(a1 + 184);
	v3 = 0;
	v5 = *(_DWORD*)(v2 + 32);
	if (!v5)
		return *(unsigned __int16*)(v2 + 28);
	while (1)
	{
		v6 = v3 + ((v5 - v3) >> 1);
		v7 = *(unsigned __int16*)(*(_QWORD*)(v2 + 40) + 2 * v6);
		if (a2 >= v7)
			break;
		v5 = v3 + ((v5 - v3) >> 1);
	LABEL_6:
		if (v3 >= v5)
			return *(unsigned __int16*)(v2 + 28);
	}
	if (a2 > v7)
	{
		v3 = v6 + 1;
		goto LABEL_6;
	}
	return *(unsigned __int16*)(*(_QWORD*)(v2 + 48) + 2i64 * (unsigned int)v6);
}

