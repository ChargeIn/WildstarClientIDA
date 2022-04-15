#include "../winhttp.h"

//----- (00000001405C8130) ----------------------------------------------------
void __fastcall sub_1405C8130(__int64 a1, __int64 a2, __int64 a3)
{
	int v6; // eax
	__int64 v7; // rbp
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	bool v13; // zf
	int v14; // r15d
	unsigned __int64 i; // rbx
	int v16; // eax
	__int64 v17; // rdi
	__int64 v18; // rdx
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-38h] BYREF
	int v20; // [rsp+38h] [rbp-30h]
	__int64 v21; // [rsp+40h] [rbp-28h]
	int v22; // [rsp+48h] [rbp-20h]

	if (a2 && *(_DWORD*)(a3 + 24))
	{
		if (*(_DWORD*)(a3 + 16) != 104
			|| (v6 = *(_DWORD*)(*(_QWORD*)(a2 + 112) + 124i64), v6 != 4) && (unsigned int)(v6 - 7) > 1
			|| *(_QWORD*)(qword_140C65898 + 27880) == a2)
		{
			v7 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			v8 = *(_QWORD*)(v7 + 32);
			v19 = off_140B569F0;
			v22 = 1;
			v9 = *(_QWORD*)(v8 + 112);
			v21 = v7;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0(v7);
			v10 = *(_QWORD*)(v7 + 16);
			v11 = sub_14005C1B0(v7, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v7 + 16) += 16i64;
			v12 = sub_1400578C0(v7);
			v13 = *(_DWORD*)(a3 + 24) == 0;
			v14 = v12;
			v20 = v12;
			if (v13)
				sub_1400FB120((__int64)&v19);
			for (i = 0i64; i < *(_QWORD*)(a3 + 8); ++i)
				sub_1400FB120((__int64)&v19);
			*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
			if (*(_DWORD*)(a3 + 24))
			{
				v16 = *(_DWORD*)(a3 + 16);
				if (v16 == 25)
				{
					*(_DWORD*)(a1 + 240) = 0;
				}
				else if ((unsigned int)(v16 - 14) <= 2)
				{
					*(_DWORD*)(a1 + 192) = (4 * *(_DWORD*)(*(_QWORD*)(a2 + 112) + 264i64)) >> 31;
					if ((unsigned int)(*(_DWORD*)(a3 + 16) - 50) <= 0x7F)
					{
						*(_DWORD*)(a1 + 260) = 1;
						*(_OWORD*)(a1 + 224) = xmmword_140B7B050;
					}
					*(_DWORD*)(a1 + 240) = 1053609165;
				}
				else
				{
					*(_DWORD*)(a1 + 260) = 1;
					*(_OWORD*)(a1 + 224) = xmmword_140B7B050;
				}
				if (*(_DWORD*)(a3 + 16) == 112)
				{
					*(_DWORD*)(a1 + 176) = 1;
					*(_OWORD*)(a1 + 224) = xmmword_140B7B050;
				}
			}
			v17 = *(_QWORD*)(qword_140C65898 + 29504);
			if (sub_1400EC900(v17, "ActionBarDescriptionSpell"))
			{
				sub_1405C6040(a1 + 16, (__int64)&v19, *(_QWORD**)(v17 + 400));
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ActionBarDescriptionSpell",
					byte_1409E9914,
					a2,
					v20,
					v14,
					v19);
				sub_1405C6C80(a1 + 16, (__int64)&v19);
				v19 = off_140B56A08;
				if (v21)
					sub_1400579E0(v21, v18, v20);
			}
			sub_1400579E0(v7, v18, v14);
		}
	}
}
// 1405C8379: variable 'v18' is possibly undefined
// 1409E9914: using guessed type _BYTE byte_1409E9914[56];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B050: using guessed type __int128 xmmword_140B7B050;
// 140C65898: using guessed type __int64 qword_140C65898;

