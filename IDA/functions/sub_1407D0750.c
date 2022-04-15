//----- (00000001407D0750) ----------------------------------------------------
__int64 __fastcall sub_1407D0750(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	int v5; // ebx
	__int64 v6; // rcx
	char* v7; // rdx
	__int64 v8; // r8
	int v9; // eax
	__int64 v10; // [rsp+40h] [rbp-B8h] BYREF
	char v11[48]; // [rsp+50h] [rbp-A8h] BYREF
	char v12[96]; // [rsp+80h] [rbp-78h] BYREF

	result = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 112i64))(
		qword_140C65670,
		a2,
		0i64,
		0i64,
		1,
		0,
		0,
		&v10);
	v5 = result;
	if ((int)result >= 0)
	{
		if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 48i64))(v10))
		{
			sub_1400035B0();
			return (unsigned int)v5;
		}
		v5 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v10 + 112i64))(v10, v11);
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		if (v5 < 0)
			return (unsigned int)v5;
		v6 = a3 + 96;
		v7 = &v11[-a3];
		v8 = 9i64;
		do
		{
			v9 = *(_DWORD*)&v7[v6 - 96];
			v6 += 4i64;
			*(_DWORD*)(v6 - 100) = v9;
			*(_DWORD*)(v6 - 52) = *(_DWORD*)&v12[v6 - a3 - 100];
			*(_DWORD*)(v6 - 4) = *(_DWORD*)&v7[v6 - 4];
			--v8;
		} while (v8);
		return 0i64;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 1407D0750: using guessed type char var_78[96];

