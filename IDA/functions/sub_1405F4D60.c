#include "../winhttp.h"

//----- (00000001405F4D60) ----------------------------------------------------
void __fastcall sub_1405F4D60(__int64 a1, unsigned int a2)
{
	__int16* v4; // rax
	__int64 v5; // r8
	__int64 v6; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v7; // [rsp+28h] [rbp-10h]

	v4 = sub_14034BDD0(a1, *(_DWORD*)(*(_QWORD*)a1 + 4i64 * a2 + 12));
	if (v4)
	{
		v5 = 0i64;
		if (*v4)
		{
			do
				++v5;
			while (v4[v5]);
			if (v5)
			{
				*(_DWORD*)(a1 + 16) = 0;
				v6 = 0i64;
				v7 = 0i64;
				LODWORD(v6) = *(_DWORD*)(a1 + 8);
				v7 = __PAIR64__(a2, *(_DWORD*)(a1 + 12));
				HIDWORD(v6) = **(_DWORD**)a1;
				sub_1403F4900(qword_140C65898, 0x6EEu, (__int64)&v6);
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

