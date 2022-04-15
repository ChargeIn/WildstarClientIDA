#include "../winhttp.h"

//----- (00000001408E71E0) ----------------------------------------------------
__int64 __fastcall sub_1408E71E0(__int64 a1, __int64 a2, __int64* a3, _DWORD* a4, __int64 a5)
{
	__int64 v5; // rax
	unsigned int v10; // edi
	_OWORD* v12; // rax
	__int128 v13; // xmm0
	_OWORD* v14; // rcx
	__int64 v15; // rax
	_OWORD* v16; // rcx
	bool v17; // cc
	__int64 v18; // rax
	__int64 v19; // rax
	char v20; // al
	int i; // ecx
	__int64 v22[5]; // [rsp+20h] [rbp-28h] BYREF
	char v23; // [rsp+60h] [rbp+18h] BYREF

	v5 = *a3;
	v10 = 0;
	v22[0] = 0i64;
	(*(void(__fastcall**)(__int64*, _QWORD, __int64*, char*))(v5 + 24))(a3, 0i64, v22, &v23);
	if (!v22[0])
		return 79i64;
	v12 = (_OWORD*)(v22[0] + 48);
	*(_OWORD*)(a1 + 80) = *(_OWORD*)v22[0];
	*(_OWORD*)(a1 + 96) = *(v12 - 2);
	v13 = *(v12 - 1);
	v22[0] = (__int64)v12;
	*(_OWORD*)(a1 + 112) = v13;
	if (*(_DWORD*)(a1 + 80) == (*(unsigned __int16(__fastcall**)(__int64*))(*a3 + 16))(a3)
		&& *(_DWORD*)(a1 + 88) == *a4)
	{
		v14 = (_OWORD*)v22[0];
		v15 = *(unsigned int*)(a1 + 108);
		*(_QWORD*)(a1 + 136) = v22[0];
		v16 = (_OWORD*)((char*)v14 + ((2 * v15 + 15) & 0xFFFFFFFFFFFFFFF0ui64));
		*(_QWORD*)(a1 + 40) = v16;
		v17 = *(_DWORD*)(a1 + 92) <= 1u;
		v22[0] = (__int64)v16;
		if (!v17)
			*(_QWORD*)(a1 + 48) = (char*)v16 + 8 * *(unsigned int*)(a1 + 112);
		sub_1408E8A60(*(_DWORD*)(a1 + 84), 0, 0i64, (unsigned __int64*)(a1 + 24));
		v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, *(_QWORD*)(a1 + 24));
		*(_QWORD*)(a1 + 8) = v18;
		if (v18)
		{
			sub_1408E8A60(*(_DWORD*)(a1 + 84), 1, 0i64, (unsigned __int64*)(a1 + 32));
			v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 8i64))(a2, *(_QWORD*)(a1 + 32));
			*(_QWORD*)(a1 + 16) = v19;
			if (v19)
			{
				sub_1408E8A60(*(_DWORD*)(a1 + 84), 0, *(_QWORD**)(a1 + 8), (unsigned __int64*)(a1 + 24));
				sub_1408E8A60(*(_DWORD*)(a1 + 84), 1, *(_QWORD**)(a1 + 16), (unsigned __int64*)(a1 + 32));
				v20 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a5 + 8i64))(a5, 4i64);
				*(_DWORD*)(a1 + 128) = 0;
				*(_BYTE*)a1 = v20;
				for (i = a4[1] & 0x3FFFF; i; i &= i - 1)
					++v10;
				return sub_1408E74F0(a1, a2, v10);
			}
			else
			{
				return 52i64;
			}
		}
		else
		{
			return 52i64;
		}
	}
	else
	{
		sub_1403B5350();
		return 2i64;
	}
}
// 1408E71E0: using guessed type __int64 var_28[5];

