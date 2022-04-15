#include "../winhttp.h"

//----- (00000001405A4B80) ----------------------------------------------------
__int64 __fastcall sub_1405A4B80(__int64 a1, int a2)
{
	unsigned int v3; // eax
	__int64 v4; // r11
	int v5; // edi
	int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // r11
	__int64 result; // rax

	v3 = sub_1403BAD30(qword_140C65898, *(_DWORD*)(a1 + 64), *(_BYTE*)(qword_140C65898 + 28140));
	v5 = v3;
	if (!v3)
		return 0i64;
	if (!*(_QWORD*)(v4 + 120))
	{
		v6 = v3;
	LABEL_7:
		v8 = sub_1407A0FD0(qword_140C65B70, v6);
		goto LABEL_8;
	}
	if (!v4 || (v8 = sub_1405A5B90(v4, v3)) == 0)
	{
		v6 = v5;
		goto LABEL_7;
	}
LABEL_8:
	if (!v8)
		return 0i64;
	if (!a2)
		return v8;
	if (!*(_DWORD*)(*(_QWORD*)(v8 + 112) + 404i64))
		return v8;
	if (!(unsigned int)sub_1403A8000(v7, v5))
		return v8;
	result = sub_140565020(v9, v8, *(_QWORD*)(v10 + 120));
	if (!result)
		return v8;
	return result;
}
// 1405A4BB1: variable 'v4' is possibly undefined
// 1405A4C03: variable 'v7' is possibly undefined
// 1405A4C13: variable 'v9' is possibly undefined
// 1405A4C0C: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

