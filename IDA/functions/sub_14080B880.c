//----- (000000014080B880) ----------------------------------------------------
__int64 sub_14080B880()
{
	__int64 v1; // rcx
	unsigned int(__fastcall * Interface)(__int64); // [rsp+20h] [rbp-18h]

	sub_14080B1E0();
	byte_140C60948 = 1;
	if (qword_140C60918 && nvapi_QueryInterface)
	{
		if (dword_140C60970[0])
		{
			byte_140C60948 = 0;
			return 0xFFFFFFFFi64;
		}
		else
		{
			Interface = (unsigned int(__fastcall*)(__int64))nvapi_QueryInterface(3526090110i64);
			if (Interface)
			{
				if (Interface(v1))
				{
					byte_140C60948 = 0;
					return 0xFFFFFFFFi64;
				}
				else
				{
					EnterCriticalSection(&CriticalSection);
					nvapi_QueryInterface = 0i64;
					FreeLibrary(qword_140C60918);
					qword_140C60918 = 0i64;
					qword_140C60938 = 0i64;
					qword_140C60940 = 0i64;
					LeaveCriticalSection(&CriticalSection);
					byte_140C60948 = 0;
					return 0i64;
				}
			}
			else
			{
				byte_140C60948 = 0;
				return 4294967293i64;
			}
		}
	}
	else
	{
		byte_140C60948 = 0;
		return 4294967292i64;
	}
}
// 14080B8FE: variable 'v1' is possibly undefined
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60938: using guessed type __int64 (__fastcall *qword_140C60938)(_QWORD, _QWORD);
// 140C60940: using guessed type __int64 (__fastcall *qword_140C60940)(_QWORD, _QWORD, _QWORD);
// 140C60948: using guessed type char byte_140C60948;
// 140C60970: using guessed type int dword_140C60970[];

