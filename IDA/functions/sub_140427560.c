#include "../winhttp.h"

//----- (0000000140427560) ----------------------------------------------------
void __fastcall sub_140427560(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // r8
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	unsigned __int64 v9; // r15
	unsigned __int64 v10; // rsi
	int v11; // ebx
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // ebx
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // rdx
	int v20; // [rsp+20h] [rbp-68h]
	__int64(__fastcall * *v21)(); // [rsp+30h] [rbp-58h] BYREF
	int v22; // [rsp+38h] [rbp-50h]
	__int64 v23; // [rsp+40h] [rbp-48h]
	int v24; // [rsp+48h] [rbp-40h]
	__int64(__fastcall * *v25)(); // [rsp+50h] [rbp-38h] BYREF
	int v26; // [rsp+58h] [rbp-30h]
	__int64 v27; // [rsp+60h] [rbp-28h]
	int v28; // [rsp+68h] [rbp-20h]

	v2 = *(_QWORD*)(a1 + 400);
	v24 = 1;
	v3 = *(_QWORD*)(v2 + 32);
	v21 = off_140B569F0;
	v23 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = sub_1400578C0(v2);
	v9 = *(_QWORD*)(a2 + 816);
	v10 = 0i64;
	v11 = v8;
	v22 = v8;
	if (v9)
	{
		do
		{
			v12 = *(_QWORD*)(v2 + 32);
			v25 = off_140B569F0;
			v27 = v2;
			v13 = *(_QWORD*)(v12 + 112);
			v28 = 1;
			if (*(_QWORD*)(v12 + 120) >= v13)
				sub_14005E2C0(v2);
			v14 = *(_QWORD*)(v2 + 16);
			v15 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v14 + 8) = 5;
			*(_QWORD*)v14 = v15;
			*(_QWORD*)(v2 + 16) += 16i64;
			v16 = sub_1400578C0(v2);
			v26 = v16;
			if (v10 >= *(_QWORD*)(a2 + 816))
				v17 = 0i64;
			else
				v17 = *(_QWORD*)(*(_QWORD*)(a2 + 808) + 8 * v10);
			sub_1405808C0(v17, (__int64)&v25);
			sub_1400FB1D0((__int64)&v21);
			sub_1400579E0(v2, v18, v16);
			++v10;
		} while (v10 < v9);
		v2 = v23;
		v11 = v22;
	}
	v20 = v11;
	sub_1400EA3E0(a1, "GuildRoster", byte_1409EA3F4, a2, v20);
	if (v2)
		sub_1400579E0(v2, v19, v11);
}
// 14042768A: variable 'v18' is possibly undefined
// 1404276CC: variable 'v19' is possibly undefined
// 1409EA3F4: using guessed type _BYTE byte_1409EA3F4[64];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

