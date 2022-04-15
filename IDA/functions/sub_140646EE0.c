#include "../winhttp.h"

//----- (0000000140646EE0) ----------------------------------------------------
__int64 __fastcall sub_140646EE0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx
	int* v5; // rbx
	__int64 v6; // rax

	v2 = sub_1400D66A0(a1, 1u);
	v3 = sub_1400D66A0(a1, 2u);
	if (qword_140C65C30)
	{
		v4 = *(_QWORD*)(qword_140C65C30 + 32);
		if (v4 == v3 && v2 == v3)
		{
			v5 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 112i64))(v4);
			v6 = sub_140401220((__int64*)qword_140C658A0, 0x13u, 0i64);
			if (v5 && v6)
				sub_140401E40(v6, v5);
			(*(void(__fastcall**)(_QWORD, void*))(**(_QWORD**)(qword_140C65C30 + 32) + 80i64))(
				*(_QWORD*)(qword_140C65C30 + 32),
				&unk_1409F41C4);
		}
	}
	return 0i64;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65C30: using guessed type __int64 qword_140C65C30;

