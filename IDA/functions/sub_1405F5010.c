#include "../winhttp.h"

//----- (00000001405F5010) ----------------------------------------------------
__int64 __fastcall sub_1405F5010(__int64 a1, unsigned int* a2)
{
	unsigned int v3; // edx
	unsigned int v4; // edx
	unsigned int v5; // edx
	__int64 v6; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax

	v3 = a2[1];
	if (v3)
	{
		v4 = v3 - 1;
		if (v4)
		{
			v5 = v4 - 1;
			if (v5)
			{
				if (v5 == 1)
				{
					v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
						qword_140C65980,
						*a2,
						0i64);
					if (v6)
					{
						(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v6 + 336i64))(v6, *a2, a2[2]);
						return 0i64;
					}
				}
			}
			else
			{
				v8 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 64i64))(
					qword_140C65980,
					*a2,
					0i64);
				if (v8)
				{
					(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v8 + 328i64))(v8, *a2, a2[2]);
					return 0i64;
				}
			}
		}
		else
		{
			v9 = sub_140498A40(qword_140C65980, *a2, 0);
			if (v9)
			{
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 320i64))(v9, a2[2]);
				return 0i64;
			}
		}
	}
	else
	{
		v10 = sub_140498A40(qword_140C65980, *a2, 0);
		if (v10)
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v10 + 312i64))(v10, a2[2]);
	}
	return 0i64;
}
// 140C65980: using guessed type __int64 qword_140C65980;

