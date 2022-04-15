#include "../winhttp.h"

//----- (000000014071BDF0) ----------------------------------------------------
void __fastcall sub_14071BDF0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	_DWORD* v3; // rbx
	__int16* v4; // rax
	int v5; // r9d
	int* v6; // rdi

	v1 = sub_1402402C0(*(_DWORD*)(a1 + 376));
	v3 = (_DWORD*)v1;
	if (v1)
	{
		v4 = sub_14034BDD0(v2, *(_DWORD*)(v1 + 4));
		v5 = v3[4];
		v6 = (int*)v4;
		if (v5)
		{
			sub_14042A360(*(_QWORD*)(qword_140C65898 + 29504), v3[3], v4, v5, v3[6]);
			sub_140003890((__int64*)qword_140C658A0, 0x17u, 0i64, v6, 0, 0i64);
		}
	}
}
// 14071BE11: variable 'v2' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

