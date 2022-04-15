#include "../winhttp.h"

//----- (0000000140860AA0) ----------------------------------------------------
char __fastcall sub_140860AA0(__int64 a1, __int64* a2, char a3, char a4)
{
	__int64 v7; // rbx
	__int64* v8; // rdx
	void(__fastcall * **v9)(_QWORD, __int64, __int64, __int64); // r14
	__int64 v10; // rax
	__int64(__fastcall * *v11)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
	__int64 v12; // rdi
	__int64 v13; // r8
	__int64 v14; // r9
	__int64 v15; // rdx
	_DWORD* v16; // rdx
	char result; // al
	__int64 v18; // [rsp+40h] [rbp-48h] BYREF
	__int64 v19; // [rsp+48h] [rbp-40h]
	int v20; // [rsp+50h] [rbp-38h]
	int v21; // [rsp+54h] [rbp-34h]
	__int64 v22; // [rsp+58h] [rbp-30h]
	__int16 v23; // [rsp+60h] [rbp-28h]

	if (*(_DWORD*)a2)
	{
		*(_DWORD*)(a1 + 296) = 0;
		v7 = *a2;
		v8 = *(__int64**)(a1 + 128);
		if (v8)
		{
			sub_14083AB80(qword_140C61B70, v8, 0x1000000i64, 1.0, v7, SHIDWORD(v7), 0);
		}
		else
		{
			v19 = 0x1000000i64;
			v9 = (void(__fastcall***)(_QWORD, __int64, __int64, __int64))(a1 + 16);
			v18 = a1 + 16;
			v20 = 0;
			v21 = 1065353216;
			v22 = v7;
			v23 = 256;
			v10 = sub_14083A960((_DWORD*)qword_140C61B70, (__int64)&v18, 1, 0);
			v11 = *(__int64(__fastcall***)(_QWORD, _QWORD, _QWORD, _QWORD))a1;
			*(_BYTE*)(a1 + 144) &= ~1u;
			*(_BYTE*)(a1 + 383) |= 0x80u;
			v12 = v10;
			*(_QWORD*)(a1 + 128) = v10;
			((void(__fastcall*)(__int64, __int64, _QWORD))v11[16])(a1, 14i64, (unsigned int)v7);
			if (!v12)
			{
				LOBYTE(v14) = 1;
				(**v9)(v9, v19, v13, v14);
			}
		}
	}
	if (a3 == 1 || (*(_BYTE*)(a1 + 378) & 7) == 1)
	{
		*(_BYTE*)(a1 + 381) |= 0x40u;
		sub_140858700(1u, a1);
		v15 = *(_QWORD*)(a1 + 128);
		if (v15)
			sub_14083AED0(qword_140C61B70, v15);
		v16 = *(_DWORD**)(a1 + 504);
		if (v16)
			sub_14083A5A0(qword_140C61B98, v16);
	}
	else
	{
		sub_140858700(0, a1);
	}
	result = *(_BYTE*)(a1 + 378) & 7;
	if (result == 2)
		result = (**(__int64(__fastcall***)(__int64, _QWORD, _QWORD, _QWORD))a1)(a1, 0i64, 0i64, 0i64);
	if (a4)
		++dword_140C62410;
	return result;
}
// 140860B96: variable 'v13' is possibly undefined
// 140860B96: variable 'v14' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B98: using guessed type __int64 qword_140C61B98;
// 140C62410: using guessed type int dword_140C62410;

