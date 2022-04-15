#include "../winhttp.h"

//----- (00000001403CD930) ----------------------------------------------------
__int64 __fastcall sub_1403CD930(__int64 a1, unsigned __int8 a2)
{
	__int64 v3; // rcx
	int v4; // edx
	int v5; // eax
	__int64 result; // rax
	__int64(__fastcall * *v7)(); // [rsp+20h] [rbp-28h] BYREF
	int v8; // [rsp+28h] [rbp-20h]
	int v9; // [rsp+2Ch] [rbp-1Ch]
	int v10; // [rsp+30h] [rbp-18h]

	v3 = a1 + 5208;
	*(_DWORD*)(v3 + 22932) = a2;
	sub_140008410(v3);
	*(_DWORD*)(a1 + 28124) = -1;
	*(_QWORD*)(a1 + 28344) = 0i64;
	sub_1403C23C0(a1);
	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
	v9 = 32;
	v7 = off_140B6F3D0;
	v5 = *(_DWORD*)(a1 + 28140);
	v8 = v4;
	v10 = v5;
	result = sub_14060AF20((__int64)&v7);
	if ((_DWORD)result)
	{
		result = sub_1403D90D0(qword_140C65898, v8);
		if (result)
		{
			result = sub_14047DCA0(result);
			if (result)
				return sub_14060AFE0((int*)&v7, v8);
		}
	}
	return result;
}
// 140B6F3D0: using guessed type __int64 (__fastcall *off_140B6F3D0[243])();
// 140C65898: using guessed type __int64 qword_140C65898;

