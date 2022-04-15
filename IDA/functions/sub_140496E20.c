#include "../winhttp.h"

//----- (0000000140496E20) ----------------------------------------------------
void __fastcall sub_140496E20(__int64 a1, int* a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rbx
	unsigned int* v6; // rbx
	__int64 v7; // rax

	v2 = qword_140C65988;
	v4 = (*(__int64(__fastcall**)(int*))(qword_140C65988 + 192))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(v2 + 184) + 8 * (v4 % *(_QWORD*)(v2 + 176)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v2 + 200))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return;
		}
		v6 = (unsigned int*)v5 + 5;
		if (v6)
		{
			v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
				qword_140C65980,
				*v6,
				0i64);
			if (v7)
				sub_1405F2420(v7, *a2);
		}
	}
}
// 140C65980: using guessed type __int64 qword_140C65980;
// 140C65988: using guessed type __int64 qword_140C65988;

