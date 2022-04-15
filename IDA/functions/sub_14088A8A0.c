#include "../winhttp.h"

//----- (000000014088A8A0) ----------------------------------------------------
void sub_14088A8A0()
{
	__int64 v0; // rbx
	__int64 v1; // rcx
	__int64 v2; // rdi
	DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

	v0 = qword_140C629D8;
	while (v0)
	{
		v1 = v0;
		v0 = *(_QWORD*)(v0 + 120);
		v2 = *(_QWORD*)(v1 + 104);
		if ((*(_DWORD*)(v1 + 32) & 0x20000) != 0
			&& (*(unsigned int(__fastcall**)(__int64, DWORD*))(*(_QWORD*)v1 + 168i64))(v1, v3) == 1)
		{
			sub_14088C7A0((__int64)&unk_140C629F0, *(_DWORD*)(v2 + 48), v3);
		}
		sub_14088CC10(v2, 0x400u);
	}
}
// 140C629D8: using guessed type __int64 qword_140C629D8;
// 14088A8A0: using guessed type DWORD var_28[10];

