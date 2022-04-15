#include "../winhttp.h"

//----- (000000014019E010) ----------------------------------------------------
__int64 __fastcall sub_14019E010(
	__int64 a1,
	void(__fastcall*** a2)(_QWORD),
	__int64 a3,
	void(__fastcall*** a4)(_QWORD),
	int** a5)
{
	int v7; // ebx
	int v9; // ebx
	int* v10; // rax
	int* v11; // rbx
	__int64 v12; // [rsp+20h] [rbp-40h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-38h] BYREF
	__int128 v14; // [rsp+30h] [rbp-30h]
	__int64(__fastcall * *v15)(); // [rsp+40h] [rbp-20h] BYREF
	__int128 v16; // [rsp+48h] [rbp-18h]

	if (qword_140C63758)
	{
		if (a2)
		{
			v10 = sub_14018B280(112i64, 0);
			v11 = v10;
			if (v10)
			{
				sub_1401C5C80((__int64)v10, 8, 1u, a4);
				*((_QWORD*)v11 + 13) = a2;
				*(_QWORD*)v11 = off_140B5F570;
				(**a2)(a2);
			}
			else
			{
				v11 = 0i64;
			}
			if (a5)
				*a5 = v11;
			(*(void(__fastcall**)(int*))(*(_QWORD*)v11 + 88i64))(v11);
			if (!a5)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v11 + 8i64))(v11);
			return 0i64;
		}
		else
		{
			TlsValue = &off_140B5E648;
			*(_QWORD*)&v14 = 0i64;
			*((_QWORD*)&v14 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v15 = TlsValue;
			v12 = 0x141D3EB48i64;
			v16 = v14;
			v9 = sub_140196F30(&dword_140C8A1E4, 35, &v12, &v15);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v14 + 1));
			if (v9)
				DebugBreak();
			return 2147942487i64;
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v14 = 0i64;
		*((_QWORD*)&v14 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v15 = TlsValue;
		v12 = 0x141D3EC30i64;
		v16 = v14;
		v7 = sub_140196F30(&dword_140C8A1E8, 35, &v12, &v15);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v14 + 1));
		if (v7)
			DebugBreak();
		return 2147500037i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B5F570: using guessed type __int64 (__fastcall *off_140B5F570[21])();
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C8A1E4: using guessed type _DWORD dword_140C8A1E4;
// 140C8A1E8: using guessed type _DWORD dword_140C8A1E8;

