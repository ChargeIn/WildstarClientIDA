#include "../winhttp.h"

//----- (00000001402C9DB0) ----------------------------------------------------
int* __fastcall sub_1402C9DB0(__int64 a1)
{
	int v2; // r14d
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	int* result; // rax
	unsigned int v7; // ecx
	unsigned int v8; // esi
	unsigned int* v9; // rdi
	__int64 v10; // r15
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rcx
	int* v15; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v17; // [rsp+38h] [rbp-C8h]
	LPVOID Value; // [rsp+40h] [rbp-C0h]
	int v19; // [rsp+48h] [rbp-B8h] BYREF
	__int128 v20; // [rsp+50h] [rbp-B0h] BYREF
	LPVOID v21[2]; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v22)(); // [rsp+70h] [rbp-90h] BYREF
	const wchar_t* v23; // [rsp+78h] [rbp-88h]
	LPVOID lpTlsValue; // [rsp+80h] [rbp-80h]
	__int64 v25; // [rsp+88h] [rbp-78h]
	__int64 v26[4]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v27[4]; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v28[2]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v29[2]; // [rsp+F0h] [rbp-10h] BYREF
	__int16 v30; // [rsp+100h] [rbp+0h] BYREF
	int v31[127]; // [rsp+102h] [rbp+2h] BYREF
	_WORD v32[256]; // [rsp+300h] [rbp+200h] BYREF
	__int16 v33[256]; // [rsp+500h] [rbp+400h] BYREF
	_WORD v34[256]; // [rsp+700h] [rbp+600h] BYREF
	__m128i v35[33]; // [rsp+900h] [rbp+800h] BYREF

	v2 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 40i64))(*(_QWORD*)(a1 + 32), 0i64);
	if (v2 >= 0)
	{
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
		v4 = *(_QWORD*)(a1 + 40);
		*(_QWORD*)(a1 + 64) = v3;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		TlsValue = *(__int64(__fastcall***)())(a1 + 64);
		v17 = (__int64)TlsValue + v5;
		Value = 0i64;
		v2 = sub_1402C9270((unsigned __int64*)&TlsValue, (__int64)(TlsValue + 46), (__int64)TlsValue);
		if (v2 >= 0)
		{
			result = *(int**)(a1 + 64);
			v7 = result[8];
			if (!v7)
				return result;
			sub_1402CA240((__int64*)(a1 + 80), v7);
			result = *(int**)(a1 + 64);
			v8 = 0;
			if (!result[8])
				return result;
			while (1)
			{
				v9 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 40i64) + ((unsigned __int64)v8 << 6));
				sub_1407DF8DC(*(char**)(a1 + 16), v29, v33, v32, v34);
				v19 = 46;
				v30 = 0;
				sub_1407E4830(v31, 0i64, 0x1FEui64);
				sub_1407E16D0(&v30, 256i64, (char*)v32);
				sub_1407E16D0(&v30, 256i64, (char*)&v19);
				sub_1407E16D0(
					&v30,
					256i64,
					(char*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 296i64)
						+ 2i64 * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 312i64) + 4i64 * *v9)));
				sub_1407E1758(v35, v29, v33, &v30, v34);
				v10 = *(_QWORD*)(a1 + 88) + 176i64 * v8;
				LODWORD(v20) = 0;
				v21[0] = sub_1402D3250;
				*(_QWORD*)(v10 + 32) = a1;
				*((_QWORD*)&v20 + 1) = v10;
				v21[1] = 0i64;
				v2 = sub_1401B6DE0(v11, v35, (int**)(v10 + 8), v10, (__int64)&v20);
				if (v2 < 0)
					break;
				result = *(int**)(a1 + 64);
				if (++v8 >= result[8])
					return result;
			}
			sub_1401C5690(432i64, (int**)(v10 + 8), 0);
			v12 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 8) + 32i64))(*(_QWORD*)(v10 + 8));
			*(_QWORD*)(v10 + 16) = v12;
			sub_1407E4830(v12, 0i64, 0x1B0ui64);
		}
	}
	if (v2 != -1608318974)
	{
		v17 = 0i64;
		TlsValue = &off_140B5E648;
		Value = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v26[0] = (__int64)TlsValue;
		v26[1] = v17;
		*(_QWORD*)&v20 = &off_140B5E648;
		*((_QWORD*)&v20 + 1) = L"Result";
		v26[2] = (__int64)Value;
		v21[0] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v20);
		v13 = *(_QWORD*)(a1 + 16);
		LODWORD(v21[1]) = v2;
		v22 = &off_140B5E648;
		*(_QWORD*)&v20 = &off_140B5E640;
		v28[1] = *(_OWORD*)v21;
		v23 = L"FileName";
		v28[0] = v20;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v22);
		v25 = v13;
		v27[1] = (__int64)v23;
		v22 = &off_140B5E638;
		v27[3] = v13;
		v27[0] = (__int64)&off_140B5E638;
		v29[0] = 0x141DEAA78i64;
		v27[2] = (__int64)lpTlsValue;
		LODWORD(v13) = sub_1401971E0(&dword_140C8A564, 16, v29, v27, v28, v26);
		v22 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		*(_QWORD*)&v20 = &off_140B5E648;
		TlsSetValue(dwTlsIndex, v21[0]);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, Value);
		if ((_DWORD)v13)
			DebugBreak();
	}
	v14 = *(_QWORD*)(a1 + 40);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	sub_1401C5690(368i64, (int**)(a1 + 40), 0);
	v15 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
	*(_QWORD*)(a1 + 64) = v15;
	return sub_1407E4830(v15, 0i64, 0x170ui64);
}
// 1402C9F8A: variable 'v11' is possibly undefined
// 140A42BD8: using guessed type wchar_t aFilename[9];
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A564: using guessed type _DWORD dword_140C8A564;
// 1402C9DB0: using guessed type __int16 var_640[256];
// 1402C9DB0: using guessed type _WORD var_440[256];
// 1402C9DB0: using guessed type int var_A3E[127];
// 1402C9DB0: using guessed type __m128i var_240[33];

