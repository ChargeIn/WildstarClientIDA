//----- (00000001402A6680) ----------------------------------------------------
__int64 __fastcall sub_1402A6680(__int64 a1, int* a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
	int v8; // ebx
	__int64 result; // rax
	__int64 v10; // rdi
	__int64 v11; // rdi
	unsigned __int64 v12; // r14
	int** v13; // rsi
	int* v14; // rax
	int* v15; // rdx
	int* v16; // rcx
	__int64 v17; // rax
	__int64* v18; // rcx
	__int64 v19; // rax
	__int64(__fastcall * *v20)(); // rax
	__int64 v21; // [rsp+20h] [rbp-60h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+28h] [rbp-58h] BYREF
	__int128 v23; // [rsp+30h] [rbp-50h]
	int(__fastcall * v24)(__int64); // [rsp+40h] [rbp-40h]
	__int64 v25; // [rsp+48h] [rbp-38h]
	__int64 v26; // [rsp+50h] [rbp-30h]
	__int64(__fastcall * *v27)(); // [rsp+60h] [rbp-20h] BYREF
	__int128 v28; // [rsp+68h] [rbp-18h]
	__int64 v29; // [rsp+78h] [rbp-8h]

	if (a4 <= 2)
	{
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)(a1 + 32) = 0i64;
		*(_QWORD*)(a1 + 40) = 0i64;
		*(_QWORD*)(a1 + 48) = 0i64;
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_QWORD*)(a1 + 72) = 0i64;
		*(_QWORD*)(a1 + 80) = 0i64;
		*(_DWORD*)(a1 + 56) = a5;
		*(_DWORD*)(a1 + 24) = 2;
		*(_DWORD*)(a1 + 60) = a6;
		*(_DWORD*)(a1 + 40) = a3;
		*(_DWORD*)(a1 + 64) = a7;
		*(_DWORD*)(a1 + 52) = a4;
		*(_QWORD*)(a1 + 72) = sub_14018E9C0(a2);
		result = sub_1402A6900(a1, 2);
		if ((int)result >= 0)
		{
			v10 = *(_QWORD*)(a1 + 16);
			LODWORD(v27) = *(_DWORD*)(a1 + 40);
			v11 = v10 + 7016;
			HIDWORD(v27) = *(_DWORD*)(a1 + 52);
			LODWORD(v28) = *(_DWORD*)(a1 + 56);
			*(_QWORD*)((char*)&v28 + 4) = *(_QWORD*)(a1 + 60);
			v29 = *(_QWORD*)(a1 + 72);
			HIDWORD(v28) = *(_DWORD*)(a1 + 80);
			if (*(_QWORD*)v11 == *(_QWORD*)(v11 + 8))
				sub_1400290D0(v11);
			v12 = (*(__int64(__fastcall**)(__int64(__fastcall***)()))(v11 + 24))(&v27);
			v13 = (int**)(*(_QWORD*)(v11 + 16) + 8 * (v12 % *(_QWORD*)(v11 + 8)));
			v14 = sub_14018B280(56i64, 0);
			v15 = v14;
			if (v14)
			{
				v16 = *v13;
				*(_QWORD*)v14 = v12;
				*((_QWORD*)v14 + 1) = v16;
				*((_QWORD*)v14 + 2) = v27;
				*(_OWORD*)(v14 + 6) = v28;
				v17 = v29;
				*((_QWORD*)v15 + 6) = a1;
				*((_QWORD*)v15 + 5) = v17;
			}
			else
			{
				v15 = 0i64;
			}
			*v13 = v15;
			++* (_QWORD*)v11;
			v18 = (__int64*)(*(_QWORD*)(a1 + 16) + 6872i64);
			if (!*(_QWORD*)(a1 + 568))
			{
				*(_QWORD*)(a1 + 568) = v18;
				*(_QWORD*)(a1 + 576) = *v18;
				*v18 = a1;
				v19 = *(_QWORD*)(a1 + 576);
				if (v19)
					*(_QWORD*)(v19 + 568) = a1 + 576;
			}
			v20 = *(__int64(__fastcall***)())(a1 + 72);
			LODWORD(v23) = 0;
			v25 = 0i64;
			TlsValue = v20;
			v26 = 0i64;
			*((_QWORD*)&v23 + 1) = a1;
			v24 = sub_1402A70C0;
			sub_1401B6BF0((__int64)v18, &TlsValue, (int**)(a1 + 512));
			return 0i64;
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v23 = 0i64;
		*((_QWORD*)&v23 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v27 = TlsValue;
		v21 = 0x141DE6490i64;
		v28 = v23;
		v8 = sub_1401971E0(&dword_140C8A510, 14, &v21, &v27);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v23 + 1));
		if (v8)
			DebugBreak();
		return 2147500037i64;
	}
	return result;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A510: using guessed type _DWORD dword_140C8A510;

