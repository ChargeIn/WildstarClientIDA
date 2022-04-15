//----- (00000001404276F0) ----------------------------------------------------
void __fastcall sub_1404276F0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v5; // r9
	unsigned __int64 v7; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdx
	int v12; // [rsp+20h] [rbp-38h]
	__int64(__fastcall * *v13)(); // [rsp+30h] [rbp-28h] BYREF
	int v14; // [rsp+38h] [rbp-20h]
	__int64 v15; // [rsp+40h] [rbp-18h]
	int v16; // [rsp+48h] [rbp-10h]

	v3 = *(_QWORD*)(a1 + 400);
	v5 = *(_QWORD*)(v3 + 32);
	v13 = off_140B569F0;
	v7 = *(_QWORD*)(v5 + 112);
	v15 = v3;
	v16 = 1;
	if (*(_QWORD*)(v5 + 120) >= v7)
		sub_14005E2C0(v3);
	v9 = *(_QWORD*)(v3 + 16);
	v10 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v3 + 16) += 16i64;
	LODWORD(v9) = sub_1400578C0(v3);
	v14 = v9;
	sub_1405808C0(a3, (__int64)&v13);
	v12 = v9;
	sub_1400EA3E0(a1, "GuildMemberChange", byte_1409EA3B4, a2, v12);
	sub_1400579E0(v3, v11, v9);
}
// 1404277C1: variable 'v11' is possibly undefined
// 1409EA3B4: using guessed type _BYTE byte_1409EA3B4[32];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

