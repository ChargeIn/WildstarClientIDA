#include "../winhttp.h"

//----- (00000001401A0EB0) ----------------------------------------------------
__int64 __fastcall sub_1401A0EB0(__int64 a1, __int64 a2, __int64* a3)
{
	int v5; // ebx
	int* v7; // rax
	__int64 v8; // rbx
	signed int v9; // edi
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v11; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v12)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v13; // [rsp+48h] [rbp-20h]
	__int64 v14; // [rsp+70h] [rbp+8h] BYREF

	if (!*(_DWORD*)(a1 + 40) || *(_DWORD*)(a1 + 12) && (*(_QWORD*)(a1 + 16) || *(_QWORD*)(a1 + 24)))
	{
		v7 = sub_14018B280(96i64, 0);
		v8 = (__int64)v7;
		if (v7)
		{
			*(_QWORD*)v7 = off_140B5E7D0;
			*((_QWORD*)v7 + 2) = *(_QWORD*)a1;
			v7[6] = *(_DWORD*)(a1 + 8);
			v7[7] = *(_DWORD*)(a1 + 12);
			*((_QWORD*)v7 + 4) = *(_QWORD*)(a1 + 16);
			*((_QWORD*)v7 + 5) = *(_QWORD*)(a1 + 24);
			*((_QWORD*)v7 + 6) = *(_QWORD*)(a1 + 32);
			v7[14] = *(_DWORD*)(a1 + 40);
			*((_QWORD*)v7 + 10) = 0i64;
			*((_QWORD*)v7 + 11) = 0i64;
			v7[2] = 1;
			*((_QWORD*)v7 + 9) = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = sub_14019F5E0(v8);
		if (v9 >= 0)
		{
			if (a3)
				*a3 = v8;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8);
			if (!a3)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			return 0i64;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
			return (unsigned int)v9;
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v11 = 0i64;
		*((_QWORD*)&v11 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v12 = TlsValue;
		v14 = 0x141D3F070i64;
		v13 = v11;
		v5 = sub_140196F30(&dword_140C8A204, 39, &v14, &v12);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v11 + 1));
		if (v5)
			DebugBreak();
		return 2147942487i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B5E7D0: using guessed type __int64 (__fastcall *off_140B5E7D0[8])();
// 140C8A204: using guessed type _DWORD dword_140C8A204;

