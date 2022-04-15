//----- (00000001408EA170) ----------------------------------------------------
__int64 __fastcall sub_1408EA170(__int64 a1)
{
	__int64 v1; // rax
	_DWORD* v3; // rsi
	unsigned int v4; // ebp
	__int64 result; // rax
	_DWORD* v6; // r13
	_DWORD* v7; // r12
	_DWORD* v8; // r14
	unsigned int* v9; // r15
	_DWORD* v10; // rdi
	__int64 v11; // rcx
	__int64 v12; // rdx
	_DWORD* v13; // rcx
	bool v14; // zf
	__int64 v15; // rax
	unsigned int v16; // edi
	int v17; // edx
	__int64 v18; // rax
	int v19; // [rsp+50h] [rbp-48h] BYREF
	__int64 v20; // [rsp+58h] [rbp-40h]
	char v21[8]; // [rsp+60h] [rbp-38h] BYREF
	__int64 v22; // [rsp+68h] [rbp-30h]
	__int64 v23; // [rsp+A0h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 24);
	v3 = *(_DWORD**)(v1 + 416);
	v4 = *(_DWORD*)(v1 + 424);
	if (!v3)
		return 2i64;
	v6 = (_DWORD*)(a1 + 48);
	v7 = (_DWORD*)(a1 + 56);
	v19 = 0;
	v20 = 0i64;
	v8 = (_DWORD*)(a1 + 60);
	v9 = (unsigned int*)(a1 + 52);
	result = sub_14087FC20(
		v3,
		v4,
		(__int64)v21,
		a1 + 64,
		(_DWORD*)(a1 + 56),
		(_DWORD*)(a1 + 60),
		(_DWORD*)(a1 + 48),
		(_DWORD*)(a1 + 52),
		(__int64)&v19,
		0i64);
	if ((_DWORD)result == 1)
	{
		v10 = (_DWORD*)v22;
		if (*(_WORD*)v22 == 0xFFFF)
		{
			LODWORD(v23) = *(_DWORD*)(v22 + 4);
			HIDWORD(v23) = *(_DWORD*)(v22 + 20) & 0x3FFFF | (*(unsigned __int16*)(v22 + 2) << 25) & 0x1F000000 | 0x400000;
			v11 = *(_QWORD*)(a1 + 24);
			*(_QWORD*)(v11 + 192) = v23;
			sub_14085EF10(v11);
			if (v19)
				*(_QWORD*)(a1 + 16) = v20;
			v12 = *v9;
			v13 = v10 + 6;
			*(_QWORD*)(a1 + 360) = (char*)v3 + v12;
			*(_DWORD*)(a1 + 40) = v10[6];
			if (v10 != (_DWORD*)-24i64)
				v13 = v10 + 7;
			v14 = *v8 == 0;
			*(_QWORD*)(a1 + 288) = *(_QWORD*)v13;
			*(_QWORD*)(a1 + 296) = *((_QWORD*)v13 + 1);
			*(_QWORD*)(a1 + 304) = *((_QWORD*)v13 + 2);
			*(_QWORD*)(a1 + 312) = *((_QWORD*)v13 + 3);
			*(_DWORD*)(a1 + 320) = v13[8];
			*(_WORD*)(a1 + 324) = *((_WORD*)v13 + 18);
			*(_DWORD*)(a1 + 328) = v10[1];
			*(_DWORD*)(a1 + 272) = v10[5];
			if (v14)
				*v8 = *(_DWORD*)(a1 + 40) - 1;
			if (*v8 >= *v7 && *v8 < *(_DWORD*)(a1 + 40) && v4 == (_DWORD)v12 + *v6)
			{
				v15 = *(_QWORD*)(a1 + 24);
				*(_QWORD*)(a1 + 352) = (char*)v3 + v12;
				*(_DWORD*)(a1 + 44) = 0;
				*(_WORD*)(a1 + 84) = *(_WORD*)(v15 + 376);
				v16 = sub_1408E9D70(a1);
				if (v16 == 1)
				{
					LOWORD(v17) = 0;
					if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 383i64) & 2) != 0)
					{
						v16 = sub_1408EA070(a1);
						v18 = *(_QWORD*)(a1 + 24);
						if ((*(_BYTE*)(v18 + 383) & 2) != 0)
							v17 = 0;
						else
							v17 = *(_DWORD*)(v18 + 372);
						*(_BYTE*)(v18 + 383) &= 0xF1u;
						*(_DWORD*)(v18 + 372) = 0;
						*(_DWORD*)(a1 + 44) += v17;
					}
					sub_1408EA5B0(a1, v17);
				}
				return v16;
			}
			else
			{
				return 2i64;
			}
		}
		else
		{
			return 7i64;
		}
	}
	return result;
}
// 1408EA170: using guessed type char var_38[8];

