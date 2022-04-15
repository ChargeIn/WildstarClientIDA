#include "../winhttp.h"

//----- (0000000140426910) ----------------------------------------------------
void __fastcall sub_140426910(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned int v3; // esi
	__int64 v4; // rdx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // rcx
	int v10; // r14d
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v15; // rdx
	__int64(__fastcall * *v16)(); // [rsp+30h] [rbp-28h] BYREF
	int v17; // [rsp+38h] [rbp-20h]
	__int64 v18; // [rsp+40h] [rbp-18h]
	int v19; // [rsp+48h] [rbp-10h]

	if (a1[756])
	{
		v2 = a1[50];
		v3 = 0;
		v4 = *(_QWORD*)(v2 + 32);
		v16 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v18 = v2;
		v19 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(v2);
		v6 = *(_QWORD*)(v2 + 16);
		v7 = sub_14005C1B0(v2, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(v2 + 16) += 16i64;
		v8 = sub_1400578C0(v2);
		v9 = a1[755];
		v10 = v8;
		v17 = v8;
		v11 = *(_QWORD*)(v9 + 16);
		if (v11 != v9)
		{
			do
			{
				if (!v3)
					v3 = *(_DWORD*)(v11 + 32);
				sub_1400FA9E0((__int64)&v16);
				v12 = *(_QWORD*)(v11 + 24);
				if (v12)
				{
					v11 = *(_QWORD*)(v11 + 24);
					for (i = *(_QWORD*)(v12 + 16); i; i = *(_QWORD*)(i + 16))
						v11 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v11 = j;
					if (*(_QWORD*)(v11 + 24) != j)
						v11 = j;
				}
			} while (v11 != a1[755]);
			v2 = v18;
			v10 = v17;
		}
		sub_140008410((__int64)(a1 + 754));
		sub_1400EA3E0((__int64)a1, "DyeLearned", byte_1409E9EFC, v3, v10);
		if (v2)
			sub_1400579E0(v2, v15, v10);
	}
}
// 140426A67: variable 'v15' is possibly undefined
// 1409E9EFC: using guessed type _BYTE byte_1409E9EFC[24];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

