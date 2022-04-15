#include "../winhttp.h"

//----- (000000014055C6A0) ----------------------------------------------------
__int64 sub_14055C6A0()
{
	int* v1; // rax
	int v2; // edi
	__int64 v3; // rbx
	__int64 v4; // rax

	sub_140236320();
	sub_140238520();
	sub_140236BA0();
	if (qword_140C65B70)
	{
		(**(void(__fastcall***)(__int64))qword_140C65B70)(qword_140C65B70);
		return 0i64;
	}
	else
	{
		v1 = sub_14018B280(2064i64, 0);
		v2 = 0;
		if (v1)
			v3 = sub_14055C940((__int64)v1);
		else
			v3 = 0i64;
		if ((*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) >= 0)
		{
			qword_140C65B70 = v3;
			v4 = sub_140200220(0x64u);
			if (v4)
				v2 = *(_DWORD*)(v4 + 4);
			dword_140C6664C = v2;
			return 0i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			return 2147500037i64;
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C6664C: using guessed type int dword_140C6664C;

