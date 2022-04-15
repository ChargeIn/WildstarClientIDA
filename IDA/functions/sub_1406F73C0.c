//----- (00000001406F73C0) ----------------------------------------------------
__int64 sub_1406F73C0()
{
	__int64 v0; // rax
	__int64 v1; // rax

	v0 = *(_QWORD*)(qword_140C65898 + 120);
	if (v0)
	{
		v1 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v0 + 192));
		if (v1)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 32i64))(v1))
				sub_14039E400(qword_140C65898);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

