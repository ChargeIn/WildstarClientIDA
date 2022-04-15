//----- (0000000140834610) ----------------------------------------------------
__int64 sub_140834610()
{
	unsigned int* v0; // rsi
	__int64 v1; // rbp
	__int64* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // rbx
	int v5; // edi

	sub_140859010();
	if (qword_140C61CC8)
	{
		qword_140C61CD0 = qword_140C61CC8;
		sub_140881720(dword_140C10F28, qword_140C61CC8);
		qword_140C61CC8 = 0i64;
		qword_140C61CD0 = 0i64;
		dword_140C61CD8 = 0;
	}
	if (qword_140C61CE0)
	{
		sub_140881720(dword_140C10F28, qword_140C61CE0);
		qword_140C61CE0 = 0i64;
	}
	sub_1408327B0();
	v0 = dword_140C61D00;
	v1 = 24i64;
	do
	{
		if (*v0)
		{
			v2 = (__int64*)(v0 + 2);
			v3 = *v0;
			do
			{
				sub_140881720(dword_140C10F28, *v2++);
				--v3;
			} while (v3);
		}
		*v0 = 0;
		v0 += 6;
		--v1;
	} while (v1);
	sub_1408300C0();
	if (qword_140C61F60)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C61F60 + 16i64))(qword_140C61F60);
		qword_140C61F60 = 0i64;
	}
	else
	{
		if (Handle)
			UnregisterDeviceNotification(Handle);
		if ((LRESULT(__fastcall*)(HWND, UINT, WPARAM, LPARAM))GetWindowLongPtrW((HWND)hWnd, -4) == sub_140834250)
			SetWindowLongPtrW((HWND)hWnd, -4, (LONG_PTR)dwNewLong);
	}
	if (qword_140C61C60)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C61C60 + 24i64))(qword_140C61C60);
		v4 = qword_140C61C60;
		v5 = dword_140C10F28;
		if (qword_140C61C60)
		{
			(**(void(__fastcall***)(__int64, _QWORD))qword_140C61C60)(qword_140C61C60, 0i64);
			sub_140881720(v5, v4);
		}
		qword_140C61C60 = 0i64;
	}
	if (qword_140C61C58)
	{
		sub_140845E80();
		qword_140C61C58 = 0i64;
	}
	if (byte_140C61F48)
	{
		CoUninitialize();
		byte_140C61F48 = 0;
	}
	return sub_140831400();
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61C58: using guessed type __int64 qword_140C61C58;
// 140C61C60: using guessed type __int64 qword_140C61C60;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;
// 140C61CD8: using guessed type int dword_140C61CD8;
// 140C61CE0: using guessed type __int64 qword_140C61CE0;
// 140C61D00: using guessed type unsigned int dword_140C61D00[146];
// 140C61F48: using guessed type char byte_140C61F48;
// 140C61F60: using guessed type __int64 qword_140C61F60;

