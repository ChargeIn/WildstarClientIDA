//----- (000000014045B830) ----------------------------------------------------
__int64 __fastcall sub_14045B830(__int64 a1)
{
	__int64 v1; // r8
	unsigned int v2; // edx
	unsigned int v4; // ebx
	int v5; // eax
	__int64 v6; // rax
	int v7; // ecx
	int v8; // ecx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx

	v1 = *(_QWORD*)(a1 + 24);
	v2 = *(_DWORD*)(v1 + 108);
	if (!v2)
		return 0i64;
	v4 = 0;
	v5 = *(_DWORD*)(v1 + 108);
	if (!v1)
		v5 = 0;
	if (*(_DWORD*)(qword_140C65898 + 5780) == v5)
		return 0i64;
	v6 = sub_1401ED460(v2);
	if (!v6)
		return 0i64;
	v7 = *(_DWORD*)(v6 + 4);
	if (!v7)
		return 1i64;
	v8 = v7 - 1;
	if (v8)
	{
		if (v8 != 1)
			return 0i64;
		v9 = *(_QWORD*)(qword_140C65898 + 120);
		if (v9 && (v10 = *(_QWORD*)(v9 + 280)) != 0)
		{
			LOBYTE(v4) = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10) == 166;
			return v4;
		}
		else
		{
			LOBYTE(v4) = 0;
			return v4;
		}
	}
	else
	{
		v11 = *(_QWORD*)(qword_140C65898 + 120);
		if (v11 && (v12 = *(_QWORD*)(v11 + 280)) != 0)
		{
			LOBYTE(v4) = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 24i64))(v12) == 167;
			return v4;
		}
		else
		{
			LOBYTE(v4) = 0;
			return v4;
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

