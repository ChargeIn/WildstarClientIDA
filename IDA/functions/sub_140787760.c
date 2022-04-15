//----- (0000000140787760) ----------------------------------------------------
__int64 __fastcall sub_140787760(__int64 a1, int a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	unsigned int* v7; // rdi
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // ecx
	float v11; // [rsp+40h] [rbp+18h] BYREF

	v4 = sub_140717160(a1, a2);
	v5 = v4;
	if (!v4)
		return 5i64;
	if (*(_QWORD*)(a1 + 24) || *(_QWORD*)(a1 + 32))
	{
		v7 = (unsigned int*)v4;
		while ((*(int(__fastcall**)(_QWORD, _QWORD, float*))(a1 + 32))(
			*(_QWORD*)(a1 + 24),
			**(unsigned int**)v7,
			&v11) < 0)
		{
			v7 = (unsigned int*)*((_QWORD*)v7 + 1);
			if (!v7)
				goto LABEL_8;
		}
		return sub_1407A2A00(v11);
	}
	else
	{
		do
		{
		LABEL_8:
			v8 = sub_140717560(*(_QWORD**)(a1 + 16), **(_DWORD**)v5);
			if (v8)
				return *(unsigned int*)(v8 + 12);
			v5 = *(_QWORD*)(v5 + 8);
		} while (v5);
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		v10 = 5;
		if (a2 == v9)
			return 10;
		return v10;
	}
}

