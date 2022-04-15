//----- (000000014080B980) ----------------------------------------------------
__int64 sub_14080B980()
{
	sub_14080B1E0();
	byte_140C60949 = 1;
	if (hLibModule && nvapi_pepQueryInterface)
	{
		if (dword_140C60974)
		{
			byte_140C60949 = 0;
			return 0xFFFFFFFFi64;
		}
		else
		{
			EnterCriticalSection(&CriticalSection);
			nvapi_pepQueryInterface = 0i64;
			FreeLibrary(hLibModule);
			hLibModule = 0i64;
			LeaveCriticalSection(&CriticalSection);
			byte_140C60949 = 0;
			return 0i64;
		}
	}
	else
	{
		byte_140C60949 = 0;
		return 4294967292i64;
	}
}
// 140C60930: using guessed type __int64 nvapi_pepQueryInterface;
// 140C60949: using guessed type char byte_140C60949;
// 140C60974: using guessed type int dword_140C60974;

