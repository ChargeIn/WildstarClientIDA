#include "../winhttp.h"

//----- (00000001402AD050) ----------------------------------------------------
void __fastcall sub_1402AD050(_DWORD* a1, unsigned int a2, __int64 a3)
{
	__int64 v4; // r15
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned int v9; // eax
	unsigned int v10; // ecx
	__int64 v11; // rcx
	_DWORD* v12; // rax
	unsigned int v13; // edx
	_DWORD* v14; // r13
	__int64 v15; // rax
	_DWORD* v16; // rcx
	int v17; // ebx
	__int64 v18; // rdi
	_QWORD* v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rax
	int v23; // edx
	int v24; // edx
	__int64 v25; // rax
	int v26; // xmm1_4
	__int64 v27; // rax
	int v28; // xmm0_4
	int v29; // xmm1_4
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // [rsp+20h] [rbp-50h] BYREF
	__int64 v33[4]; // [rsp+30h] [rbp-40h] BYREF
	__int64(__fastcall * *TlsValue)(); // [rsp+50h] [rbp-20h] BYREF
	unsigned __int64 v35; // [rsp+58h] [rbp-18h]
	LPVOID lpTlsValue; // [rsp+60h] [rbp-10h]

	v4 = a2;
	if (!*(_DWORD*)a3)
	{
		v6 = *(_QWORD*)(a3 + 8);
		if (!v6)
			v6 = *(_QWORD*)(*(_QWORD*)a1 + 8584i64);
		v7 = *(_QWORD*)(v6 + 112);
		if (*(_QWORD*)&a1[2 * a2 + 26] != v7)
		{
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			v8 = *(_QWORD*)&a1[2 * v4 + 26];
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
			*(_QWORD*)&a1[2 * v4 + 26] = *(_QWORD*)(v6 + 112);
		}
		if ((_DWORD)v4)
			goto LABEL_36;
		v9 = *(_DWORD*)(v6 + 24);
		a1[34] = v9;
		v10 = *(_DWORD*)(v6 + 28);
		goto LABEL_30;
	}
	v11 = *(_QWORD*)(a3 + 8);
	if (!v11)
	{
		v30 = *(_QWORD*)&a1[2 * a2 + 26];
		if (v30)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 16i64))(v30);
			*(_QWORD*)&a1[2 * v4 + 26] = 0i64;
		}
		goto LABEL_36;
	}
	v12 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11);
	v13 = *(_DWORD*)(a3 + 20);
	v14 = v12;
	if (v13 >= v12[5])
	{
		TlsValue = &off_140B5E648;
		v35 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v15 = 0x141DE6E50i64;
		v16 = &unk_140C8A550;
		goto LABEL_15;
	}
	if (((v12[7] - 3) & 0xFFFFFFFD) != 0)
	{
		TlsValue = &off_140B5E648;
		v35 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v15 = 0x141DE6DE0i64;
		v16 = &unk_140C8A540;
		goto LABEL_15;
	}
	if (!dword_140AE64C0[v12[6]])
	{
		if (*(_DWORD*)a3 != 1)
		{
			if (*(_DWORD*)a3 == 2)
			{
				v21 = *(_QWORD*)(a3 + 8);
				v22 = sub_1402A71B0(v21, *(_DWORD*)(a3 + 16), v13);
				sub_140282570(&a1[2 * v4 + 26], v22);
				*(_DWORD*)(v21 + 344) = 1;
			}
			else if (*(_DWORD*)a3 == 3)
			{
				v18 = *(_QWORD*)(a3 + 8);
				v19 = &a1[2 * v4 + 26];
				v20 = sub_1402A47B0(v18, *(_DWORD*)(a3 + 16), v13);
			LABEL_27:
				sub_140282570(v19, v20);
				*(_DWORD*)(v18 + 184) = 1;
			}
			if ((_DWORD)v4)
			{
			LABEL_36:
				v31 = 3 * v4;
				*(_QWORD*)&a1[2 * v31 + 2] = *(_QWORD*)a3;
				*(_QWORD*)&a1[2 * v31 + 4] = *(_QWORD*)(a3 + 8);
				*(_QWORD*)&a1[2 * v31 + 6] = *(_QWORD*)(a3 + 16);
				*(_DWORD*)(*(_QWORD*)a1 + 7176i64) |= 8u;
				return;
			}
			v23 = v14[1] >> *(_DWORD*)(a3 + 20);
			a1[34] = v23 + (v23 == 0);
			v24 = v14[2] >> *(_DWORD*)(a3 + 20);
			v10 = (v24 == 0) + v24;
			v9 = a1[34];
		LABEL_30:
			a1[35] = v10;
			v35 = __PAIR64__(v10, v9);
			v25 = *((_QWORD*)a1 + 18);
			TlsValue = 0i64;
			lpTlsValue = (LPVOID)0x3F80000000000000i64;
			if (v25 || *((_QWORD*)a1 + 19) != v35 || *((LPVOID*)a1 + 20) != lpTlsValue)
			{
				v26 = HIDWORD(TlsValue);
				v27 = *(_QWORD*)a1;
				a1[36] = (_DWORD)TlsValue;
				v28 = v35;
				a1[37] = v26;
				v29 = HIDWORD(v35);
				a1[38] = v28;
				a1[39] = v29;
				a1[40] = 0;
				a1[41] = 1065353216;
				*(_DWORD*)(v27 + 7176) |= 0x10u;
			}
			goto LABEL_36;
		}
		v18 = *(_QWORD*)(a3 + 8);
		v19 = &a1[2 * v4 + 26];
		v20 = sub_1402A11E0(v18, v13);
		goto LABEL_27;
	}
	TlsValue = &off_140B5E648;
	v35 = 0i64;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v15 = 0x141DE6D50i64;
	v16 = &unk_140C8A544;
LABEL_15:
	v32 = v15;
	v33[0] = (__int64)TlsValue;
	v33[1] = v35;
	v33[2] = (__int64)lpTlsValue;
	v17 = sub_1401971E0(v16, 14, &v32, v33);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v17)
		DebugBreak();
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

