//----- (000000014049CDD0) ----------------------------------------------------
__int64 __fastcall sub_14049CDD0(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v6; // rdi
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rdi
	_DWORD* v11; // rax
	unsigned int v12; // ecx
	unsigned int v13; // edx
	int v14; // ebx

	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		return 0i64;
	v8 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + 192));
	if (v8
		&& *(_DWORD*)(v8 + 128) == 9
		&& (v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + 192)), (v10 = v9) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9)
		&& (v11 = *(_DWORD**)(v10 + 24)) != 0i64)
	{
		v12 = 0;
		v13 = 0;
		if (!a4 || *v11 == a4)
			v13 = 1;
		v14 = a3 - 1;
		if (!v14)
			return v13;
		if (v14 == 1)
		{
			LOBYTE(v12) = v13 == 0;
			return v12;
		}
	}
	else if (a3 == 2)
	{
		return 1i64;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

