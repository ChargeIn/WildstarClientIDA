#include "../winhttp.h"

//----- (000000014071A400) ----------------------------------------------------
__int64 __fastcall sub_14071A400(__int64 a1, int* a2)
{
	__int64* v4; // r14
	int* v6; // rdx
	__int64 v7; // rcx
	int v8; // ebp
	__int64 v9; // rax
	__int128 v10; // xmm0
	__int64 v11; // rsi
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rdx
	int v15; // eax
	__int64 v16; // rdx
	int v17; // ebp
	__int64 v18; // rdx
	unsigned int v19; // ecx
	int v20; // edx
	unsigned int v21; // r8d
	bool v22; // cf
	bool v23; // zf
	int v24; // edx
	int v25; // [rsp+20h] [rbp-38h] BYREF
	__int64 v26; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * v27)(__int64); // [rsp+30h] [rbp-28h]
	__int64 v28; // [rsp+38h] [rbp-20h]

	v4 = (__int64*)sub_1403D90D0(qword_140C65898, a2[38]);
	if (!v4 || a2 == (int*)-164i64 || (unsigned int)(a2[44] - 4) > 1)
		return 2147500037i64;
	v6 = a2;
	v7 = a1 + 224;
	v8 = 1;
	if ((((unsigned __int8)(a1 - 32) | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)v7, a2, 0xC0ui64);
	}
	else
	{
		v9 = 1i64;
		do
		{
			v10 = *(_OWORD*)v6;
			v7 += 128i64;
			v6 += 32;
			*(_OWORD*)(v7 - 128) = v10;
			*(_OWORD*)(v7 - 112) = *((_OWORD*)v6 - 7);
			*(_OWORD*)(v7 - 96) = *((_OWORD*)v6 - 6);
			*(_OWORD*)(v7 - 80) = *((_OWORD*)v6 - 5);
			*(_OWORD*)(v7 - 64) = *((_OWORD*)v6 - 4);
			*(_OWORD*)(v7 - 48) = *((_OWORD*)v6 - 3);
			*(_OWORD*)(v7 - 32) = *((_OWORD*)v6 - 2);
			*(_OWORD*)(v7 - 16) = *((_OWORD*)v6 - 1);
			--v9;
		} while (v9);
		*(_OWORD*)v7 = *(_OWORD*)v6;
		*(_OWORD*)(v7 + 16) = *((_OWORD*)v6 + 1);
		*(_OWORD*)(v7 + 32) = *((_OWORD*)v6 + 2);
		*(_OWORD*)(v7 + 48) = *((_OWORD*)v6 + 3);
	}
	*(_DWORD*)(a1 + 228) = -1;
	*(_DWORD*)(a1 + 236) = 1;
	v11 = v4[733];
	if (!v11 || !(unsigned int)sub_14071ACB0((_DWORD*)a1, v4[733], (__int64)v4))
		return 2147500037i64;
	if ((*(unsigned int(__fastcall**)(__int64*))(*v4 + 16))(v4) - 13 <= 0xB)
	{
		v12 = *(unsigned int*)(a1 + 388);
		if ((_DWORD)v12)
		{
			if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v11 + 424i64))(v11, v12, 0i64)
				+ 8) & 0x10) != 0)
				return 2147500037i64;
		}
		v13 = *(unsigned int*)(a1 + 392);
		if ((_DWORD)v13)
		{
			if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v11 + 424i64))(v11, v13, 0i64)
				+ 8) & 0x10) != 0)
				return 2147500037i64;
		}
		v14 = *(unsigned int*)(a1 + 396);
		if ((_DWORD)v14)
		{
			if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v11 + 424i64))(v11, v14, 0i64)
				+ 8) & 0x10) != 0)
				return 2147500037i64;
		}
	}
	if (a2[3] || (v15 = 0, a2[1] == -1))
		v15 = 1;
	if (!*(_DWORD*)(a1 + 392) || !v15 && !a2[1])
		v8 = 0;
	*(_DWORD*)(a1 + 504) = v8;
	if (v8 && !v15)
	{
		v16 = *(unsigned int*)(a1 + 388);
		if ((_DWORD)v16)
			v17 = *(_DWORD*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v11 + 424i64))(
				v11,
				v16,
				*(unsigned int*)(a1 + 408))
				+ 20);
		else
			v17 = 0;
		v18 = *(unsigned int*)(a1 + 396);
		if ((_DWORD)v18)
			v19 = *(_DWORD*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v11 + 424i64))(
				v11,
				v18,
				*(unsigned int*)(a1 + 408))
				+ 20);
		else
			v19 = 0;
		v20 = a2[1];
		v21 = v19 + v17;
		if (v20 < v19 + v17)
		{
			*(float*)(a1 + 512) = (float)(int)v21 / (float)v20;
			v19 = a2[1] - v17 * a2[1] / v21;
		}
		v22 = a2[1] < v21;
		v23 = a2[1] == v21;
		v25 = 0;
		*(_DWORD*)(a1 + 508) = v22 || v23;
		v24 = a2[1] - v19;
		v26 = a1;
		v27 = sub_14071ACA0;
		v28 = 0i64;
		sub_140195960(a1 + 432, v24, (__int64)&v25, 4);
	}
	*(_DWORD*)(a1 + 416) = a2[17];
	return sub_140719EF0((__int64*)a1, (int*)(a1 + 224));
}
// 140C65898: using guessed type __int64 qword_140C65898;

