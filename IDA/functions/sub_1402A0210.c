#include "../winhttp.h"

//----- (00000001402A0210) ----------------------------------------------------
__int64 __fastcall sub_1402A0210(__int64 a1)
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
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	_QWORD* v15; // rcx
	__int64 v16; // rcx
	_QWORD* v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v22; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v24; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64(__fastcall * *v26)(); // [rsp+50h] [rbp-28h] BYREF
	__int64 v27; // [rsp+58h] [rbp-20h]
	LPVOID v28; // [rsp+60h] [rbp-18h]
	__int64 v29; // [rsp+68h] [rbp-10h]
	__int64 v30; // [rsp+90h] [rbp+18h] BYREF

	*(_QWORD*)a1 = off_140B61D40;
	v2 = *(_QWORD*)(a1 + 232);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 232) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 224), 0);
	if (*(_QWORD*)(a1 + 288))
	{
		if (*(_QWORD*)(a1 + 72))
		{
			v3 = *(_QWORD*)(a1 + 16);
			LODWORD(v26) = *(_DWORD*)(a1 + 40);
			HIDWORD(v26) = *(_DWORD*)(a1 + 52);
			v4 = v3 + 6936;
			v27 = *(_QWORD*)(a1 + 56);
			LODWORD(v28) = *(_DWORD*)(a1 + 64);
			v29 = *(_QWORD*)(a1 + 72);
			HIDWORD(v28) = *(_DWORD*)(a1 + 80);
			v5 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(v4 + 24))(&v26);
			v6 = *(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8));
			if (*(_QWORD*)v6)
			{
				while (v5 != **(_QWORD**)v6
					|| !(*(unsigned int(__fastcall**)(__int64(__fastcall***)(), __int64))(v4 + 32))(
						&v26,
						*(_QWORD*)v6 + 16i64))
				{
					v6 = *(_QWORD*)v6 + 8i64;
					if (!*(_QWORD*)v6)
						goto LABEL_9;
				}
				v22 = *(_QWORD*)v6;
				*(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)v6 + 8i64);
				sub_14018B900(v22, 0);
				--* (_QWORD*)v4;
			}
			else
			{
			LABEL_9:
				v24 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v7 = *(_QWORD*)(a1 + 72);
				v26 = TlsValue;
				v27 = v24;
				v30 = 0x141DE59B0i64;
				v28 = lpTlsValue;
				v8 = sub_1401971E0(&dword_140C8A4AC, 14, &v30, v7, &v26);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v8)
					DebugBreak();
			}
		}
		v9 = *(_QWORD**)(a1 + 288);
		if (v9)
			*v9 = *(_QWORD*)(a1 + 296);
		v10 = *(_QWORD*)(a1 + 296);
		if (v10)
			*(_QWORD*)(v10 + 288) = *(_QWORD*)(a1 + 288);
		*(_QWORD*)(a1 + 288) = 0i64;
		*(_QWORD*)(a1 + 296) = 0i64;
	}
	sub_1402A0970(a1, 0);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	v11 = *(_QWORD**)(a1 + 304);
	if (v11)
		*v11 = *(_QWORD*)(a1 + 312);
	v12 = *(_QWORD*)(a1 + 312);
	if (v12)
		*(_QWORD*)(v12 + 304) = *(_QWORD*)(a1 + 304);
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	v13 = *(_QWORD**)(a1 + 288);
	if (v13)
		*v13 = *(_QWORD*)(a1 + 296);
	v14 = *(_QWORD*)(a1 + 296);
	if (v14)
		*(_QWORD*)(v14 + 288) = *(_QWORD*)(a1 + 288);
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	v15 = *(_QWORD**)(a1 + 272);
	if (v15)
		*v15 = *(_QWORD*)(a1 + 280);
	v16 = *(_QWORD*)(a1 + 280);
	if (v16)
		*(_QWORD*)(v16 + 32) = *(_QWORD*)(a1 + 272);
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	v17 = *(_QWORD**)(a1 + 256);
	if (v17)
		*v17 = *(_QWORD*)(a1 + 264);
	v18 = *(_QWORD*)(a1 + 264);
	if (v18)
		*(_QWORD*)(v18 + 16) = *(_QWORD*)(a1 + 256);
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	v19 = *(_QWORD*)(a1 + 192);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	v20 = *(_QWORD*)(a1 + 176);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	sub_1402A3430((__int64*)(a1 + 160));
	sub_1402A3170((_QWORD*)(a1 + 144));
	return sub_1402A2F90((__int64*)(a1 + 128));
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B61D40: using guessed type __int64 (__fastcall *off_140B61D40[12])();
// 140C8A4AC: using guessed type _DWORD dword_140C8A4AC;

