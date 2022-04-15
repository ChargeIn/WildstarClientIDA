//----- (00000001401BC590) ----------------------------------------------------
signed int __fastcall sub_1401BC590(__int64 a1, char* a2, DWORD a3, __int64 a4)
{
	signed int result; // eax
	void* v8; // rcx

	if (!a2 || !a4)
		return -2147024809;
	if (!a3 || (result = sub_1401BC4C0(a1, *(LARGE_INTEGER*)(a4 + 16), a2, a3), result >= 0))
	{
		v8 = *(void**)(a1 + 24);
		if (!v8 || PostQueuedCompletionStatus(v8, a3, 1ui64, (LPOVERLAPPED)a4))
		{
			return 0;
		}
		else
		{
			result = GetLastError();
			if (result > 0)
				return (unsigned __int16)result | 0x80070000;
		}
	}
	return result;
}

