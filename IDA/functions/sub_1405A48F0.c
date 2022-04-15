#include "../winhttp.h"

//----- (00000001405A48F0) ----------------------------------------------------
__int64 __fastcall sub_1405A48F0(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rcx
	int v3; // edx
	int* v4; // rax
	__int64 v5; // rax
	_DWORD* v6; // rcx
	int v7; // ebx
	int* v9; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int64 v11; // [rsp+28h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-30h]
	__int64 v13[4]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v14; // [rsp+70h] [rbp+10h] BYREF

	v14 = a1;
	v1 = sub_14018B280(53136i64, 0);
	v2 = (__int64)v1;
	if (v1)
	{
		v3 = 331;
		*(_QWORD*)v1 = off_140B76B08;
		v4 = v1 + 18;
		do
		{
			--v3;
			*((_QWORD*)v4 - 8) = 0i64;
			*((_QWORD*)v4 - 4) = 0i64;
			*((_QWORD*)v4 - 3) = 0i64;
			*((_QWORD*)v4 - 1) = 0i64;
			*(_QWORD*)v4 = 0i64;
			*(v4 - 12) = 1414420037;
			v4[5] = 0;
			*((_QWORD*)v4 + 5) = 0i64;
			*((_QWORD*)v4 + 6) = 0i64;
			*((_QWORD*)v4 + 8) = 0i64;
			*((_QWORD*)v4 + 9) = 0i64;
			v4[6] = 1414420037;
			v4[23] = 0;
			v4 += 40;
		} while (v3 >= 0);
		*(_QWORD*)(v2 + 53128) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	qword_140C7DF98 = v2;
	if ((**(int(__fastcall***)(__int64))v2)(v2) >= 0)
	{
		v9 = sub_14018B280(8i64, 0);
		if (v9)
			*(_QWORD*)v9 = off_140B76B18;
		else
			v9 = 0i64;
		qword_140C7DFA0 = (__int64)v9;
		if ((**(int(__fastcall***)(int*))v9)(v9) >= 0)
			return 0i64;
		v11 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = 0x141E1B4D0i64;
		v6 = &unk_140C8AF94;
	}
	else
	{
		v11 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = 0x141E1B508i64;
		v6 = &unk_140C8AF90;
	}
	v14 = v5;
	v13[0] = (__int64)TlsValue;
	v13[1] = v11;
	v13[2] = (__int64)lpTlsValue;
	v7 = sub_140196F30(v6, 5, &v14, v13, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v7)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B76B08: using guessed type __int64 (__fastcall *off_140B76B08[4])();
// 140B76B18: using guessed type __int64 (__fastcall *off_140B76B18[2])();
// 140C7DF98: using guessed type __int64 qword_140C7DF98;
// 140C7DFA0: using guessed type __int64 qword_140C7DFA0;

