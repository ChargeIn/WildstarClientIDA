//----- (00000001404D4300) ----------------------------------------------------
__int64 __fastcall sub_1404D4300(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v6; // rax
	__int64 v7; // r11
	__int64 v8; // r10
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64 v12; // [rsp+48h] [rbp+20h]

	v6 = sub_140215240(a2);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(a1 + 40);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < *(_DWORD*)(v6 + 20))
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v12 = v8, *(_DWORD*)(v6 + 20) < *(_DWORD*)(v8 + 32)))
		v12 = *(_QWORD*)(a1 + 40);
	if (v12 != v7 && (v10 = *(_QWORD*)(v12 + 40)) != 0)
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v10 + 32i64))(v10, a2, a3);
	else
		return 0i64;
}

