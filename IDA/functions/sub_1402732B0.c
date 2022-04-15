#include "../winhttp.h"

//----- (00000001402732B0) ----------------------------------------------------
void __fastcall sub_1402732B0(_QWORD* a1)
{
	__int64 v2; // rcx
	int v3; // ebx
	__int64(__fastcall * **p_TlsValue)(); // rdx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	_QWORD* v8; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-60h] BYREF
	__int128 v10; // [rsp+28h] [rbp-58h]
	__int64(__fastcall * *v11)(); // [rsp+40h] [rbp-40h] BYREF
	__int128 v12; // [rsp+48h] [rbp-38h]
	int v13; // [rsp+60h] [rbp-20h] BYREF
	__int64 v14; // [rsp+68h] [rbp-18h]
	__int64 v15; // [rsp+90h] [rbp+10h] BYREF

	v2 = a1[967];
	if (v2)
	{
		if (*(_DWORD*)v2)
		{
			if (*(_DWORD*)v2 == 1)
			{
				v6 = *(_QWORD*)(v2 + 8);
				LODWORD(v11) = 1;
				p_TlsValue = &v11;
				*(_QWORD*)&v12 = v6;
				HIDWORD(v12) = *(_DWORD*)(v2 + 20);
			}
			else if (*(_DWORD*)v2 == 2)
			{
				v5 = *(_QWORD*)(v2 + 8);
				LODWORD(TlsValue) = 2;
				p_TlsValue = &TlsValue;
				*(_QWORD*)&v10 = v5;
				*((_QWORD*)&v10 + 1) = *(_QWORD*)(v2 + 16);
			}
			else
			{
				p_TlsValue = (__int64(__fastcall***)()) & unk_140C3FE88;
			}
		}
		else
		{
			v7 = *(_QWORD*)(v2 + 8);
			v13 = 0;
			p_TlsValue = (__int64(__fastcall***)()) & v13;
			v14 = v7;
		}
		(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)(), __int64))(*a1 + 528i64))(a1, p_TlsValue, 1i64);
		v8 = (_QWORD*)a1[967];
		if (v8)
			sub_14026BE10(v8);
	}
	else
	{
		*(_QWORD*)&v10 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v10 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v11 = TlsValue;
		v15 = 0x141DE17D8i64;
		v12 = v10;
		v3 = sub_1401971E0(&dword_140C8A2D0, 14, &v15, &v11);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v10 + 1));
		if (v3)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A2D0: using guessed type _DWORD dword_140C8A2D0;

