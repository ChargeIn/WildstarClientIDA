//----- (00000001408281C0) ----------------------------------------------------
__int64 __fastcall sub_1408281C0(int a1, int* a2, unsigned int a3)
{
	unsigned int v7; // ebx
	unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
	HANDLE hObject; // [rsp+38h] [rbp-20h]

	hObject = CreateEventW(0i64, 0, 0, 0i64);
	if (!hObject)
		return 2i64;
	v7 = sub_1408282B0(a1, (__int64)sub_1408272D0, (__int64)&v8, a2, a3, 1);
	if (v7 == 1)
	{
		WaitForSingleObject(hObject, 0xFFFFFFFF);
		if (hObject)
			CloseHandle(hObject);
		return v8;
	}
	else if (hObject)
	{
		CloseHandle(hObject);
		return v7;
	}
	return v7;
}

