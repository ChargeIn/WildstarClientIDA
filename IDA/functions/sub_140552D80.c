#include "../winhttp.h"

//----- (0000000140552D80) ----------------------------------------------------
_BOOL8 __fastcall sub_140552D80(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v6; // rax
	__int64 i; // rax
	__int64 v8; // rcx
	__int64 v9; // rax

	v1 = *(_QWORD*)(a1 + 96);
	v3 = *(_QWORD*)(v1 + 16);
	if (v3 != v1)
	{
		v4 = sub_1407242B0(a1, *(_DWORD*)(v3 + 32));
		if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 184i64))(v4, **(unsigned int**)(a1 + 8)))
			return 1i64;
		v6 = *(_QWORD*)(v3 + 24);
		if (v6)
		{
			for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
				;
		}
		else
		{
			v8 = *(_QWORD*)(v3 + 8);
			if (v3 == *(_QWORD*)(v8 + 24))
			{
				do
				{
					v9 = v8;
					v8 = *(_QWORD*)(v8 + 8);
				} while (v9 == *(_QWORD*)(v8 + 24));
			}
		}
	}
	return *(_QWORD*)(a1 + 104) == 0i64;
}

