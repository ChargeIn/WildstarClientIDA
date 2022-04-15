#include "../winhttp.h"

//----- (000000014089B200) ----------------------------------------------------
__int64 __fastcall sub_14089B200(__int64 a1, char a2)
{
	_QWORD* v2; // rax
	_QWORD* v4; // rbp
	__int64* v5; // rdi
	_QWORD* v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64* v10; // rax
	__int64 v11; // rsi
	__int64(__fastcall * **v12)(_QWORD, _QWORD); // rcx
	__int64 v13; // rcx
	int v14; // r14d
	__int64 v15; // rcx
	__int128 v17; // rax
	__int64 v18; // rcx
	_QWORD* v19; // [rsp+20h] [rbp-38h]
	__int64 v20; // [rsp+30h] [rbp-28h]
	__int128 v21; // [rsp+30h] [rbp-28h]
	__int64* v22; // [rsp+38h] [rbp-20h]

	v2 = *(_QWORD**)(a1 + 160);
	v4 = 0i64;
	v5 = 0i64;
	if (v2)
	{
		while (1)
		{
			v6 = (_QWORD*)*v2;
			v19 = (_QWORD*)*v2;
			if (v2 == *(_QWORD**)(a1 + 160))
				*(_QWORD*)(a1 + 160) = v6;
			else
				MEMORY[0] = *v2;
			if (v2 == *(_QWORD**)(a1 + 168))
				*(_QWORD*)(a1 + 168) = 0i64;
			*v2 = 0i64;
			if (v5)
				*v5 = (__int64)v2;
			else
				v4 = v2;
			v5 = v2;
			if (!v6)
				break;
			v2 = v19;
		}
	}
	*(_BYTE*)(a1 + 192) &= ~1u;
	if (a2)
		v7 = 0;
	else
		v7 = sub_140899EB0((_QWORD*)a1);
	v8 = sub_140898DF0(a1, v7);
	if (v8 && (unsigned int)sub_1408999C0((_QWORD*)a1, v8) == 1)
	{
		v9 = (__int64)v4;
		v10 = 0i64;
		if (v4)
		{
			while (1)
			{
				v11 = *(_QWORD*)v9;
				v22 = v10;
				v20 = *(_QWORD*)v9;
				if ((_QWORD*)v9 == v4)
					v4 = *(_QWORD**)v9;
				else
					*v10 = v11;
				v12 = *(__int64(__fastcall****)(_QWORD, _QWORD))(v9 + 8);
				if ((__int64*)v9 == v5)
					v5 = v10;
				*(_BYTE*)(v9 + 72) &= 0xFCu;
				sub_14088B850(v12);
				v13 = *(_QWORD*)(v9 + 8);
				v14 = dword_140C10F20;
				*(_QWORD*)(v9 + 8) = 0i64;
				if (v13)
					sub_14088B630(v13);
				v15 = *(_QWORD*)(v9 + 8);
				if (v15)
				{
					sub_14088B630(v15);
					*(_QWORD*)(v9 + 8) = 0i64;
				}
				sub_140881720(v14, v9);
				if (!v11)
					break;
				v10 = v22;
				v9 = v20;
			}
			return 1i64;
		}
		else
		{
			return 1i64;
		}
	}
	else
	{
		v17 = (unsigned __int64)v4;
		if (v4)
		{
			while (1)
			{
				v18 = *(_QWORD*)v17;
				*((_QWORD*)&v21 + 1) = *((_QWORD*)&v17 + 1);
				*(_QWORD*)&v21 = *(_QWORD*)v17;
				if ((_QWORD*)v17 == v4)
					v4 = *(_QWORD**)v17;
				else
					**((_QWORD**)&v17 + 1) = v18;
				*(_QWORD*)v17 = 0i64;
				if ((__int64*)v17 == v5)
					v5 = (__int64*)*((_QWORD*)&v17 + 1);
				*((_QWORD*)&v17 + 1) = *(_QWORD*)(a1 + 168);
				if (*((_QWORD*)&v17 + 1))
					**((_QWORD**)&v17 + 1) = v17;
				else
					*(_QWORD*)(a1 + 160) = v17;
				*(_QWORD*)(a1 + 168) = v17;
				if (!v18)
					break;
				v17 = v21;
			}
		}
		return 2i64;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

