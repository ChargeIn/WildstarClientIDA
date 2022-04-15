#include "../winhttp.h"

//----- (000000014033E400) ----------------------------------------------------
void __fastcall sub_14033E400(__int64 a1, __int64* a2)
{
	__int64 v3; // rcx
	__int64* v4; // rdx
	int v5; // ebx
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v9; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v10)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v11; // [rsp+48h] [rbp-20h]
	__int64 v12; // [rsp+70h] [rbp+8h] BYREF

	v3 = *a2;
	v4 = *(__int64**)(a1 + 8);
	if ((__int64*)v3 == v4)
	{
		*(_QWORD*)&v9 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v9 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v10 = TlsValue;
		v12 = 0x141E4F6B0i64;
		v11 = v9;
		v5 = sub_1401971E0(dword_140C8A644, 1, &v12, &v10);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v9 + 1));
		if (v5)
			DebugBreak();
	}
	else
	{
		v6 = sub_140007DB0(v3, v4 + 1, v4 + 2, v4 + 3);
		v7 = *(_QWORD*)(v6 + 32);
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		sub_14018B900(v6, 0);
		--* (_QWORD*)(a1 + 16);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A644: using guessed type _DWORD dword_140C8A644[2];

