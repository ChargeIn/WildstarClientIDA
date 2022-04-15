//----- (000000014080B390) ----------------------------------------------------
__int64 __fastcall sub_14080B390(HMODULE a1, int a2)
{
	unsigned int v3; // [rsp+20h] [rbp-18h]
	__int64 (*Interface)(void); // [rsp+28h] [rbp-10h]

	if (a2)
	{
		if (a2 == 1)
		{
			nvapi_pepQueryInterface = (__int64)GetProcAddress(a1, "nvapi_pepQueryInterface");
			if (!nvapi_pepQueryInterface)
			{
				FreeLibrary(hLibModule);
				return 0xFFFFFFFFi64;
			}
		}
	}
	else
	{
		nvapi_QueryInterface = (__int64(__fastcall*)(_QWORD))GetProcAddress(a1, "nvapi_QueryInterface");
		if (!nvapi_QueryInterface)
			return 0xFFFFFFFFi64;
		Interface = (__int64 (*)(void))nvapi_QueryInterface(22079528i64);
		if (!Interface)
		{
			nvapi_QueryInterface = 0i64;
			return 0xFFFFFFFFi64;
		}
		v3 = Interface();
		if (v3)
		{
			nvapi_QueryInterface = 0i64;
			return v3;
		}
		qword_140C60938 = nvapi_QueryInterface(868693388i64);
		qword_140C60940 = nvapi_QueryInterface(1497269828i64);
		if (qword_140C60938 && !qword_140C60940 || qword_140C60938 && !qword_140C60940)
		{
			qword_140C60938 = 0i64;
			qword_140C60940 = 0i64;
		}
	}
	++dword_140C60980[a2];
	return 0i64;
}
// 140C60928: using guessed type __int64 (__fastcall *nvapi_QueryInterface)(_QWORD);
// 140C60930: using guessed type __int64 nvapi_pepQueryInterface;
// 140C60938: using guessed type __int64 qword_140C60938;
// 140C60940: using guessed type __int64 qword_140C60940;
// 140C60980: using guessed type _DWORD dword_140C60980[4];

