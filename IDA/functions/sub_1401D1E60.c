//----- (00000001401D1E60) ----------------------------------------------------
signed int __fastcall sub_1401D1E60(__int64 a1)
{
	void* v1; // rcx
	signed int result; // eax

	v1 = *(void**)(a1 + 696);
	if (v1 == (void*)-1i64)
		return -1610416122;
	if (FlushFileBuffers(v1))
		return 0;
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}

