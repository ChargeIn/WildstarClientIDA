#include "../winhttp.h"

//----- (00000001401C4FB0) ----------------------------------------------------
void __fastcall sub_1401C4FB0(int a1)
{
	_QWORD* Value; // rax
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v4; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64(__fastcall * *v6)(); // [rsp+50h] [rbp-28h]
	__int64 v7; // [rsp+58h] [rbp-20h]
	LPVOID v8; // [rsp+60h] [rbp-18h]
	__int64 v9; // [rsp+88h] [rbp+10h] BYREF

	if ((!dword_140C796C8 || dword_140C796C8 == a1) && (_DWORD)qword_140C785B4)
	{
		if (TlsGetValue(dword_140C785BC) || (unsigned int)sub_1401C4DF0())
		{
			Value = TlsGetValue(dword_140C785BC);
			if (*Value < 0x10ui64)
			{
				Value[++ * Value] = 0i64;
			}
			else
			{
				v4 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v9 = 0x141E59AA0i64;
				v6 = TlsValue;
				v7 = v4;
				v8 = lpTlsValue;
				v2 = sub_1401971E0(&dword_140C8A238, 44, &v9);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v2)
					DebugBreak();
			}
		}
		else
		{
			LODWORD(qword_140C785B4) = 0;
		}
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C785B4: using guessed type __int64 qword_140C785B4;
// 140C796C8: using guessed type int dword_140C796C8;
// 140C8A238: using guessed type _DWORD dword_140C8A238;

