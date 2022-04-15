#include "../winhttp.h"

//----- (0000000140038870) ----------------------------------------------------
void __fastcall sub_140038870(__int64 a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbp
	__int64 v4; // r14
	__int64 v5; // rdi
	__int64 v6; // r12
	__int64 v7; // rbx
	__int64 v8; // rbp
	__int64 v9; // rsi
	__int64 v10; // rbx
	__int64 v11; // rdi
	int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rdx
	unsigned __int64 v15; // rbx
	unsigned __int64 v16; // rsi
	__int64 v17; // rdi
	_QWORD* v18; // rax
	__int64 v19; // rcx
	__int64 v20; // [rsp+60h] [rbp+8h] BYREF

	v2 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"LoginWindow");
	v3 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"LoginForm");
	v4 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthForm");
	v5 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthOutputText");
	sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthButtonsBG");
	v6 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"AuthOutputBackspace");
	v7 = sub_1400E9080(*(_QWORD**)(a1 + 72), L"IpVerifyForm");
	sub_1400D42F0(v2, 1, 1, 4.0);
	sub_1400D42F0(v3, 0, 0, 4.0);
	sub_1400D42F0(v4, 1, 0, 4.0);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 80i64))(v5, 0i64);
	sub_1400D42F0(v7, 0, 0, 4.0);
	v8 = *(_QWORD*)(a1 + 216);
	v9 = *(_QWORD*)(a1 + 208);
	if (v9 != v8)
	{
		v10 = v9 + 4;
		if (v9 + 4 != v8)
		{
			v11 = 4i64;
			do
			{
				v12 = sub_1407DDB28();
				v10 += 4i64;
				v13 = v11 >> 2;
				v11 += 4i64;
				v14 = v12 % (v13 + 1);
				LODWORD(v13) = *(_DWORD*)(v10 - 4);
				*(_DWORD*)(v10 - 4) = *(_DWORD*)(v9 + 4 * v14);
				*(_DWORD*)(v9 + 4 * v14) = v13;
			} while (v10 != v8);
		}
	}
	v15 = 0i64;
	v16 = (__int64)(*(_QWORD*)(a1 + 216) - *(_QWORD*)(a1 + 208)) >> 2;
	if (v16)
	{
		do
		{
			v17 = sub_1400E9080(*(_QWORD**)(a1 + 72), off_140B55720[v15]);
			if (v17)
			{
				v18 = sub_14018D540(&v20, (__int64)L"%d", *(unsigned int*)(*(_QWORD*)(a1 + 208) + 4 * v15));
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v17 + 80i64))(v17, *v18);
				if (v20)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			}
			++v15;
		} while (v15 < v16);
	}
	sub_1400D42F0(v6, 0, 0, 4.0);
	v19 = *(_QWORD*)(a1 + 72);
	*(_DWORD*)(a1 + 168) = 1;
	if (v19)
		sub_1400EA3E0(v19, "NetworkStatus", &unk_1409D01F2);
}
// 1409D22C4: using guessed type wchar_t aD_0[3];
// 1409F5938: using guessed type wchar_t aLoginwindow[12];
// 1409F5A18: using guessed type wchar_t aAuthform[9];
// 1409F5AE8: using guessed type wchar_t aLoginform[10];
// 1409F5B00: using guessed type wchar_t aAuthbuttonsbg[14];
// 1409F5B20: using guessed type wchar_t aAuthoutputtext[15];
// 1409F5B40: using guessed type wchar_t aIpverifyform[13];
// 1409F5B68: using guessed type wchar_t aAuthoutputback[20];
// 140B55720: using guessed type wchar_t *off_140B55720[10];

