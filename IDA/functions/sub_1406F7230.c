//----- (00000001406F7230) ----------------------------------------------------
__int64 __fastcall sub_1406F7230(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	if (v2)
	{
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v2 + 192));
		v4 = v3;
		if (v3)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 32i64))(v3))
				return sub_140649930(a1, v4);
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

