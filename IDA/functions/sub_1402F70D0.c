#include "../winhttp.h"

//----- (00000001402F70D0) ----------------------------------------------------
__int64 __fastcall sub_1402F70D0(__int64 a1)
{
	unsigned __int64 v2; // r8
	__int64 v3; // rcx
	__int64 i; // rdx
	__int64 v5; // rax

	if (!*(_DWORD*)(a1 + 336))
	{
		v2 = *(_QWORD*)(a1 + 880);
		v3 = 0i64;
		if (!v2)
			return 0i64;
		for (i = *(_QWORD*)(a1 + 872); ; i += 8i64)
		{
			v5 = *(_QWORD*)(*(_QWORD*)i + 8i64);
			if (v5)
				break;
		LABEL_7:
			if (++v3 >= v2)
				return 0i64;
		}
		while (!*(_QWORD*)(v5 + 32))
		{
			v5 = *(_QWORD*)(v5 + 96);
			if (!v5)
				goto LABEL_7;
		}
		*(_DWORD*)(a1 + 336) = 1;
	}
	return 1i64;
}

