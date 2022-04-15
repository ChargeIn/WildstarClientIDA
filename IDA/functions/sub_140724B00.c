#include "../winhttp.h"

//----- (0000000140724B00) ----------------------------------------------------
void __fastcall sub_140724B00(__int64 a1, int a2)
{
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx

	sub_140724950(a1, a2);
	v4 = sub_140207D60(*(_DWORD*)(a1 + 108));
	if (v4)
	{
		v5 = *(_DWORD*)(v4 + 24);
		if (((v5 & 0x340) == 0 || v5 == *(_DWORD*)(a1 + 116)) && (v5 & 0x342) != 0)
		{
			v6 = sub_1404C2740(a1);
			if (v6)
			{
				v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 344i64))(v6);
				sub_140724CD0(v8, v7, a2);
			}
		}
	}
}
// 140724B56: variable 'v8' is possibly undefined

