#include "../winhttp.h"

//----- (00000001403994F0) ----------------------------------------------------
__int64 __fastcall sub_1403994F0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // rbx
	unsigned __int64 v4; // rbp
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // ebx
	unsigned int* v11; // rax
	int v12; // eax
	__int64 v13; // r8
	int v15[52]; // [rsp+20h] [rbp-E8h] BYREF
	__int64 v16; // [rsp+110h] [rbp+8h] BYREF

	v16 = a1;
	v3 = qword_140C65898;
	v4 = a3;
	v6 = *(_QWORD*)(qword_140C65898 + 25744);
	v7 = qword_140C65898;
	if (*(_DWORD*)(v6 + 460) && !*(_DWORD*)(v6 + 14240))
	{
		sub_1403A2550(qword_140C65898);
		v3 = qword_140C65898;
	}
	sub_1407E4830(v15, 0i64, 0xC8ui64);
	v8 = *(_QWORD*)(v3 + 120);
	v9 = *(unsigned int*)(v8 + 8);
	v10 = 5;
	v15[7] = *(_DWORD*)(v8 + 8);
	v15[22] = 1;
	if (a2)
		v10 = 0;
	if (a2)
	{
		v11 = *(unsigned int**)(a2 + 112);
		v16 = 0i64;
		if (qword_140C65B70)
		{
			v12 = sub_140561780(v9, v15, *v11, &v16);
			v13 = v16;
			if (v16)
			{
				if (!v12)
				{
					if (v4 > *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64))
						return 331i64;
					v16 = 0i64;
					LODWORD(v16) = **(_DWORD**)(a2 + 112);
					HIDWORD(v16) = *(_DWORD*)(v13 + 96);
					sub_1403F4900(v7, 0xC2u, (__int64)&v16);
					return 0;
				}
			}
		}
	}
	return v10;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

