#include "../winhttp.h"

//----- (00000001401938D0) ----------------------------------------------------
HMODULE __fastcall sub_1401938D0(__int64 a1, __int64 a2)
{
	WCHAR LibFileName[264]; // [rsp+20h] [rbp-228h] BYREF

	if ((int)sub_140193800(LibFileName, a2, a1, a2) >= 0)
		return LoadLibraryW(LibFileName);
	else
		return 0i64;
}

