#include "../winhttp.h"

//----- (00000001407AFA00) ----------------------------------------------------
signed int __fastcall sub_1407AFA00(__int64 a1, int* a2)
{
	HANDLE EventW; // rax
	signed int result; // eax
	HINTERNET v6; // rax
	int v7; // edi
	bool v8; // sf
	_WORD* v9; // r8
	_WORD* v10; // rcx
	__int64 v11; // rdx
	int v12; // r9d

	EventW = CreateEventW(0i64, 1, 0, 0i64);
	*(_QWORD*)(a1 + 40) = EventW;
	if (!EventW)
	{
		result = GetLastError();
		if (result > 0)
			return (unsigned __int16)result | 0x80070000;
		return result;
	}
	result = sub_1401C3640(a1 + 96, a2);
	if (result >= 0)
	{
		result = sub_1401C37F0((HINTERNET*)(a1 + 208), (const WCHAR*)a2, 1);
		if (result >= 0)
		{
			v6 = WinHttpConnect(*(HINTERNET*)(a1 + 208), *(LPCWSTR*)(a1 + 128), *(_WORD*)(a1 + 140), 0);
			v7 = 0;
			*(_QWORD*)(a1 + 216) = v6;
			if (v6)
			{
				*(_QWORD*)(a1 + 224) = 0i64;
			}
			else
			{
				result = GetLastError();
				v8 = result < 0;
				if (result > 0)
				{
					result = (unsigned __int16)result | 0x80070000;
					v8 = result < 0;
				}
				if (v8)
					return result;
			}
			v9 = *(_WORD**)(a1 + 176);
			v10 = (_WORD*)(a1 + 232);
			v11 = 260i64;
			v12 = 0;
			while (v11 != -2147483386 && *v9)
			{
				*v10++ = *v9++;
				if (!--v11)
				{
					--v10;
					v12 = -2147024774;
					break;
				}
			}
			*v10 = 0;
			if (v12 < 0)
				return v12;
			return v7;
		}
	}
	return result;
}
// 1407AFB0E: conditional instruction was optimized away because rdx.8!=0

