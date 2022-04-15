//----- (00000001401D1C10) ----------------------------------------------------
signed int __fastcall sub_1401D1C10(__int64 a1, __int64 a2)
{
	signed int result; // eax

	if (*(_QWORD*)(a1 + 696) == -1i64)
		return -1610416122;
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 712) = 0i64;
	*(_QWORD*)(a1 + 720) = 0i64;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 736) = 0i64;
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 752) = 0i64;
	*(_QWORD*)(a1 + 760) = 0i64;
	*(_QWORD*)(a1 + 736) = a2;
	if (PostQueuedCompletionStatus(**(HANDLE**)(a1 + 16), 0, 1ui64, (LPOVERLAPPED)(a1 + 704)))
		return 0;
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

