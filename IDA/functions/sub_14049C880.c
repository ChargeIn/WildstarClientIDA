//----- (000000014049C880) ----------------------------------------------------
__int64 __fastcall sub_14049C880(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v6; // ebx
	__int64 v7; // rdx
	BOOL v8; // ecx
	int v9; // edi

	if (!a2)
		return 0i64;
	v6 = 0;
	v7 = *(_QWORD*)(qword_140C65898 + 29064);
	v8 = 0;
	if (v7)
	{
		if (a4)
			v8 = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 104i64))(v7) == a4;
		else
			v8 = 1;
	}
	v9 = a3 - 1;
	if (v9)
	{
		if (v9 == 1)
		{
			LOBYTE(v6) = !v8;
			return v6;
		}
	}
	else
	{
		return v8;
	}
	return v6;
}
// 140C65898: using guessed type __int64 qword_140C65898;

