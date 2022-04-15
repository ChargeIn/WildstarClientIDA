//----- (0000000140156170) ----------------------------------------------------
__int64 sub_140156170(__int64 a1, int a2, ...)
{
	unsigned int v2; // ebx
	int(__fastcall * **v4)(_QWORD, void*, __int64*); // rcx
	__int64 v6; // rsi
	__int64 v7; // rbp
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // r8
	int(__fastcall * *v11)(__int64, void*, __int64*); // rax
	__int64 v12; // rax
	__int64 v13; // r8
	__int64 v15; // [rsp+20h] [rbp-48h] BYREF
	__int64 v16; // [rsp+28h] [rbp-40h] BYREF
	__int64 v17[7]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v18; // [rsp+80h] [rbp+18h] BYREF
	va_list va; // [rsp+80h] [rbp+18h]
	__int64 v20; // [rsp+88h] [rbp+20h] BYREF
	va_list va1; // [rsp+88h] [rbp+20h]
	va_list va2; // [rsp+90h] [rbp+28h] BYREF

	va_start(va2, a2);
	va_start(va1, a2);
	va_start(va, a2);
	v18 = va_arg(va1, _QWORD);
	va_copy(va2, va1);
	v20 = va_arg(va2, _QWORD);
	v2 = 0;
	v4 = *(int(__fastcall****)(_QWORD, void*, __int64*))(a1 + 472);
	v20 = 0i64;
	v16 = 0i64;
	v17[0] = 0i64;
	if ((**v4)(v4, &unk_1409C6BA0, (__int64*)va1) < 0)
		return 0i64;
	if ((*(int(__fastcall**)(__int64, void*, __int64*))(*(_QWORD*)v20 + 24i64))(v20, &unk_1409C6580, &v16) < 0)
		goto LABEL_25;
	if ((*(int(__fastcall**)(__int64, void*, __int64*))(*(_QWORD*)v20 + 24i64))(v20, &unk_140C57BF0, v17) < 0)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 16i64))(v16);
	LABEL_25:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 16i64))(v20);
		return 0i64;
	}
	v6 = v16;
	v7 = v20;
	v8 = v17[0];
	if (!v16 || !v17[0])
		return 0i64;
	v15 = 0i64;
	if ((**(int(__fastcall***)(__int64, void*, __int64*))v16)(v16, &unk_1409C6D60, &v15) >= 0)
	{
		if (*(_DWORD*)(a1 + 504) != -1)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 32i64))(v15);
			*(_DWORD*)(a1 + 504) = -1;
		}
		if (a2)
			goto LABEL_13;
		v9 = *(_QWORD*)(a1 + 488);
		v10 = v9 + 16;
		if (!v9)
			v10 = 0i64;
		if ((*(int(__fastcall**)(__int64, void*, __int64, __int64))(*(_QWORD*)v15 + 24i64))(
			v15,
			&unk_1409C6B90,
			v10,
			a1 + 504) >= 0)
		{
		LABEL_13:
			v11 = *(int(__fastcall***)(__int64, void*, __int64*))v8;
			v18 = 0i64;
			if ((*v11)(v8, &unk_1409C6D60, (__int64*)va) >= 0)
			{
				if (*(_DWORD*)(a1 + 508) != -1)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18);
					*(_DWORD*)(a1 + 508) = -1;
				}
				if (a2)
					goto LABEL_20;
				v12 = *(_QWORD*)(a1 + 488);
				v13 = v12 + 16;
				if (!v12)
					v13 = 0i64;
				if ((*(int(__fastcall**)(__int64, void*, __int64, __int64))(*(_QWORD*)v18 + 24i64))(
					v18,
					&unk_1409C6B90,
					v13,
					a1 + 508) >= 0)
					LABEL_20:
				v2 = 1;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	return v2;
}
// 140156170: using guessed type __int64 var_38[7];

