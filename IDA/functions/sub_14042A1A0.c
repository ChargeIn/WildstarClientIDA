#include "../winhttp.h"

//----- (000000014042A1A0) ----------------------------------------------------
void __fastcall sub_14042A1A0(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	int v11; // ebx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	__int64 v23; // rax
	__int64 v24; // rdx
	int v25; // [rsp+20h] [rbp-38h]
	__int64(__fastcall * *v26)(); // [rsp+30h] [rbp-28h] BYREF
	int v27; // [rsp+38h] [rbp-20h]
	_QWORD* v28; // [rsp+40h] [rbp-18h]
	int v29; // [rsp+48h] [rbp-10h]

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v26 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v28 = v2;
	v29 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = sub_1400578C0((__int64)v2);
	v10 = *(_QWORD*)(v2[4] + 160i64);
	v11 = v9;
	v27 = v9;
	v12 = sub_14005C3C0(v10, v9);
	v13 = v2[2];
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v13, L"ePetType", v14);
	v2[2] -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v11);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v17, L"idPet", v18);
	v2[2] -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v11);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v21, L"nFlairSlotIndex", v22);
	v2[2] -= 16i64;
	v23 = sub_140224D00(a2[4]);
	if (v23 && (unsigned int)sub_140434100(v2, v23))
	{
		sub_1400FB540((__int64)&v26);
		v2[2] -= 16i64;
	}
	v25 = v11;
	Apollo_LUAEvent(a1, "PetCustomizationFailed", byte_1409EC17C, *a2, v25);
	sub_1400579E0((__int64)v2, v24, v11);
}
// 14042A257: variable 'v14' is possibly undefined
// 14042A288: variable 'v16' is possibly undefined
// 14042A29A: variable 'v17' is possibly undefined
// 14042A29A: variable 'v18' is possibly undefined
// 14042A2CC: variable 'v20' is possibly undefined
// 14042A2DE: variable 'v21' is possibly undefined
// 14042A2DE: variable 'v22' is possibly undefined
// 14042A353: variable 'v24' is possibly undefined
// 1409EC17C: using guessed type _BYTE byte_1409EC17C[24];
// 140B00DD8: using guessed type wchar_t aNflairslotinde[16];
// 140B00DF8: using guessed type wchar_t aIdpet[6];
// 140B00E08: using guessed type wchar_t aEpettype[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

