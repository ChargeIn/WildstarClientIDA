//----- (00000001408279E0) ----------------------------------------------------
__int64 __fastcall sub_1408279E0(const WCHAR* a1, unsigned int a2, _DWORD* a3)
{
	unsigned int v6; // ebx
	unsigned int v7; // [rsp+20h] [rbp-39h] BYREF
	HANDLE hObject; // [rsp+28h] [rbp-31h]
	__int128 v9; // [rsp+38h] [rbp-21h]
	__int128 v10; // [rsp+48h] [rbp-11h]
	__int128 v11; // [rsp+58h] [rbp-1h]
	__int64 v12; // [rsp+68h] [rbp+Fh]
	__int128 v13[3]; // [rsp+70h] [rbp+17h] BYREF
	__int64 v14; // [rsp+A0h] [rbp+47h]

	*a3 = sub_1408273A0(a1);
	hObject = CreateEventW(0i64, 0, 0, 0i64);
	if (!hObject)
		return 2i64;
	v11 = __PAIR64__(a2, *a3);
	LODWORD(v9) = 0;
	DWORD2(v10) = 0;
	LODWORD(v12) = 0;
	*((_QWORD*)&v9 + 1) = sub_1408272D0;
	*(_QWORD*)&v10 = &v7;
	v13[0] = v9;
	v13[1] = v10;
	v14 = v12;
	v13[2] = (unsigned __int64)v11;
	v6 = sub_140841990((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, v13);
	if (v6 == 1)
	{
		WaitForSingleObject(hObject, 0xFFFFFFFF);
		if (hObject)
			CloseHandle(hObject);
		return v7;
	}
	else if (hObject)
	{
		CloseHandle(hObject);
	}
	return v6;
}
// 140C61B58: using guessed type __int64 qword_140C61B58;

