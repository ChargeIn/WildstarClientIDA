#include "../winhttp.h"

//----- (000000014053F340) ----------------------------------------------------
void __fastcall sub_14053F340(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	_QWORD* v4; // rbx
	unsigned int i; // esi

	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
	{
		while (*(_DWORD*)(v2 + 64) != *(_DWORD*)(a2 + 8))
		{
			v2 = *(_QWORD*)(v2 + 40);
			if (!v2)
				return;
		}
		v4 = *(_QWORD**)(v2 + 8);
		if (v4)
		{
			while ((*(unsigned int(__fastcall**)(_QWORD*))(*v4 + 48i64))(v4) != *(_DWORD*)(a2 + 4))
			{
				v4 = (_QWORD*)v4[2];
				if (!v4)
					return;
			}
			for (i = 0;
				i < *(unsigned __int8*)(a2 + 12);
				(*(void(__fastcall**)(_QWORD*, __int64, _QWORD))(*v4 + 8i64))(
					v4,
					*(_QWORD*)(a2 + 16) + 56i64 * i++,
					0i64))
			{
				;
			}
		}
	}
}

