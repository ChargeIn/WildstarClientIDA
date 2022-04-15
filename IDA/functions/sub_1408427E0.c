//----- (00000001408427E0) ----------------------------------------------------
BOOL __fastcall sub_1408427E0(__int64 a1)
{
	BOOL result; // eax
	void* v3; // rcx

	*(_BYTE*)(a1 + 72) = 1;
	if (hHandle)
	{
		SetEvent(*(HANDLE*)(a1 + 64));
		WaitForSingleObject(hHandle, 0xFFFFFFFF);
		result = CloseHandle(hHandle);
		hHandle = 0i64;
	}
	v3 = *(void**)(a1 + 64);
	if (v3)
		result = CloseHandle(v3);
	*(_QWORD*)(a1 + 64) = 0i64;
	return result;
}

