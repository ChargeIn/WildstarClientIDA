//----- (000000014039CEE0) ----------------------------------------------------
__int64 __fastcall sub_14039CEE0(__int64 a1, __int64 a2)
{
	unsigned int v4; // r8d
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v10; // [rsp+20h] [rbp-4E8h]
	__int64 v11[96]; // [rsp+30h] [rbp-4D8h] BYREF
	__int64 v12; // [rsp+330h] [rbp-1D8h]

	sub_14040FAE0((__int64)v11);
	v4 = *(_DWORD*)(a2 + 4);
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 32144) + 40i64);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v10 = v6, v4 < *(_DWORD*)(v6 + 32)))
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32144) + 40i64);
	if (v10 == v5)
		v8 = 0i64;
	else
		v8 = v10 + 40;
	sub_1404111E0((__int64)v11, v8, 1);
	sub_140430E00(*(_QWORD*)(a1 + 29504), *(_DWORD*)(a2 + 4), (__int64)v11);
	if (v11[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11[0] + 8i64))(v11[0]);
		v11[0] = 0i64;
	}
	if (v12)
		sub_14018B900(v12, 0);
	return 0i64;
}

