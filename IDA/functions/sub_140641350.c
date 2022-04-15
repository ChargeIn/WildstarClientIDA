//----- (0000000140641350) ----------------------------------------------------
__int64 __fastcall sub_140641350(__int64 a1, double a2)
{
	BOOL v3; // eax
	bool v4; // zf
	int v5; // eax
	__int64* v6; // rcx
	__int64 v7; // rax
	int v8; // eax
	__int64* v9; // rcx
	__int64 v10; // rax
	int v11; // eax
	__int64* v12; // rcx
	__int64 v13; // rax
	char v15[4]; // [rsp+20h] [rbp-28h] BYREF
	char v16; // [rsp+24h] [rbp-24h]
	char v17; // [rsp+25h] [rbp-23h]
	bool v18; // [rsp+26h] [rbp-22h]
	bool v19; // [rsp+27h] [rbp-21h]
	bool v20; // [rsp+28h] [rbp-20h]
	bool v21; // [rsp+29h] [rbp-1Fh]

	v15[0] = sub_1404DACF0(a1);
	v15[1] = sub_1404DAD90(a1);
	if (sub_14039E1A0(a1))
	{
		v3 = 1;
	}
	else if ((unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)))
	{
		v3 = 1;
	}
	else
	{
		v3 = (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			32i64)
			&& *(_DWORD*)(a1 + 29232) == 2
			|| (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
				*(_QWORD*)(a1 + 30088),
				47i64)
			&& *(_DWORD*)(a1 + 29236) == 2;
	}
	v15[2] = v3;
	v15[3] = sub_1404DAF50(a1);
	if (sub_1404DAC20(a1)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			28i64)
		|| (v4 = *(_DWORD*)(a1 + 25480) == 0, v16 = 1, !v4))
	{
		v16 = 0;
	}
	if (sub_1404DAC20(a1)
		|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			29i64)
		|| (v4 = *(_DWORD*)(a1 + 25480) == 0, v17 = 1, !v4))
	{
		v17 = 0;
	}
	v5 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(*(_QWORD*)(a1 + 30088), 43i64);
	v6 = *(__int64**)(a1 + 30088);
	v4 = v5 == 0;
	v7 = *v6;
	v18 = !v4;
	v8 = (*(__int64(__fastcall**)(__int64*, __int64))(v7 + 200))(v6, 44i64);
	v9 = *(__int64**)(a1 + 30088);
	v4 = v8 == 0;
	v10 = *v9;
	v19 = !v4;
	v11 = (*(__int64(__fastcall**)(__int64*, __int64))(v10 + 200))(v9, 41i64);
	v12 = *(__int64**)(a1 + 30088);
	v4 = v11 == 0;
	v13 = *v12;
	v20 = !v4;
	v21 = (*(unsigned int(__fastcall**)(__int64*, __int64))(v13 + 200))(v12, 42i64) != 0;
	sub_14062C2D0((__int64*)(a1 + 29088), a2, (__m128*)(a1 + 30128), v15);
	return 0i64;
}

