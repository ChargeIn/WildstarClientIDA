//----- (000000014049C720) ----------------------------------------------------
__int64 __fastcall sub_14049C720(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v7; // rcx
	unsigned int v8; // ebx
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rax
	BOOL v12; // eax
	unsigned int v13; // ecx
	int v14; // edi

	if (!a2)
		return 0i64;
	v7 = *(_QWORD*)(a2 + 280);
	v8 = 0;
	if (!v7
		|| (v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7), (v11 = sub_140717160(v10, v9)) == 0)
		|| (v12 = sub_1407176B0(v11, a4), v13 = 1, !v12))
	{
		v13 = 0;
	}
	v14 = a3 - 1;
	if (v14)
	{
		if (v14 == 1)
		{
			LOBYTE(v8) = v13 == 0;
			return v8;
		}
	}
	else
	{
		return v13;
	}
	return v8;
}
// 14049C75D: variable 'v10' is possibly undefined

