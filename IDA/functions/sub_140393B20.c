#include "../winhttp.h"

//----- (0000000140393B20) ----------------------------------------------------
__int64 __fastcall sub_140393B20(__int64 a1)
{
	__int64 v2; // rax
	__int64* v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax

	if (!*(_DWORD*)(a1 + 192))
	{
		v2 = *(_QWORD*)(a1 + 40);
		if (v2 && !*(_DWORD*)(v2 + 28))
			*(_DWORD*)(v2 + 28) = 1;
		v3 = (__int64*)(a1 + 48);
		v4 = 4i64;
		do
		{
			v5 = *v3;
			if (*v3 && !*(_DWORD*)(v5 + 28))
				*(_DWORD*)(v5 + 28) = 1;
			++v3;
			--v4;
		} while (v4);
		*(_DWORD*)(a1 + 192) = 1;
	}
	return 1i64;
}

