#include "../winhttp.h"

//----- (00000001408EAEF0) ----------------------------------------------------
__int64 __fastcall sub_1408EAEF0(__int64 a1, _DWORD* a2)
{
	int* v3; // r15
	_DWORD* v4; // rbp
	_DWORD* v5; // r14
	_DWORD* v6; // r12
	_DWORD* v7; // rsi
	unsigned int v9; // edx
	__int64 result; // rax
	_DWORD* v11; // rdi
	__int64 v12; // rcx
	bool v13; // zf
	int v14; // edx
	int v15; // ecx
	__int64 v16; // rax
	unsigned int v17; // eax
	__int64 v18; // rax
	__int64 v19; // rcx
	int v20; // edx
	unsigned int v21; // [rsp+50h] [rbp-58h] BYREF
	__int64 v22; // [rsp+58h] [rbp-50h]
	int v23[3]; // [rsp+60h] [rbp-48h] BYREF
	char v24; // [rsp+6Dh] [rbp-3Bh]
	__int64 v25; // [rsp+70h] [rbp-38h] BYREF
	__int64 v26; // [rsp+78h] [rbp-30h]
	__int64 v27; // [rsp+B0h] [rbp+8h]

	v3 = (int*)(a1 + 52);
	v4 = (_DWORD*)(a1 + 48);
	v5 = (_DWORD*)(a1 + 60);
	v6 = (_DWORD*)(a1 + 56);
	v7 = 0i64;
	v9 = *(_DWORD*)(a1 + 104);
	v21 = 0;
	v22 = 0i64;
	result = sub_14087FC20(
		a2,
		v9,
		(__int64)&v25,
		a1 + 64,
		(_DWORD*)(a1 + 56),
		(_DWORD*)(a1 + 60),
		(_DWORD*)(a1 + 48),
		(_DWORD*)(a1 + 52),
		(__int64)&v21,
		0i64);
	if ((_DWORD)result == 1)
	{
		v11 = (_DWORD*)v26;
		if (*(_WORD*)v26 == 0xFFFF)
		{
			LODWORD(v27) = *(_DWORD*)(v26 + 4);
			HIDWORD(v27) = *(_DWORD*)(v26 + 20) & 0x3FFFF | (*(unsigned __int16*)(v26 + 2) << 25) & 0x1F000000 | 0x400000;
			v12 = *(_QWORD*)(a1 + 24);
			*(_QWORD*)(v12 + 192) = v27;
			sub_14085EF10(v12);
			if (v21)
				sub_140880FB0(a1, &v21);
			*(_DWORD*)(a1 + 40) = v11[6];
			if (v11 != (_DWORD*)-24i64)
				v7 = v11 + 7;
			v13 = *v6 == 0;
			*(_QWORD*)(a1 + 328) = *(_QWORD*)v7;
			*(_QWORD*)(a1 + 336) = *((_QWORD*)v7 + 1);
			*(_QWORD*)(a1 + 344) = *((_QWORD*)v7 + 2);
			*(_QWORD*)(a1 + 352) = *((_QWORD*)v7 + 3);
			*(_DWORD*)(a1 + 360) = v7[8];
			*(_WORD*)(a1 + 364) = *((_WORD*)v7 + 18);
			*(_DWORD*)(a1 + 312) = v11[5];
			*(_DWORD*)(a1 + 368) = v11[1];
			if (v13 && !*v5)
				*v5 = *(_DWORD*)(a1 + 40) - 1;
			if (*(_WORD*)(a1 + 84) == 1)
			{
				*(_DWORD*)(a1 + 116) = *v3 + *(_DWORD*)(a1 + 344);
				*(_DWORD*)(a1 + 120) = *v3 + *v4;
			}
			else
			{
				v14 = *(_DWORD*)(a1 + 340);
				v15 = *v3;
				*(_DWORD*)(a1 + 116) = *(_DWORD*)(a1 + 328) + *v3 + v14;
				*(_DWORD*)(a1 + 120) = v14 + v15 + *(_DWORD*)(a1 + 332);
			}
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88), v23);
			sub_140880900(a1, *(_WORD*)(a1 + 84) != 1, (__int64)v23);
			v16 = *(_QWORD*)(a1 + 24);
			*(float*)v23 = (float)(int)v11[2] * 0.001;
			v24 = (int)*(float*)(v16 + 388);
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 88) + 40i64))(*(_QWORD*)(a1 + 88), v23);
			v17 = *(_DWORD*)(a1 + 340);
			if (!v17 || (v18 = sub_1408819F0(dword_140C10F28, v17), (*(_QWORD*)(a1 + 376) = v18) != 0i64))
			{
				v19 = *(_QWORD*)(a1 + 88);
				v20 = *(unsigned __int16*)(a1 + 348);
				*(_DWORD*)(a1 + 136) = 1;
				return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v19 + 48i64))(v19, (unsigned int)(2 * v20));
			}
			else
			{
				return 52i64;
			}
		}
		else
		{
			return 7i64;
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

