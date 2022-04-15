#include "../winhttp.h"

//----- (00000001400085C0) ----------------------------------------------------
void __fastcall sub_1400085C0()
{
	__int64 v0; // rbx
	__int64 v1; // rdi
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v4; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v5)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+60h] [rbp-8h]
	__int64 v8; // [rsp+70h] [rbp+8h] BYREF
	__int64 v9; // [rsp+78h] [rbp+10h]

	if (!dword_140C635F8)
	{
		v9 = v0;
		v7 = v1;
		*(_QWORD*)&v4 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v4 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = TlsValue;
		v8 = 0x141CD1010i64;
		v6 = v4;
		v2 = sub_140196F30(&dword_140C89FE4, 1, &v8, &v5);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v4 + 1));
		if (v2)
			DebugBreak();
		dword_140C635F8 = 1;
		sub_1407DBC08();
		sub_140008490();
		sub_1407DBCC8(0);
		JUMPOUT(0x1400086ABi64);
	}
}
// 1400086A6: control flows out of bounds to 1400086AB
// 1400085D7: variable 'v0' is possibly undefined
// 1400085DC: variable 'v1' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C635F8: using guessed type int dword_140C635F8;
// 140C89FE4: using guessed type _DWORD dword_140C89FE4;

