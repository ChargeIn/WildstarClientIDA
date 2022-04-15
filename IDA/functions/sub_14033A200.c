#include "../winhttp.h"

//----- (000000014033A200) ----------------------------------------------------
void __fastcall sub_14033A200(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rax
	SOCKET v5; // r14
	__int64 v6; // rbx
	int Error; // eax
	__int64 v8; // rbx
	int* v9; // rax
	_WORD* v10; // rsi
	int* v11; // rax
	__int64 v12; // [rsp+30h] [rbp-79h] BYREF
	int addrlen; // [rsp+38h] [rbp-71h] BYREF
	struct sockaddr v14; // [rsp+40h] [rbp-69h] BYREF
	char v15; // [rsp+50h] [rbp-59h]
	__int128 v16; // [rsp+60h] [rbp-49h]
	int* v17; // [rsp+70h] [rbp-39h]
	char v18; // [rsp+78h] [rbp-31h]
	__int16 v19[25]; // [rsp+8Eh] [rbp-1Bh] BYREF
	struct sockaddr addr; // [rsp+C0h] [rbp+17h] BYREF

	v2 = *a2;
	addrlen = 16;
	v5 = accept(*(_QWORD*)(v2 + 272), &addr, &addrlen);
	WSAGetLastError();
	if (v5 == -1i64)
	{
		v6 = *a2;
		Error = WSAGetLastError();
		sub_140338EB0((__int64)L"accept", Error, v6 + 16);
	}
	else
	{
		v8 = 0i64;
		v15 = 0;
		v16 = 0i64;
		v17 = 0i64;
		v9 = sub_14018B280(8i64, 0);
		*(_QWORD*)&v16 = v9;
		*((_QWORD*)&v16 + 1) = v9;
		v17 = v9 + 2;
		if (v9)
			*(_BYTE*)v9 = 0;
		v18 = 0;
		v19[0] = 0;
		v14 = addr;
		sub_140334D90((__int64)&v14);
		if (!v18)
			sub_140334D90((__int64)&v14);
		if (!v19[0])
			sub_140334D90((__int64)&v14);
		v10 = (_WORD*)(*a2 + 94i64);
		if (!*v10)
			sub_140334D90(*a2 + 16i64);
		v12 = 0x141DED300i64;
		sub_1401A3130(11, 3, &v12, v10, v19);
		v11 = sub_14018B280(496i64, 0);
		if (v11)
			v8 = sub_14033EA90((__int64)v11, v5, (__int64)&v14);
		v12 = v8;
		if (v8)
			(**(void(__fastcall***)(__int64))v8)(v8);
		sub_140338DF0(a1, 0, &v12);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		if ((_QWORD)v16)
			sub_14018B900(v16, 0);
	}
	if (*a2)
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a2 + 8i64))(*a2);
}
// 140AF2BD8: using guessed type wchar_t aAccept_0[7];
// 14033A200: using guessed type __int16 var_72[25];

