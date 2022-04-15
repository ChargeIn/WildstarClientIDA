#include "../winhttp.h"

//----- (00000001401AD860) ----------------------------------------------------
char* __fastcall sub_1401AD860(__int64 a1, const wchar_t* a2)
{
	const wchar_t* v2; // r9
	char* result; // rax
	__int64 v4; // rdx
	signed __int64 v5; // r9
	__int16 v6; // cx

	v2 = L"(unset)";
	*(_QWORD*)(a1 + 272) = qword_140C63768;
	result = (char*)(a1 + 144);
	if (a2)
		v2 = a2;
	qword_140C63768 = a1;
	*(_DWORD*)(a1 + 140) = 97;
	*(_QWORD*)(a1 + 132) = 0i64;
	v4 = 64i64;
	v5 = (char*)v2 - result;
	while (v4 != -2147483582)
	{
		v6 = *(_WORD*)&result[v5];
		if (!v6)
			break;
		*(_WORD*)result = v6;
		result += 2;
		if (!--v4)
		{
			*((_WORD*)result - 1) = 0;
			return result;
		}
	}
	*(_WORD*)result = 0;
	return result;
}
// 1401AD8DB: conditional instruction was optimized away because rdx.8!=0
// 140A45E60: using guessed type wchar_t aUnset[8];
// 140C63768: using guessed type __int64 qword_140C63768;

