#include "../winhttp.h"

//----- (00000001408579A0) ----------------------------------------------------
__int64 __fastcall sub_1408579A0(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
	unsigned int v8; // edi
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

	v12[0] = 0i64;
	if ((unsigned int)sub_14082FC60((__int64)&off_140C10F60, a2, v12) == 1 && v12[0])
	{
		v8 = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)(), __int64, _QWORD))(*(_QWORD*)v12[0] + 24i64))(
			v12[0],
			&off_140C10F60,
			a3,
			a4);
		if (v8 != 1)
		{
			(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v12[0] + 32i64))(v12[0], &off_140C10F60);
			return v8;
		}
		v10 = *(_QWORD*)(a1 + 40);
		v11 = v12[0];
		if (v10)
		{
			(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v10 + 32i64))(v10, &off_140C10F60);
			*(_QWORD*)(a1 + 40) = 0i64;
		}
		*(_DWORD*)(a1 + 32) = a2;
		*(_QWORD*)(a1 + 40) = v11;
	}
	return 1i64;
}
// 140C10F60: using guessed type __int64 (__fastcall **off_140C10F60)();
// 1408579A0: using guessed type __int64 var_18[3];

