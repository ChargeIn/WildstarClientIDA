#include "../winhttp.h"

//----- (0000000140458A40) ----------------------------------------------------
__int64 __fastcall sub_140458A40(__int64 a1, int* a2)
{
	int v2; // esi
	int v5; // eax
	__int64 v6; // rax
	__int64 v7; // rcx
	int v8; // eax
	int v9; // edi
	__int64 v10; // rax
	_DWORD* v11; // rcx
	int v12; // ebx
	unsigned int v14; // edx
	int v15; // r8d
	__int64 v16; // rcx
	__int64 v17; // rdx
	int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rcx
	int v22; // [rsp+38h] [rbp-51h]
	__int64(__fastcall * *TlsValue)(); // [rsp+40h] [rbp-49h] BYREF
	__int64 v24; // [rsp+48h] [rbp-41h]
	LPVOID lpTlsValue; // [rsp+50h] [rbp-39h]
	__int64 v26[4]; // [rsp+60h] [rbp-29h] BYREF
	__m256 v27; // [rsp+80h] [rbp-9h] BYREF
	__int128 v28; // [rsp+A0h] [rbp+17h]
	__int128 v29; // [rsp+B0h] [rbp+27h]
	__int64 v30; // [rsp+C0h] [rbp+37h]
	__int64 v31; // [rsp+F0h] [rbp+67h] BYREF

	v2 = 0;
	*(_QWORD*)(a1 + 24) = a2;
	if (a2)
		v5 = *a2;
	else
		v5 = 0;
	*(_DWORD*)(a1 + 32) = v5;
	*(_QWORD*)(a1 + 248) = a2;
	*(_DWORD*)(a1 + 48) = a2[5];
	v6 = sub_1401F64E0(a2[5]);
	v7 = *(_QWORD*)(a1 + 3336);
	*(_QWORD*)(a1 + 256) = v6;
	if (v7)
	{
		*(_DWORD*)(a1 + 232) = *(_DWORD*)(v7 + 184);
		*(_DWORD*)(a1 + 236) = *(_DWORD*)(v7 + 188);
	}
	else
	{
		*(_DWORD*)(a1 + 232) = 0;
		*(_DWORD*)(a1 + 236) = 2;
	}
	*(_DWORD*)(a1 + 216) = *(_DWORD*)(a1 + 232);
	*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 236);
	*(_DWORD*)(a1 + 36) = a2[36];
	*(_DWORD*)(a1 + 40) = a2[37];
	*(_DWORD*)(a1 + 44) = a2[38];
	if (!*(_QWORD*)(a1 + 5896))
	{
		v8 = *(_DWORD*)(a1 + 128);
		if (v8 != 22 && v8 != 15)
		{
			v9 = sub_1404674C0(a1);
			if (v9 < 0)
			{
				v24 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v10 = 0x141E02698i64;
				v11 = &unk_140C8AC70;
			LABEL_12:
				v31 = v10;
				v26[0] = (__int64)TlsValue;
				v26[1] = v24;
				v26[2] = (__int64)lpTlsValue;
				v12 = sub_1401971E0(v11, 5, &v31, v26);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, lpTlsValue);
				if (v12)
					DebugBreak();
				return (unsigned int)v9;
			}
			v14 = *(_DWORD*)(a1 + 40);
			v15 = 3;
			v16 = *(_QWORD*)(qword_140C65898 + 29256);
			if ((v14 & 0x2000) != 0)
				v15 = 0;
			v27 = ymmword_140C78390;
			v30 = 0i64;
			v28 = xmmword_140C783B0;
			v22 = (v14 >> 19) & 1;
			v17 = *(unsigned int*)(a1 + 8);
			v29 = xmmword_140C783C0;
			v9 = (*(__int64(__fastcall**)(__int64, __int64, __m256*, _QWORD, _DWORD, int, __int64, int))(*(_QWORD*)v16 + 184i64))(
				v16,
				v17,
				&v27,
				0i64,
				0,
				v15,
				a1 + 5872,
				v22);
			if (v9 < 0)
			{
				v24 = 0i64;
				TlsValue = &off_140B5E648;
				lpTlsValue = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v10 = 0x141E02660i64;
				v11 = &unk_140C8AC78;
				goto LABEL_12;
			}
			v18 = *(_DWORD*)(a1 + 128);
			if (v18 == 11 || v18 == 32)
				(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5872) + 296i64))(*(_QWORD*)(a1 + 5872), 1i64);
		}
	}
	*(_QWORD*)(a1 + 208) = sub_140247E00(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 28i64));
	sub_14045AEC0(a1);
	sub_140472D80(a1);
	sub_140472E10(a1);
	v19 = qword_140C65898;
	*(_DWORD*)(a1 + 6312) = 1;
	v20 = *(_QWORD*)(v19 + 120);
	if (v20)
	{
		LOBYTE(v2) = *(_DWORD*)(a1 + 8) == *(_DWORD*)(v20 + 8);
		if (v2)
			*(_DWORD*)(v19 + 28568) = 1;
	}
	switch (*(_DWORD*)(a1 + 128))
	{
	case 0xA:
		*(_DWORD*)(a1 + 56) = *(unsigned __int16*)(*(_QWORD*)(a1 + 24) + 176i64);
		goto LABEL_27;
	case 0x12:
	case 0x14:
	case 0x16:
	case 0x17:
	case 0x18:
	case 0x1B:
		break;
	default:
	LABEL_27:
		sub_14045B030(a1, 0i64);
		break;
	}
	v21 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 248i64);
	if (v21)
		*(_QWORD*)(a1 + 176) = v21;
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

