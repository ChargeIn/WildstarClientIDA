#include "../winhttp.h"

//----- (0000000140280510) ----------------------------------------------------
void __fastcall sub_140280510(__int64 a1)
{
	__int64 v1; // rbx
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v5; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v6)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v7; // [rsp+48h] [rbp-20h]
	__int64 v8; // [rsp+70h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 8592);
	if (*(_QWORD*)(v1 + 176))
	{
		if (v1)
		{
			sub_1402ACFC0(*(_QWORD**)(a1 + 8592));
			sub_14018B900(v1, 0);
		}
		if (!*(_QWORD*)(a1 + 8592))
		{
			v8 = 0x141DE3508i64;
			sub_1401A3130(14, 2, &v8);
		}
	}
	else
	{
		*(_QWORD*)&v5 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v5 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6 = TlsValue;
		v8 = 0x141DE3528i64;
		v7 = v5;
		v3 = sub_1401971E0(&dword_140C8A350, 14, &v8, &v6);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v5 + 1));
		if (v3)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A350: using guessed type _DWORD dword_140C8A350;

