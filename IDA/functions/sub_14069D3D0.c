//----- (000000014069D3D0) ----------------------------------------------------
void __fastcall sub_14069D3D0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-60h] BYREF
	int v13; // [rsp+28h] [rbp-58h]
	__int64 v14; // [rsp+30h] [rbp-50h]
	int v15; // [rsp+38h] [rbp-48h]
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-40h] BYREF
	int v17; // [rsp+48h] [rbp-38h]
	__int64 v18; // [rsp+50h] [rbp-30h]
	int v19; // [rsp+58h] [rbp-28h]
	__int64(__fastcall * *v20)(); // [rsp+60h] [rbp-20h] BYREF
	int v21; // [rsp+68h] [rbp-18h]
	__int64 v22; // [rsp+70h] [rbp-10h]
	int v23; // [rsp+78h] [rbp-8h]

	v1 = *(_QWORD*)(a1 + 16);
	v23 = 1;
	v21 = -2;
	v22 = v1;
	v20 = off_140B569F0;
	if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v21 = sub_1400578C0(v1);
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v20[1])(&v20))
		sub_14069D600((__int64)&v20);
	sub_1400FB2A0(a1, (__int64)L"tBackgroundIcon", v21);
	v5 = *(_QWORD*)(a1 + 16);
	v16 = off_140B569F0;
	v18 = v5;
	v19 = 1;
	v17 = -2;
	if (*(_QWORD*)(*(_QWORD*)(v5 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v5 + 32) + 112i64))
		sub_14005E2C0(v5);
	v6 = *(_QWORD*)(v5 + 16);
	v7 = sub_14005C1B0(v5, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v5 + 16) += 16i64;
	v17 = sub_1400578C0(v5);
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v16[1])(&v16))
		sub_14069D600((__int64)&v16);
	sub_1400FB2A0(a1, (__int64)L"tForegroundIcon", v17);
	v8 = *(_QWORD*)(a1 + 16);
	v12 = off_140B569F0;
	v14 = v8;
	v15 = 1;
	v13 = -2;
	if (*(_QWORD*)(*(_QWORD*)(v8 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v8 + 32) + 112i64))
		sub_14005E2C0(v8);
	v9 = *(_QWORD*)(v8 + 16);
	v10 = sub_14005C1B0(v8, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v8 + 16) += 16i64;
	v13 = sub_1400578C0(v8);
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v12[1])(&v12))
		sub_14069D600((__int64)&v12);
	sub_1400FB2A0(a1, (__int64)L"tScanLines", v13);
	v12 = off_140B56A08;
	if (v14)
		sub_1400579E0(v14, v11, v13);
	v16 = off_140B56A08;
	if (v18)
		sub_1400579E0(v18, v11, v17);
	v20 = off_140B56A08;
	if (v22)
		sub_1400579E0(v22, v11, v21);
}
// 14069D5B0: variable 'v11' is possibly undefined
// 140B34C10: using guessed type wchar_t aTscanlines[11];
// 140B34C38: using guessed type wchar_t aTbackgroundico[16];
// 140B34C58: using guessed type wchar_t aTforegroundico[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

