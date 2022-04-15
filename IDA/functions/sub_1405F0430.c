#include "../winhttp.h"

//----- (00000001405F0430) ----------------------------------------------------
void __fastcall sub_1405F0430(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v4; // rdi
	__int64 v5; // r10
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // r8
	unsigned int* v14; // rdx
	int v15; // ebp
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // r8
	__int64 v22; // rdx
	int v23; // ebx
	__int64 v24; // rdx
	__int64(__fastcall * *v25)(); // [rsp+30h] [rbp-58h] BYREF
	int v26; // [rsp+38h] [rbp-50h]
	__int64 v27; // [rsp+40h] [rbp-48h]
	int v28; // [rsp+48h] [rbp-40h]
	__int64(__fastcall * *v29)(); // [rsp+50h] [rbp-38h] BYREF
	int v30; // [rsp+58h] [rbp-30h]
	__int64 v31; // [rsp+60h] [rbp-28h]
	int v32; // [rsp+68h] [rbp-20h]

	v4 = *(_QWORD*)(a2 + 16);
	v32 = 1;
	v5 = *(_QWORD*)(v4 + 32);
	v29 = off_140B569F0;
	v31 = v4;
	if (*(_QWORD*)(v5 + 120) >= *(_QWORD*)(v5 + 112))
		sub_14005E2C0(v4);
	v10 = *(_QWORD*)(v4 + 16);
	v11 = sub_14005C1B0(v4, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	*(_QWORD*)(v4 + 16) += 16i64;
	v12 = sub_1400578C0(v4);
	v13 = *(_QWORD*)(a1 + 8);
	v14 = *(unsigned int**)a1;
	v30 = v12;
	sub_1405F8630((__int64)&v29, v14, v13, a3, a4);
	v15 = v30;
	sub_1400FB2A0(a2, (__int64)L"arTeamStats", v30);
	v16 = *(_QWORD*)(a2 + 16);
	v25 = off_140B569F0;
	v17 = *(_QWORD*)(v16 + 32);
	v27 = v16;
	v28 = 1;
	if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
		sub_14005E2C0(v16);
	v18 = *(_QWORD*)(v16 + 16);
	v19 = sub_14005C1B0(v16, 0, 0);
	*(_DWORD*)(v18 + 8) = 5;
	*(_QWORD*)v18 = v19;
	*(_QWORD*)(v16 + 16) += 16i64;
	v20 = sub_1400578C0(v16);
	v21 = *(_QWORD*)(a1 + 24);
	v22 = *(_QWORD*)(a1 + 16);
	v26 = v20;
	sub_1405F8760((__int64)&v25, v22, v21, a3);
	v23 = v26;
	sub_1400FB2A0(a2, (__int64)L"arParticipantStats", v26);
	if (v27)
		sub_1400579E0(v27, v24, v23);
	if (v31)
		sub_1400579E0(v31, v24, v15);
}
// 1405F0573: variable 'v24' is possibly undefined
// 140B240D0: using guessed type wchar_t aArteamstats_0[12];
// 140B240E8: using guessed type wchar_t aArparticipants_0[19];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

