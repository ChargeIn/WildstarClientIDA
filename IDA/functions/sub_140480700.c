#include "../winhttp.h"

//----- (0000000140480700) ----------------------------------------------------
__int64 __fastcall sub_140480700(__int64 a1, __int64 a2)
{
	int v4; // edi
	__int64 i; // rsi
	__int64 v6; // rbx
	int v7; // ebp

	v4 = 0;
	for (i = 48i64; ; i += 4i64)
	{
		v6 = *(_QWORD*)(a2 + 5576);
		v7 = *(_DWORD*)(i + *(_QWORD*)(a1 + 8));
		if (v6)
			break;
	LABEL_5:
		if ((unsigned int)++v4 >= 3)
			return 0i64;
	}
	while ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + 56) + 8i64))(*(_QWORD*)(v6 + 56)) != v7)
	{
		v6 = *(_QWORD*)(v6 + 24);
		if (!v6)
			goto LABEL_5;
	}
	return 1i64;
}

