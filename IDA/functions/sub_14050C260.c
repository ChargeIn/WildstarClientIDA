//----- (000000014050C260) ----------------------------------------------------
__int64 __fastcall sub_14050C260(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	bool v8; // zf
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v5) + 400i64) == a1)
				break;
			v5 = ++v4;
		} while (v4 < v3);
	}
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6
		|| (v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + 192))) == 0
		|| (v8 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7) == 0, v9 = 1, v8))
	{
		v9 = 0;
	}
	v10 = *(_DWORD**)(a1 + 16);
	v8 = v9 == 0;
	result = 1i64;
	LOBYTE(v1) = !v8;
	v10[2] = 1;
	*v10 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

