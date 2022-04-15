//----- (0000000140651850) ----------------------------------------------------
__int64 __fastcall sub_140651850(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	int v4; // eax
	unsigned int v5; // eax
	__int64 v6; // rax
	int* v7; // r9
	int v8; // ecx
	int v9; // eax
	__int64* v10; // rax
	__int64 v11; // r11
	__int64 v12; // r9
	int v13; // r8d
	__int64 v14; // rdx
	char v16[8]; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+30h] [rbp-18h]

	v2 = sub_1406499E0((__int64)a1);
	v3 = v2;
	if (v2
		&& ((v4 = *(_DWORD*)(v2 + 128), v4 == 20) || v4 == 23)
		&& (v5 = sub_140056D60(a1, 2u), v6 = sub_1402479C0(v5), (v7 = (int*)v6) != 0i64)
		&& ((v8 = *(_DWORD*)(v6 + 36), (v8 & 0x20) != 0)
			|| ((v9 = *(_DWORD*)(v3 + 128), v9 == 20) || v9 == 23) && (v8 & 0x40) != 0))
	{
		sub_140651400((__int64)v16, (__int64)a1, v3, v7);
		v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v17);
		v12 = *(_QWORD*)(v11 + 16);
		v13 = v17;
		v14 = *v10;
		*(_QWORD*)v12 = *v10;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
		*(_QWORD*)(v11 + 16) += 16i64;
		sub_1400579E0(v11, v14, v13);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406518E4: variable 'v11' is possibly undefined
// 140651850: using guessed type char var_28[8];

