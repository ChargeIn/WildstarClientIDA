#include "../winhttp.h"

//----- (00000001408654A0) ----------------------------------------------------
void __fastcall sub_1408654A0(__int64 a1, __int64 a2, float a3)
{
	__int64 v3; // rbx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // [rsp+20h] [rbp-38h] BYREF
	unsigned int i; // [rsp+28h] [rbp-30h]
	__int64 v10; // [rsp+30h] [rbp-28h]
	float v11; // [rsp+38h] [rbp-20h]
	char v12; // [rsp+40h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 32);
	if (*(_QWORD*)(a1 + 40) != v3)
	{
		v11 = a3;
		v8 = a1;
		for (i = i & 0xFFFFFFFC | (a2 == 0); v3 != *(_QWORD*)(a1 + 40); v3 += 40i64)
		{
			v6 = *(_QWORD*)(v3 + 16);
			if (v6)
			{
				v7 = *(_QWORD*)(v6 + 56);
				if (v7)
				{
					if (*(_WORD*)(v7 + 72))
					{
						v12 = 0;
						v10 = v3 + 24;
						(*(void(__fastcall**)(_QWORD, __int64(__fastcall*)(__int64, __int64, __int64), __int64, __int64*))(**(_QWORD**)(v3 + 16) + 208i64))(
							*(_QWORD*)(v3 + 16),
							sub_140865DB0,
							a2,
							&v8);
					}
				}
			}
		}
	}
}

