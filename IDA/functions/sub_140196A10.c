//----- (0000000140196A10) ----------------------------------------------------
int sub_140196A10()
{
	int result; // eax
	HANDLE EventW; // rcx

	result = qword_140C67408;
	--dword_140C63730;
	if ((unsigned __int64)qword_140C67408 <= 1)
	{
		LODWORD(qword_140C67400) = 0;
		_InterlockedExchange64(&qword_140C67408, 0i64);
		result = qword_140C67410;
		if (qword_140C67410)
		{
			if (!hObject)
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)&hObject, (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			return SetEvent(hObject);
		}
	}
	else
	{
		--qword_140C67408;
	}
	return result;
}
// 140C63730: using guessed type int dword_140C63730;
// 140C67400: using guessed type __int64 qword_140C67400;
// 140C67408: using guessed type __int64 qword_140C67408;
// 140C67410: using guessed type __int64 qword_140C67410;

