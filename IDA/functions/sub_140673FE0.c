//----- (0000000140673FE0) ----------------------------------------------------
__int64 __fastcall sub_140673FE0(_DWORD* a1, __int64 a2)
{
	__int64 v3; // rdi
	__int64 v4; // rcx
	unsigned int v5; // r12d
	unsigned __int64 v6; // rax
	int v7; // r13d
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rbp
	__int64 v11; // r14
	__int64 v12; // r15
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // eax
	int v18; // edx
	int v19; // edi
	_DWORD* v20; // r9
	_DWORD* v21; // r8
	_DWORD* v22; // rcx
	__int64 v23; // rdx
	__int64 v24; // rdx
	int v25; // ebx
	__int64(__fastcall * *v27)(); // [rsp+30h] [rbp-68h] BYREF
	int v28; // [rsp+38h] [rbp-60h]
	__int64 v29; // [rsp+40h] [rbp-58h]
	int v30; // [rsp+48h] [rbp-50h]
	__int64(__fastcall * *v31)(); // [rsp+50h] [rbp-48h] BYREF
	int v32; // [rsp+58h] [rbp-40h]
	__int64 v33; // [rsp+60h] [rbp-38h]
	int v34; // [rsp+68h] [rbp-30h]

	if (!a1[335] || a1 == (_DWORD*)-504i64)
		return 0i64;
	v3 = *(_QWORD*)a1;
	v4 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v5 = 0;
	v27 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v29 = v3;
	v7 = 0;
	v30 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0(v3);
	v8 = *(_QWORD*)(v3 + 16);
	v9 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(v3 + 16) += 16i64;
	v28 = sub_1400578C0(v3);
	v10 = 0i64;
	v11 = 52i64;
	v12 = 8i64;
	do
	{
		v13 = *(_QWORD*)a1;
		v34 = 1;
		v14 = *(_QWORD*)(v13 + 32);
		v31 = off_140B569F0;
		v33 = v13;
		if (*(_QWORD*)(v14 + 120) >= *(_QWORD*)(v14 + 112))
			sub_14005E2C0(v13);
		v15 = *(_QWORD*)(v13 + 16);
		v16 = sub_14005C1B0(v13, 0, 0);
		*(_DWORD*)(v15 + 8) = 5;
		*(_QWORD*)v15 = v16;
		*(_QWORD*)(v13 + 16) += 16i64;
		v17 = sub_1400578C0(v13);
		v18 = a1[335];
		v19 = v17;
		v32 = v17;
		v20 = 0i64;
		if (v18)
			v20 = a1 + 126;
		v21 = 0i64;
		v22 = 0i64;
		if (v18)
		{
			v21 = a1 + 126;
			v22 = a1 + 126;
		}
		if ((unsigned int)sub_140677330((__int64)a1, (__int64)&v31, v22[v10 + 36], v21[v10 + 37], 1, (__int64)&v20[v11]))
		{
			v7 = 1;
			sub_1400FB1D0((__int64)&v27);
		}
		sub_1400579E0(v13, v23, v19);
		v11 += 2i64;
		v10 += 2i64;
		--v12;
	} while (v12);
	v25 = v28;
	if (v7)
	{
		sub_1400FB2A0(a2, (__int64)L"arSets", v28);
		v5 = 1;
	}
	if (v29)
		sub_1400579E0(v29, v24, v25);
	return v5;
}
// 140674120: conditional instruction was optimized away because edx.4!=0
// 14067416E: variable 'v23' is possibly undefined
// 1406741D9: variable 'v24' is possibly undefined
// 140B2FC50: using guessed type wchar_t aArsets[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

