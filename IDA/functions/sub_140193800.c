//----- (0000000140193800) ----------------------------------------------------
__int64 __fastcall sub_140193800(LPWSTR lpFilename, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	DWORD ModuleFileNameW; // eax
	__int64 v8; // rdx
	__int64 v9; // rdi
	WCHAR* v10; // r10
	__int64 v11; // r8

	if (a4)
	{
		result = sub_14001B370(lpFilename, 260i64, L"%ls\\%ls");
		if ((int)result < 0)
			return result;
	}
	else
	{
		ModuleFileNameW = GetModuleFileNameW(0i64, lpFilename, 0x104u);
		if (ModuleFileNameW)
		{
			do
			{
				v8 = ModuleFileNameW - 1;
				if (lpFilename[v8] == 92)
					break;
				--ModuleFileNameW;
			} while ((_DWORD)v8);
		}
		v9 = 260 - ModuleFileNameW;
		v10 = &lpFilename[ModuleFileNameW];
		v11 = 0i64;
		if ((unsigned __int64)(v9 - 1) > 0x7FFFFFFE)
			v11 = 2147942487i64;
		if ((int)v11 < 0)
		{
			if ((_DWORD)v9)
				*v10 = 0;
		}
		else
		{
			LODWORD(v11) = sub_14001B680(v10, (unsigned int)v9, v11, a3);
		}
		if ((int)v11 < 0)
			return (unsigned int)v11;
	}
	return 0i64;
}
// 140A43670: using guessed type wchar_t aLsLs[8];

