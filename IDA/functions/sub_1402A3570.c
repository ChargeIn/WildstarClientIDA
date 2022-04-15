#include "../winhttp.h"

//----- (00000001402A3570) ----------------------------------------------------
__int64 __fastcall sub_1402A3570(__int64 a1)
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
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v21; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v23; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64(__fastcall * *v25)(); // [rsp+50h] [rbp-28h] BYREF
	__int64 v26; // [rsp+58h] [rbp-20h]
	LPVOID v27; // [rsp+60h] [rbp-18h]
	__int64 v28; // [rsp+68h] [rbp-10h]
	__int64 v29; // [rsp+90h] [rbp+18h] BYREF

	*(_QWORD*)a1 = off_140B61DB0;
	v2 = *(_QWORD*)(a1 + 224);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 224) = 0i64;
	}
	if (*(_QWORD*)(a1 + 280))
	{
		if (*(_QWORD*)(a1 + 72))
		{
			v3 = *(_QWORD*)(a1 + 16);
			LODWORD(v25) = *(_DWORD*)(a1 + 40);
			HIDWORD(v25) = *(_DWORD*)(a1 + 52);
			v4 = v3 + 6976;
			v26 = *(_QWORD*)(a1 + 56);
			LODWORD(v27) = *(_DWORD*)(a1 + 64);
			v28 = *(_QWORD*)(a1 + 72);
			HIDWORD(v27) = *(_DWORD*)(a1 + 80);
			v5 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(v4 + 24))(&v25);
			v6 = *(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8));
			if (*(_QWORD*)v6)
			{
				while (v5 != **(_QWORD**)v6
					|| !(*(unsigned int(__fastcall**)(__int64(__fastcall***)(), __int64))(v4 + 32))(
						&v25,
						*(_QWORD*)v6 + 16i64))
				{
					v6 = *(_QWORD*)v6 + 8i64;
					if (!*(_QWORD*)v6)
						goto LABEL_9;
				}
				v21 = *(_QWORD*)v6;
				*(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)v6 + 8i64);
				sub_14018B900(v21, 0);
				--* (_QWORD*)v4;
			}
			else
			{
			LABEL_9:
				v23 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v7 = *(_QWORD*)(a1 + 72);
				v25 = TlsValue;
				v26 = v23;
				v29 = 0x141DE6110i64;
				v27 = lpTlsValue;
				v8 = sub_1401971E0(&dword_140C8A4DC, 14, &v29, v7, &v25);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v8)
					DebugBreak();
			}
		}
		v9 = *(_QWORD**)(a1 + 280);
		if (v9)
			*v9 = *(_QWORD*)(a1 + 288);
		v10 = *(_QWORD*)(a1 + 288);
		if (v10)
			*(_QWORD*)(v10 + 280) = *(_QWORD*)(a1 + 280);
		*(_QWORD*)(a1 + 280) = 0i64;
		*(_QWORD*)(a1 + 288) = 0i64;
	}
	sub_1402A3CE0(a1, 0);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	v11 = *(_QWORD**)(a1 + 280);
	if (v11)
		*v11 = *(_QWORD*)(a1 + 288);
	v12 = *(_QWORD*)(a1 + 288);
	if (v12)
		*(_QWORD*)(v12 + 280) = *(_QWORD*)(a1 + 280);
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	v13 = *(_QWORD**)(a1 + 264);
	if (v13)
		*v13 = *(_QWORD*)(a1 + 272);
	v14 = *(_QWORD*)(a1 + 272);
	if (v14)
		*(_QWORD*)(v14 + 32) = *(_QWORD*)(a1 + 264);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	v15 = *(_QWORD**)(a1 + 248);
	if (v15)
		*v15 = *(_QWORD*)(a1 + 256);
	v16 = *(_QWORD*)(a1 + 256);
	if (v16)
		*(_QWORD*)(v16 + 16) = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	v17 = *(_QWORD*)(a1 + 192);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	v18 = *(_QWORD*)(a1 + 168);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	sub_1402A5C90((_QWORD*)(a1 + 152));
	v19 = *(_QWORD*)(a1 + 144);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	return sub_1402A2F90((__int64*)(a1 + 128));
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B61DB0: using guessed type __int64 (__fastcall *off_140B61DB0[9])();
// 140C8A4DC: using guessed type _DWORD dword_140C8A4DC;

