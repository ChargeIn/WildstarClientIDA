//----- (00000001404D1A40) ----------------------------------------------------
__int64 __fastcall sub_1404D1A40(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r8
	__int64 v3; // r9
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64, __int64, __int64); // rcx
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	v11 = a1;
	v2 = *a2;
	v3 = qword_140C65A38;
	if ((_DWORD)v2)
	{
		v5 = qword_140C65A38 + 152;
		v6 = *(_QWORD*)(qword_140C65A38 + 160);
		v7 = v6;
		v8 = *(_QWORD*)(v6 + 8);
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < (unsigned int)v2)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v7 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v7 == v6 || (v11 = v7, (unsigned int)v2 < *(_DWORD*)(v7 + 32)))
			v11 = v6;
		v9 = v11;
		if (v11 != *(_QWORD*)(qword_140C65A38 + 160))
		{
			*(_QWORD*)(qword_140C65A38
				+ 8i64 * *(int*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 40) + 8i64) + 8i64) + 4i64)
				+ 184) = 0i64;
			v10 = *(void(__fastcall****)(_QWORD, __int64, __int64, __int64))(v9 + 40);
			if (v10)
				(**v10)(v10, 1i64, v2, v3);
			v11 = v9;
			sub_1404D2DA0(v5, &v11);
		}
		return 0i64;
	}
	else
	{
		sub_1404D1570((_QWORD*)qword_140C65A38);
		return 0i64;
	}
}
// 140C65A38: using guessed type __int64 qword_140C65A38;

