//----- (0000000140774A40) ----------------------------------------------------
__int64 __fastcall sub_140774A40(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rdx
	float v11; // xmm6_4
	__int64 v12; // rax
	__int64* v13; // rax
	__int64* v14; // rax
	__int128 v16; // [rsp+20h] [rbp-28h] BYREF

	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v5 = a2[2];
	v6 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	a2[2] += 16i64;
	LODWORD(v5) = *(_DWORD*)a3;
	sub_140058710((__int64)a2, (unsigned __int64*)"id", 2ui64);
	v7 = a2[2];
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)(int)v5;
	a2[2] += 16i64;
	v8 = (__int64*)sub_1400580E0((__int64)a2, -3);
	sub_14005EA50((__int64)a2, v8, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
	a2[2] -= 32i64;
	v16 = *(_OWORD*)(a3 + 16);
	sub_1400F0170((__int64)a2, v9, (unsigned __int64*)"locFrom", (float*)&v16);
	v16 = *(_OWORD*)(a3 + 32);
	sub_1400F0170((__int64)a2, v10, (unsigned __int64*)"locTo", (float*)&v16);
	v11 = *(float*)(a3 + 48);
	sub_140058710((__int64)a2, (unsigned __int64*)"fWidth", 6ui64);
	v12 = a2[2];
	*(_DWORD*)(v12 + 8) = 3;
	*(double*)v12 = v11;
	a2[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a2, -3);
	sub_14005EA50((__int64)a2, v13, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
	a2[2] -= 32i64;
	sub_140058710((__int64)a2, (unsigned __int64*)"crLine", 6ui64);
	sub_1401181F0(a2, (_DWORD*)(a3 + 64));
	v14 = (__int64*)sub_1400580E0((__int64)a2, -3);
	sub_14005EA50((__int64)a2, v14, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
	a2[2] -= 32i64;
	return 1i64;
}
// 140774B04: variable 'v9' is possibly undefined
// 140774B21: variable 'v10' is possibly undefined

