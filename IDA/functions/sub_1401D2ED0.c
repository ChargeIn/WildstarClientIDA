//----- (00000001401D2ED0) ----------------------------------------------------
signed int __fastcall sub_1401D2ED0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
	signed int result; // eax

	if (!*(_QWORD*)(a1 + 744))
		return -1610416122;
	*(_QWORD*)(a1 + 600) = 0i64;
	*(_QWORD*)(a1 + 608) = 0i64;
	*(_QWORD*)(a1 + 616) = 0i64;
	*(_QWORD*)(a1 + 624) = 0i64;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_QWORD*)(a1 + 640) = 0i64;
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_QWORD*)(a1 + 656) = 0i64;
	*(_QWORD*)(a1 + 616) = a2;
	*(_QWORD*)(a1 + 640) = a2;
	*(_QWORD*)(a1 + 648) = a3;
	*(_QWORD*)(a1 + 632) = a5;
	*(_DWORD*)(a1 + 656) = a4;
	if (a4)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 744) + 32i64))(
			*(_QWORD*)(a1 + 744),
			a3,
			a4);
		if (result < 0)
			return result;
		return 0;
	}
	if (PostQueuedCompletionStatus(**(HANDLE**)(a1 + 16), 0, 1ui64, (LPOVERLAPPED)(a1 + 600)))
		return 0;
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

