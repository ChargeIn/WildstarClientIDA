//----- (0000000140833F20) ----------------------------------------------------
__int64 sub_140833F20()
{
	int v0; // ecx
	__int64 v1; // rax
	__int64 v2; // rdi
	__int64 v3; // rbx
	int v4; // esi
	int v5; // ebx
	__int64 v6; // rbx
	int v7; // edi
	unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

	v0 = dword_140C61F68;
	v9 = 0;
	if (!dword_140C61F68)
		goto LABEL_10;
	--dword_140C61F68;
	if (v0 - 1 != 20 * ((v0 - 1) / 20))
		goto LABEL_10;
	v1 = sub_14085CA20((__int64)&hWnd);
	v2 = v1;
	if (!v1)
		goto LABEL_10;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 8i64))(v1) != 1
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2) != 1)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2);
		v5 = dword_140C10F28;
		(**(void(__fastcall***)(__int64, _QWORD))v2)(v2, 0i64);
		sub_140881720(v5, v2);
	LABEL_10:
		v2 = qword_140C61C60;
		goto LABEL_11;
	}
	(*(void (**)(void))(*(_QWORD*)qword_140C61C60 + 24i64))();
	v3 = qword_140C61C60;
	v4 = dword_140C10F28;
	if (qword_140C61C60)
	{
		(**(void(__fastcall***)(__int64, _QWORD))qword_140C61C60)(qword_140C61C60, 0i64);
		sub_140881720(v4, v3);
	}
	qword_140C61C60 = v2;
	dword_140C61F68 = 0;
LABEL_11:
	if ((*(unsigned int(__fastcall**)(__int64, unsigned int*))(*(_QWORD*)v2 + 56i64))(v2, &v9) != 1 || byte_140C61F49)
	{
		byte_140C61F49 = 0;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 24i64))(qword_140C61C60);
		v6 = qword_140C61C60;
		v7 = dword_140C10F28;
		if (qword_140C61C60)
		{
			(**(void(__fastcall***)(__int64, _QWORD))qword_140C61C60)(qword_140C61C60, 0i64);
			sub_140881720(v7, v6);
		}
		qword_140C61C60 = sub_14085CB20();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 8i64))(qword_140C61C60);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 16i64))(qword_140C61C60);
		dword_140C61F68 = 200;
	}
	return v9;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61C60: using guessed type __int64 qword_140C61C60;
// 140C61F49: using guessed type char byte_140C61F49;
// 140C61F68: using guessed type int dword_140C61F68;

