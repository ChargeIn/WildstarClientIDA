#include "../winhttp.h"

//----- (0000000140431930) ----------------------------------------------------
void __fastcall sub_140431930(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // ebx
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64(__fastcall * *v10)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]
	__int64 v13; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 400);
	v3 = *(_QWORD*)(v1 + 32);
	v10 = off_140B569F0;
	v12 = v1;
	v4 = *(_QWORD*)(v3 + 112);
	LODWORD(v13) = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	v7 = sub_1400578C0(v1);
	LODWORD(v11) = v7;
	v8 = *(_QWORD*)(qword_140C635F0 + 5584);
	if (v8)
		sub_140003C90(v8, (__int64)&v10);
	sub_1400EA3E0(a1, "DailyLoginUpdate", "T", v7, v10, v11, v12, v13);
	sub_1400579E0(v1, v9, v7);
}
// 1404319F1: variable 'v9' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

