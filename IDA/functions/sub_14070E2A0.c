//----- (000000014070E2A0) ----------------------------------------------------
__int64 __fastcall sub_14070E2A0(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rax
	__int64 v7; // rdx
	__int64(__fastcall * *v9)(); // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]
	int v12; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 32);
	v9 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v11 = a1;
	v12 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v4) = sub_1400578C0(a1);
	v10 = v4;
	sub_1405E2D90(qword_140C65898 + 26680, (__int64)&v9);
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	v7 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v7 = *v6;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v7, v4);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

