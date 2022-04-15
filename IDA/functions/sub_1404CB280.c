#include "../winhttp.h"

//----- (00000001404CB280) ----------------------------------------------------
__int64 __fastcall sub_1404CB280(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v7; // [rsp+20h] [rbp-18h] BYREF
	__int64 v8; // [rsp+28h] [rbp-10h]

	v2 = 0i64;
	v7 = a2;
	v8 = 0i64;
	if (!a2 || !*(_QWORD*)(a1 + 40))
		return 0i64;
	while (1)
	{
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v2);
		if (v4)
			break;
	LABEL_6:
		if ((unsigned __int64)++v2 >= *(_QWORD*)(a1 + 40))
			return v8;
	}
	while (1)
	{
		v5 = *(_QWORD*)(v4 + 8);
		if (!(unsigned int)sub_1404C86B0((__int64*)(v4 + 24), &v7))
			return v8;
		v4 = v5;
		if (!v5)
			goto LABEL_6;
	}
}

