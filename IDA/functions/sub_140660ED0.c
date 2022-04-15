//----- (0000000140660ED0) ----------------------------------------------------
__int64 __fastcall sub_140660ED0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbp
	__int64 v5; // r14
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	int v8; // edx
	BOOL v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	int v12; // ecx
	_DWORD* v13; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		v4 = qword_140C65898;
		v5 = v3 + 416;
		v6 = (*(__int64(__fastcall**)(__int64))(qword_140C65898 + 26864))(v3 + 416);
		v7 = *(_QWORD**)(*(_QWORD*)(v4 + 26856) + 8 * (v6 % *(_QWORD*)(v4 + 26848)));
		if (!v7)
			goto LABEL_7;
		while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v4 + 26872))(v5, v7 + 2))
		{
			v7 = (_QWORD*)v7[1];
			if (!v7)
				goto LABEL_7;
		}
		if (v7 == (_QWORD*)-32i64)
		{
		LABEL_7:
			v8 = 0;
			v9 = 0;
		}
		else
		{
			v8 = 0;
			v12 = *(_DWORD*)(v7[4] + 208i64);
			v9 = v12 == 3 || v12 == 4;
		}
		v10 = *(_DWORD**)(a1 + 16);
		LOBYTE(v8) = v9;
		v10[2] = 1;
		result = 1i64;
		*v10 = v8;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		v13 = *(_DWORD**)(a1 + 16);
		*v13 = 0;
		v13[2] = 1;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

