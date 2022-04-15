#include "../winhttp.h"

//----- (00000001408762F0) ----------------------------------------------------
void __fastcall sub_1408762F0(__int64 a1, _QWORD** a2)
{
	_QWORD* i; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi

	if (a2)
	{
		for (i = *a2; i; i = (_QWORD*)*i)
		{
			v4 = sub_140830EE0(qword_140C61BA8, (__int64)(i + 1));
			v5 = v4;
			if (v4)
			{
				sub_140854240(v4, *(_DWORD*)(a1 + 92), 0i64);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
			}
		}
	}
}

