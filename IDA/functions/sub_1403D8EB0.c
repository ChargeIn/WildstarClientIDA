//----- (00000001403D8EB0) ----------------------------------------------------
__int64 __fastcall sub_1403D8EB0(__int64 a1, __int64 a2)
{
	unsigned __int64 v5; // rbp
	_QWORD* v6; // rbx
	unsigned int* v7; // rbx
	unsigned int v8; // ecx
	unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return 0i64;
	v5 = (*(__int64(__fastcall**)(__int64))(a1 + 176))(a2);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8 * (v5 % *(_QWORD*)(a1 + 160)));
	if (!v6)
		goto LABEL_7;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 184))(a2, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_7;
	}
	v7 = (unsigned int*)v6 + 5;
	if (v7)
	{
		v8 = *v7;
	}
	else
	{
	LABEL_7:
		if (!(unsigned int)sub_1400BD540(a1 + 192, a2 + 16, &v9))
			return 0i64;
		v8 = v9;
	}
	return sub_1402116C0(v8);
}

