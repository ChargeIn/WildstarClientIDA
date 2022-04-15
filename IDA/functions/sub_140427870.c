//----- (0000000140427870) ----------------------------------------------------
void __fastcall sub_140427870(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // ebx
	__int64 v10; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	_QWORD* v13; // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]
	__int64 v15; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v11 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v13 = v2;
	LODWORD(v14) = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = sub_1400578C0((__int64)v2);
	LODWORD(v12) = v9;
	v15 = a2;
	if ((unsigned int)sub_140433EB0(v2, &v15))
	{
		sub_1400FB540((__int64)&v11);
		v2[2] -= 16i64;
	}
	sub_1400EA3E0(a1, "RecruitmentDetailedGuildInfo", byte_1409EA96C, v9, v11, v12, v13, v14);
	sub_1400579E0((__int64)v2, v10, v9);
}
// 14042794D: variable 'v10' is possibly undefined
// 1409EA96C: using guessed type _BYTE byte_1409EA96C[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

