//----- (000000014066DE30) ----------------------------------------------------
__int64 __fastcall sub_14066DE30(_DWORD* a1, __int64 a2)
{
	int v4; // eax
	__int64 v5; // rbp
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r15d
	__int64 v11; // rsi
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // ebx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-38h] BYREF
	int v20; // [rsp+28h] [rbp-30h]
	__int64 v21; // [rsp+30h] [rbp-28h]
	int v22; // [rsp+38h] [rbp-20h]

	if (a1[2])
		sub_14066E2F0(a1);
	sub_140008410((__int64)(a1 + 6));
	sub_140008410((__int64)(a1 + 14));
	sub_14066E1E0((__int64)a1, 1);
	if (a1[2])
	{
		v4 = sub_14066E1E0((__int64)a1, 0);
		v5 = *(_QWORD*)a1;
		a1[4] = v4;
		v6 = *(_QWORD*)(v5 + 32);
		v19 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v21 = v5;
		v22 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v5);
		v8 = *(_QWORD*)(v5 + 16);
		v9 = sub_14005C1B0(v5, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v5 + 16) += 16i64;
		v10 = sub_1400578C0(v5);
		v20 = v10;
		if (sub_14066E6D0((__int64)a1, 1, (__int64)&v19))
			sub_1400FB2A0(a2, (__int64)L"tPrimary", v10);
		v11 = *(_QWORD*)a1;
		v19 = off_140B569F0;
		v12 = *(_QWORD*)(v11 + 32);
		v21 = v11;
		v22 = 1;
		if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
			sub_14005E2C0(v11);
		v13 = *(_QWORD*)(v11 + 16);
		v14 = sub_14005C1B0(v11, 0, 0);
		*(_DWORD*)(v13 + 8) = 5;
		*(_QWORD*)v13 = v14;
		*(_QWORD*)(v11 + 16) += 16i64;
		v15 = sub_1400578C0(v11);
		v20 = v15;
		if (sub_14066E6D0((__int64)a1, 0, (__int64)&v19))
			sub_1400FB2A0(a2, (__int64)L"tCompare", v15);
		sub_1400579E0(v11, v16, v15);
		sub_1400579E0(v5, v17, v10);
		return 1i64;
	}
	else
	{
		a1[4] = 0;
		sub_14066E6D0((__int64)a1, 1, a2);
		return 1i64;
	}
}
// 14066DFAA: variable 'v16' is possibly undefined
// 14066DFB5: variable 'v17' is possibly undefined
// 140B2F178: using guessed type wchar_t aTcompare[9];
// 140B2F198: using guessed type wchar_t aTprimary[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

