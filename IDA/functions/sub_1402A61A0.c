//----- (00000001402A61A0) ----------------------------------------------------
__int64 __fastcall sub_1402A61A0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdi
	__int64 v4; // rdi
	unsigned __int64 v5; // r14
	__int64 v6; // rbx
	__int64 v7; // r9
	int v8; // ebx
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	_QWORD* v15; // rcx
	__int64 v16; // rcx
	int v17; // r15d
	int v18; // edi
	__int64 v19; // rbx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64* v22; // rdi
	__int64 result; // rax
	int i; // r14d
	unsigned __int64 j; // rbx
	__int64 v26; // rcx
	__int64* v27; // rdi
	unsigned __int64 k; // rbx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int64 v32; // [rsp+38h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-30h]
	__int64(__fastcall * *v34)(); // [rsp+50h] [rbp-20h] BYREF
	__int64 v35; // [rsp+58h] [rbp-18h]
	LPVOID v36; // [rsp+60h] [rbp-10h]
	__int64 v37; // [rsp+68h] [rbp-8h]
	__int64 v38; // [rsp+A0h] [rbp+30h] BYREF

	*(_QWORD*)a1 = off_140B61E20;
	v2 = *(_QWORD*)(a1 + 512);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 512) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 504), 0);
	if (*(_QWORD*)(a1 + 568))
	{
		if (*(_QWORD*)(a1 + 72))
		{
			v3 = *(_QWORD*)(a1 + 16);
			LODWORD(v34) = *(_DWORD*)(a1 + 40);
			v4 = v3 + 7016;
			HIDWORD(v34) = *(_DWORD*)(a1 + 52);
			v35 = *(_QWORD*)(a1 + 56);
			LODWORD(v36) = *(_DWORD*)(a1 + 64);
			v37 = *(_QWORD*)(a1 + 72);
			HIDWORD(v36) = *(_DWORD*)(a1 + 80);
			v5 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(v4 + 24))(&v34);
			v6 = *(_QWORD*)(v4 + 16) + 8 * (v5 % *(_QWORD*)(v4 + 8));
			if (*(_QWORD*)v6)
			{
				while (v5 != **(_QWORD**)v6
					|| !(*(unsigned int(__fastcall**)(__int64(__fastcall***)(), __int64))(v4 + 32))(
						&v34,
						*(_QWORD*)v6 + 16i64))
				{
					v6 = *(_QWORD*)v6 + 8i64;
					if (!*(_QWORD*)v6)
						goto LABEL_9;
				}
				v30 = *(_QWORD*)v6;
				*(_QWORD*)v6 = *(_QWORD*)(*(_QWORD*)v6 + 8i64);
				sub_14018B900(v30, 0);
				--* (_QWORD*)v4;
			}
			else
			{
			LABEL_9:
				v32 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v7 = *(_QWORD*)(a1 + 72);
				v34 = TlsValue;
				v35 = v32;
				v38 = 0x141DE6540i64;
				v36 = lpTlsValue;
				v8 = sub_1401971E0(&dword_140C8A514, 14, &v38, v7, &v34);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v8)
					DebugBreak();
			}
		}
		v9 = *(_QWORD**)(a1 + 568);
		if (v9)
			*v9 = *(_QWORD*)(a1 + 576);
		v10 = *(_QWORD*)(a1 + 576);
		if (v10)
			*(_QWORD*)(v10 + 568) = *(_QWORD*)(a1 + 568);
		*(_QWORD*)(a1 + 568) = 0i64;
		*(_QWORD*)(a1 + 576) = 0i64;
	}
	sub_1402A6900(a1, 0);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	v11 = *(_QWORD**)(a1 + 568);
	if (v11)
		*v11 = *(_QWORD*)(a1 + 576);
	v12 = *(_QWORD*)(a1 + 576);
	if (v12)
		*(_QWORD*)(v12 + 568) = *(_QWORD*)(a1 + 568);
	*(_QWORD*)(a1 + 568) = 0i64;
	*(_QWORD*)(a1 + 576) = 0i64;
	v13 = *(_QWORD**)(a1 + 552);
	if (v13)
		*v13 = *(_QWORD*)(a1 + 560);
	v14 = *(_QWORD*)(a1 + 560);
	if (v14)
		*(_QWORD*)(v14 + 32) = *(_QWORD*)(a1 + 552);
	*(_QWORD*)(a1 + 552) = 0i64;
	*(_QWORD*)(a1 + 560) = 0i64;
	v15 = *(_QWORD**)(a1 + 536);
	if (v15)
		*v15 = *(_QWORD*)(a1 + 544);
	v16 = *(_QWORD*)(a1 + 544);
	if (v16)
		*(_QWORD*)(v16 + 16) = *(_QWORD*)(a1 + 536);
	v17 = 5;
	*(_QWORD*)(a1 + 536) = 0i64;
	*(_QWORD*)(a1 + 544) = 0i64;
	v18 = 5;
	v19 = a1 + 448;
	do
	{
		v20 = *(_QWORD*)(v19 - 16);
		v19 -= 16i64;
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
		--v18;
	} while (v18 >= 0);
	v21 = *(_QWORD*)(a1 + 336);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	v22 = (__int64*)(a1 + 320);
	result = sub_1402A2F90((__int64*)(a1 + 320));
	for (i = 5; i >= 0; --i)
	{
		v22 -= 2;
		for (j = 0i64; j < v22[1]; ++j)
		{
			result = *v22;
			v26 = *(_QWORD*)(*v22 + 8 * j);
			if (v26)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26);
		}
		if (*v22)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*v22 - 16) + 8i64))(*v22 - 16);
	}
	v27 = (__int64*)(a1 + 224);
	do
	{
		v27 -= 2;
		for (k = 0i64; k < v27[1]; ++k)
		{
			result = *v27;
			v29 = *(_QWORD*)(*v27 + 8 * k);
			if (v29)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 16i64))(v29);
		}
		if (*v27)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*v27 - 16) + 8i64))(*v27 - 16);
		--v17;
	} while (v17 >= 0);
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B61E20: using guessed type __int64 (__fastcall *off_140B61E20[9])();
// 140C8A514: using guessed type _DWORD dword_140C8A514;

