#include "../winhttp.h"

//----- (00000001405BA240) ----------------------------------------------------
__int64 __fastcall sub_1405BA240(_QWORD* a1)
{
	__int64 v2; // rbx
	int* v3; // rax
	__int64 v4; // rdi
	_QWORD* v5; // rbx
	void(__fastcall * **v6)(_QWORD); // rcx
	__int64 v8; // rcx

	v2 = sub_1405BA190(a1);
	if (v2)
	{
		v3 = (int*)sub_1406622C0((__int64)a1, 2);
		if (v3 && (v4 = sub_1403D90D0(qword_140C65898, *v3)) != 0)
		{
			v5 = (_QWORD*)(v2 + 1032);
			if (v5)
			{
				if (*v5)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 8i64))(*v5);
					*v5 = 0i64;
				}
				*v5 = *(_QWORD*)(v4 + 120);
				v6 = *(void(__fastcall****)(_QWORD))(v4 + 120);
				if (v6)
				{
					(**v6)(v6);
					return 0i64;
				}
			}
		}
		else
		{
			v8 = *(_QWORD*)(v2 + 1032);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v2 + 1032) = 0i64;
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

