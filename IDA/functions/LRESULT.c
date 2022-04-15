//----- (0000000140834440) ----------------------------------------------------
LRESULT(__stdcall* sub_140834440())(HWND, UINT, WPARAM, LPARAM)
{
	__int64 v0; // rbx
	LPVOID v1; // rcx
	LRESULT(__stdcall * result)(HWND, UINT, WPARAM, LPARAM); // rax
	IID riid; // [rsp+30h] [rbp-40h] BYREF
	IID rclsid; // [rsp+40h] [rbp-30h] BYREF
	__int64 NotificationFilter[4]; // [rsp+50h] [rbp-20h] BYREF
	LPVOID ppv; // [rsp+80h] [rbp+10h] BYREF

	*(_QWORD*)&rclsid.Data1 = 0x467CE52FBCDE0395i64;
	*(_QWORD*)rclsid.Data4 = 0x2E69919257C43D8Ei64;
	*(_QWORD*)&riid.Data1 = 0x4F359614A95664D2i64;
	*(_QWORD*)riid.Data4 = 0xE61736B68DDE46A7ui64;
	if (CoCreateInstance(&rclsid, 0i64, 0x17u, &riid, &ppv) || !ppv)
	{
		memset(&NotificationFilter[1], 0, 24);
		NotificationFilter[0] = 0x500000020i64;
		Handle = RegisterDeviceNotificationW(hWnd, NotificationFilter, 4u);
		result = (LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM))SetWindowLongPtrW(
			(HWND)hWnd,
			-4,
			(LONG_PTR)sub_140834250);
		dwNewLong = result;
	}
	else
	{
		v0 = sub_1408819F0(dword_140C10F28, 24i64);
		if (v0)
		{
			v1 = ppv;
			*(_DWORD*)(v0 + 8) = 1;
			*(_QWORD*)(v0 + 16) = v1;
			*(_QWORD*)v0 = off_1409A2E70;
			(*(void(__fastcall**)(LPVOID))(*(_QWORD*)v1 + 8i64))(v1);
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v0 + 16) + 48i64))(*(_QWORD*)(v0 + 16), v0);
			qword_140C61F60 = v0;
		}
		else
		{
			qword_140C61F60 = 0i64;
		}
		return (LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM))(*(__int64(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
	}
	return result;
}
// 1409A2E70: using guessed type __int64 (__fastcall *off_1409A2E70[8])();
// 140B720B8: using guessed type __int64 qword_140B720B8;
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61F60: using guessed type __int64 qword_140C61F60;

