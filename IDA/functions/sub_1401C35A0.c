//----- (00000001401C35A0) ----------------------------------------------------
__int64 __fastcall sub_1401C35A0(__int64 a1, __int64 a2)
{
	BOOL(__stdcall * CancelIoEx)(HANDLE, LPOVERLAPPED); // rax

	if (dword_140C8A230)
	{
		CancelIoEx = (BOOL(__stdcall*)(HANDLE, LPOVERLAPPED))qword_140C8E170;
	}
	else
	{
		CancelIoEx = (BOOL(__stdcall*)(HANDLE, LPOVERLAPPED))GetProcAddress(qword_140C636C0, "CancelIoEx");
		dword_140C8A230 = 1;
		qword_140C8E170 = (__int64)CancelIoEx;
	}
	if (CancelIoEx)
		((void(__fastcall*)(__int64, __int64))CancelIoEx)(a1, a2);
	return 1i64;
}
// 140C8A230: using guessed type int dword_140C8A230;
// 140C8E170: using guessed type __int64 qword_140C8E170;

