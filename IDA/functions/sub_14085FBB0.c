#include "../winhttp.h"

//----- (000000014085FBB0) ----------------------------------------------------
char __fastcall sub_14085FBB0(__int64 a1)
{
	__int64 v1; // rdi
	_DWORD* v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	char v6; // al
	float v7; // xmm0_4
	bool v8; // zf
	unsigned __int8 v9; // dl
	__int64 v10; // rcx
	__int64 v11; // r8
	__int64 v12; // rax
	float v13; // eax
	float v14; // xmm1_4
	float v15; // xmm0_4
	float v16; // xmm1_4
	__int64 v17; // rax
	char result; // al
	float v19; // xmm1_4
	bool v20; // [rsp+28h] [rbp-20h]
	char v21; // [rsp+38h] [rbp-10h]
	__int64 v22; // [rsp+50h] [rbp+8h] BYREF

	v1 = a1 + 200;
	*(_DWORD*)(a1 + 200) = 0;
	*(_QWORD*)(a1 + 204) = 1065353216i64;
	*(_QWORD*)(a1 + 212) = 0i64;
	*(_BYTE*)(a1 + 224) &= 0xFCu;
	*(_DWORD*)(a1 + 220) = 0;
	*(_BYTE*)(a1 + 232) &= ~1u;
	*(_DWORD*)(a1 + 228) = 0;
	v3 = (_DWORD*)(a1 + 260);
	v4 = 4i64;
	*(_QWORD*)(v1 + 36) = 0i64;
	do
	{
		*(v3 - 4) = 0;
		*v3++ = 0;
		--v4;
	} while (v4);
	*(_DWORD*)(v1 + 76) = 0;
	*(_WORD*)(v1 + 80) = 0;
	*(_BYTE*)(v1 + 82) = 0;
	sub_14085FDE0(a1);
	sub_140850B30(*(_QWORD*)(a1 + 160), *(_QWORD*)(a1 + 176), a1 + 448, *(_QWORD*)(a1 + 88));
	v5 = *(_QWORD*)(a1 + 184);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 96i64))(v5);
	v6 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 160) + 464i64))(
		*(_QWORD*)(a1 + 160),
		*(_QWORD*)(a1 + 176));
	*(_BYTE*)(a1 + 383) &= ~1u;
	*(_BYTE*)(a1 + 383) |= v6 & 1;
	if (*(char*)(a1 + 382) < 0)
	{
		v7 = sub_14086F790(*(_QWORD*)(a1 + 160), *(_QWORD*)(a1 + 168));
		v8 = (*(_BYTE*)(a1 + 382) & 0x40) == 0;
		*(float*)v1 = v7;
		if (v8)
			sub_1408605D0(a1);
	}
	v9 = *(_BYTE*)(a1 + 380);
	v10 = *(_QWORD*)(a1 + 160);
	v11 = 0xFFFFFFFFi64;
	v21 = 1;
	if ((*(_BYTE*)(a1 + 384) & 1) == 0)
		v11 = 4294967279i64;
	v12 = *(_QWORD*)(a1 + 176);
	*(_DWORD*)(a1 + 464) = 1120534528;
	v20 = v9 >> 7 == 0;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64, __int64, bool, __int64, char))(*(_QWORD*)v10 + 336i64))(
		v10,
		v1,
		v11,
		a1 + 48,
		v12,
		v20,
		a1 + 72,
		v21);
	v13 = *(float*)v1;
	v14 = *(float*)(a1 + 80) + *(float*)(a1 + 212);
	v15 = *(float*)(a1 + 76) + *(float*)(a1 + 208);
	*(_BYTE*)(a1 + 380) |= 0x80u;
	*(float*)(a1 + 284) = v13;
	*(float*)(a1 + 288) = v14;
	v16 = v14 + *(float*)(a1 + 292);
	*(float*)(a1 + 208) = v15;
	*(float*)(a1 + 212) = v16;
	sub_14085D440(a1);
	if (*(char*)(a1 + 382) < 0)
	{
		v17 = *(_QWORD*)(a1 + 496);
		if (v17)
			*(float*)(a1 + 208) = *(float*)(v17 + 20) + *(float*)(a1 + 208);
	}
	result = (unsigned __int8)sub_140852D50(*(_QWORD*)(a1 + 160), &v22, *(_QWORD*)(a1 + 176));
	v19 = *(float*)&v22;
	if (*(float*)&v22 != *(float*)(a1 + 396) || *((float*)&v22 + 1) != *(float*)(a1 + 400))
	{
		*(_QWORD*)(a1 + 396) = v22;
		result = sub_140860560(a1, v19);
	}
	*(_BYTE*)(a1 + 380) |= 0x20u;
	return result;
}

