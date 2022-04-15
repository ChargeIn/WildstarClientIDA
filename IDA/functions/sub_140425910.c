//----- (0000000140425910) ----------------------------------------------------
void __fastcall sub_140425910(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64(__fastcall * *v8)(); // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+30h] [rbp-18h]
	int v11; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 400);
	v3 = *(_QWORD*)(v1 + 32);
	v8 = off_140B569F0;
	v10 = v1;
	v4 = *(_QWORD*)(v3 + 112);
	v11 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	LODWORD(v5) = sub_1400578C0(v1);
	v9 = v5;
	sub_14050E830((__int64)&v8);
	sub_1400EA3E0(a1, "UpdateResurrectDialog", byte_1409E8F44, (unsigned int)v5, v8);
	sub_1400579E0(v1, v7, v5);
}
// 1404259BE: variable 'v7' is possibly undefined
// 1409E8F44: using guessed type _BYTE byte_1409E8F44[48];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

