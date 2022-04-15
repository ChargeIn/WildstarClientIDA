#include "../winhttp.h"

//----- (000000014045AC60) ----------------------------------------------------
void __fastcall sub_14045AC60(__int64 a1, int a2)
{
	void(__fastcall * **v3)(_QWORD); // rcx
	__int64 v4; // r9
	int v5; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v7; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v9[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v10; // [rsp+80h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 272) || *(_QWORD*)(a1 + 280))
	{
		v7 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v4 = *(unsigned int*)(a1 + 8);
		v9[0] = (__int64)TlsValue;
		v9[1] = v7;
		v10 = 0x141E02310i64;
		v9[2] = (__int64)lpTlsValue;
		v5 = sub_140196F30(&dword_140C8AC6C, 40, &v10, v4, v9);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v5)
			DebugBreak();
	}
	else if (qword_140C665D0)
	{
		if ((int)sub_140716FA0(a1, a2, (int**)(a1 + 272)) >= 0)
		{
			v3 = *(void(__fastcall****)(_QWORD))(a1 + 272);
			*(_QWORD*)(a1 + 280) = v3;
			(**v3)(v3);
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C665D0: using guessed type __int64 qword_140C665D0;
// 140C8AC6C: using guessed type _DWORD dword_140C8AC6C;

