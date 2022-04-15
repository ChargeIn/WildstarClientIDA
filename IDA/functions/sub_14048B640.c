#include "../winhttp.h"

//----- (000000014048B640) ----------------------------------------------------
void __fastcall sub_14048B640(__int64 a1, __int64* a2)
{
	__int64 v3; // rcx
	__int64* v4; // rdx
	int v5; // ebx
	__int64 v6; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v8; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v9)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v10; // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+70h] [rbp+8h] BYREF

	v3 = *a2;
	v4 = *(__int64**)(a1 + 8);
	if ((__int64*)v3 == v4)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v8 = 0i64;
		*((_QWORD*)&v8 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v9 = TlsValue;
		v11 = 0x141E4F6B0i64;
		v10 = v8;
		v5 = sub_1401971E0(&dword_140C8ACF0, 1, &v11, &v9);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v8 + 1));
		if (v5)
			DebugBreak();
	}
	else
	{
		v6 = sub_140007DB0(v3, v4 + 1, v4 + 2, v4 + 3);
		sub_14018B900(v6, 0);
		--* (_QWORD*)(a1 + 16);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8ACF0: using guessed type _DWORD dword_140C8ACF0;

