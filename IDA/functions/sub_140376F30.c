#include "../winhttp.h"

//----- (0000000140376F30) ----------------------------------------------------
__int64 __fastcall sub_140376F30(__int64 a1)
{
	__int64 result; // rax
	double v3; // xmm0_8
	__int64 v4; // rcx
	unsigned int v5; // esi
	int v6; // eax
	unsigned int v7; // edi
	__int64 v8; // rdi
	_OWORD v9[4]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v10; // [rsp+80h] [rbp+8h] BYREF

	result = (*(__int64(__fastcall**)(_QWORD, _OWORD*))(**(_QWORD**)(a1 + 24) + 176i64))(*(_QWORD*)(a1 + 24), v9);
	if ((int)result >= 0)
	{
		sub_1403772E0(a1, v9);
		v3 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 296i64))(*(_QWORD*)(a1 + 24));
		if (*(float*)&v3 != *(float*)(a1 + 128))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 136i64))(*(_QWORD*)(a1 + 48));
			*(_DWORD*)(a1 + 128) = LODWORD(v3);
		}
		sub_140378B40(a1);
		sub_140378CC0(a1);
		v4 = *(_QWORD*)(a1 + 24);
		v5 = 0;
		v10 = 0i64;
		v6 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v4 + 400i64))(v4, &v10);
		if (v6 < 0)
			goto LABEL_25;
		sub_1403773F0(a1, v10);
		v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 200i64))(*(_QWORD*)(a1 + 24));
		(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)a1 + 280i64))(a1, (v7 & 0x20) == 0);
		(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)a1 + 296i64))(a1, (v7 & 0x40) == 0);
		if ((~(v7 >> 7) & 1) != 0)
			*(_DWORD*)(a1 + 360) &= ~0x80u;
		else
			*(_DWORD*)(a1 + 360) |= 0x80u;
		if ((~(v7 >> 8) & 1) != 0)
			*(_DWORD*)(a1 + 360) &= ~0x100u;
		else
			*(_DWORD*)(a1 + 360) |= 0x100u;
		if ((v7 & 0x200) != 0)
			*(_DWORD*)(a1 + 360) |= 0x200u;
		else
			*(_DWORD*)(a1 + 360) &= ~0x200u;
		if ((v7 & 0x400) != 0)
			*(_DWORD*)(a1 + 360) |= 0x400u;
		else
			*(_DWORD*)(a1 + 360) &= ~0x400u;
		if ((v7 & 2) != 0)
			*(_DWORD*)(a1 + 360) |= 2u;
		else
			*(_DWORD*)(a1 + 360) &= ~2u;
		v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 56i64))(*(_QWORD*)(a1 + 48));
		if (v8)
		{
			if (((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 200i64))(*(_QWORD*)(a1 + 24)) & 0x800) != 0)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 736i64))(v8);
			else
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 744i64))(v8);
		}
		v6 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 32i64))(*(_QWORD*)(a1 + 48));
		if (v6 < 0)
			LABEL_25:
		v5 = v6;
		if (v10)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		return v5;
	}
	return result;
}
// 140376F30: using guessed type _OWORD var_58[4];

