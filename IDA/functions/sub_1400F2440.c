//----- (00000001400F2440) ----------------------------------------------------
char __fastcall sub_1400F2440(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	int v14; // [rsp+28h] [rbp-10h]

	v3 = *(_QWORD*)(a1 + 16);
	if (!v3 || !a2)
		return 0;
	v7 = sub_140062650(*(_QWORD*)(a1 + 16), (unsigned __int64*)"package", 7ui64);
	v8 = *(_QWORD*)(v3 + 16);
	v13 = v7;
	v14 = 4;
	sub_14005E8E0(v3, v3 + 120, (int*)&v13, v8);
	*(_QWORD*)(v3 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = *(_QWORD*)(v9 + 16);
	v11 = sub_140062650(v9, (unsigned __int64*)"preload", 7ui64);
	v12 = *(_QWORD*)(v9 + 16);
	v13 = v11;
	v14 = 4;
	sub_14005E8E0(v9, v10 - 16, (int*)&v13, v12);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400587D0(*(_QWORD**)(a1 + 16), a3, 0);
	sub_140058A40(*(_QWORD*)(a1 + 16), -2);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	return 1;
}

