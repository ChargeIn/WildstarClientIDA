#include "../winhttp.h"

//----- (000000014087F860) ----------------------------------------------------
void __fastcall sub_14087F860(__int64 a1, _QWORD** a2)
{
	_QWORD* i; // rbx
	__int64 v4; // rdi

	if (a2)
	{
		for (i = *a2; i; i = (_QWORD*)*i)
		{
			v4 = sub_140830EE0(qword_140C61BA8, (__int64)(i + 1));
			if (v4)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 160i64))(a1, v4);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
			}
		}
	}
}

