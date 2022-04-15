#include "../winhttp.h"

//----- (0000000140291DB0) ----------------------------------------------------
void __fastcall sub_140291DB0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rsi
	__int64 v4; // rsi
	unsigned __int64 v5; // r14
	__int64 v6; // rdi
	__int64 v7; // r9
	int v8; // edi
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // r14
	_QWORD* v13; // rdi
	int i; // esi
	__int64 v15; // rcx
	_QWORD* v16; // rcx
	__int64 v17; // rcx
	_QWORD* v18; // rcx
	__int64 v19; // rcx
	_QWORD* v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rbx
	int j; // edi
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int64 v27; // [rsp+38h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-30h]
	__int64(__fastcall * *v29)(); // [rsp+50h] [rbp-20h] BYREF
	__int64 v30; // [rsp+58h] [rbp-18h]
	LPVOID v31; // [rsp+60h] [rbp-10h]
	__int64 v32; // [rsp+68h] [rbp-8h]
	__int64 v33; // [rsp+90h] [rbp+20h] BYREF

	*(_QWORD*)a1 = off_140B619B0;
	v2 = *(_QWORD*)(a1 + 304);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 304) = 0i64;
	}
	if (*(_QWORD*)(a1 + 360))
	{
		if (*(_QWORD*)(a1 + 72))
		{
			v3 = *(_QWORD*)(a1 + 16);
			LODWORD(v29) = *(_DWORD*)(a1 + 40);
			v4 = v3 + 7368;
			HIDWORD(v29) = *(_DWORD*)(a1 + 52);
			v30 = *(_QWORD*)(a1 + 56);
			LODWORD(v31) = *(_DWORD*)(a1 + 64);
			v32 = *(_QWORD*)(a1 + 72);
			HIDWORD(v31) = *(_DWORD*)(a1 + 80);
			v5 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(v4 + 24))(&v29);
			v6 = *(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8));
			if (*(_QWORD*)v6)
			{
				while (v5 != **(_QWORD**)v6
					|| !(*(unsigned int(__fastcall**)(__int64(__fastcall***)(), __int64))(v4 + 32))(
						&v29,
						*(_QWORD*)v6 + 16i64))
				{
					v6 = *(_QWORD*)v6 + 8i64;
					if (!*(_QWORD*)v6)
						goto LABEL_9;
				}
				v25 = *(_QWORD*)v6;
				*(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)v6 + 8i64);
				sub_14018B900(v25, 0);
				--* (_QWORD*)v4;
			}
			else
			{
			LABEL_9:
				v27 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v7 = *(_QWORD*)(a1 + 72);
				v29 = TlsValue;
				v30 = v27;
				v33 = 0x141DE4C40i64;
				v31 = lpTlsValue;
				v8 = sub_1401971E0(&dword_140C8A448, 14, &v33, v7, &v29);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v8)
					DebugBreak();
			}
		}
		v9 = *(_QWORD**)(a1 + 360);
		if (v9)
			*v9 = *(_QWORD*)(a1 + 368);
		v10 = *(_QWORD*)(a1 + 368);
		if (v10)
			*(_QWORD*)(v10 + 360) = *(_QWORD*)(a1 + 360);
		*(_QWORD*)(a1 + 360) = 0i64;
		*(_QWORD*)(a1 + 368) = 0i64;
	}
	sub_140292530(a1, 0);
	v11 = *(_QWORD*)(a1 + 144);
	if (v11)
	{
		v12 = v11 - 8;
		v13 = (_QWORD*)(v11 + 16i64 * *(int*)(v11 - 8));
		for (i = *(_DWORD*)(v11 - 8) - 1; i >= 0; --i)
		{
			v15 = *(v13 - 2);
			v13 -= 2;
			if (v15)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
				*v13 = 0i64;
			}
		}
		sub_14018B900(v12, 0);
	}
	sub_14018B900(*(_QWORD*)(a1 + 152), 0);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	v16 = *(_QWORD**)(a1 + 360);
	if (v16)
		*v16 = *(_QWORD*)(a1 + 368);
	v17 = *(_QWORD*)(a1 + 368);
	if (v17)
		*(_QWORD*)(v17 + 360) = *(_QWORD*)(a1 + 360);
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	v18 = *(_QWORD**)(a1 + 344);
	if (v18)
		*v18 = *(_QWORD*)(a1 + 352);
	v19 = *(_QWORD*)(a1 + 352);
	if (v19)
		*(_QWORD*)(v19 + 32) = *(_QWORD*)(a1 + 344);
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	v20 = *(_QWORD**)(a1 + 328);
	if (v20)
		*v20 = *(_QWORD*)(a1 + 336);
	v21 = *(_QWORD*)(a1 + 336);
	if (v21)
		*(_QWORD*)(v21 + 16) = *(_QWORD*)(a1 + 328);
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	v22 = a1 + 256;
	for (j = 5; j >= 0; --j)
	{
		v24 = *(_QWORD*)(v22 - 16);
		v22 -= 16i64;
		if (v24)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B619B0: using guessed type __int64 (__fastcall *off_140B619B0[9])();
// 140C8A448: using guessed type _DWORD dword_140C8A448;

