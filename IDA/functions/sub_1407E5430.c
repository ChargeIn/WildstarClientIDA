//----- (00000001407E5430) ----------------------------------------------------
__int64 __fastcall sub_1407E5430(unsigned __int64 a1)
{
	_DWORD* v2; // r15
	_DWORD* v3; // r12
	void** v4; // rsi
	unsigned int v5; // r14d
	int* v6; // rax
	__int64 v8; // rdx
	int* v9; // rcx
	__int64 v10; // rax
	__int128 v11; // xmm1
	_DWORD* v12; // rax
	void** v13; // rcx
	_DWORD* v14; // rax
	__int64 v15; // rdi
	int v16; // ebx
	int v17; // ebx
	int v18; // ebx
	int v19; // ebx
	_BYTE* v20; // rdx
	char v21; // cl
	_BYTE* v22; // r8
	char v23; // al
	volatile signed __int32* v24; // rax
	volatile signed __int32* v25; // rcx
	__int128 v26; // [rsp+30h] [rbp-38h] BYREF

	v26 = a1;
	if (*(_QWORD*)(a1 + 328) || *(_QWORD*)(a1 + 320))
	{
		v5 = 1;
		v6 = (int*)sub_1407E2BB0(1ui64, 0x98ui64);
		v4 = (void**)v6;
		if (!v6)
			return v5;
		v8 = *(_QWORD*)(a1 + 240);
		v9 = v6;
		if ((((unsigned __int8)v6 | (unsigned __int8)v8) & 0xF) != 0)
		{
			sub_1407DB590(v6, (int*)v8, 0x98ui64);
		}
		else
		{
			v10 = 1i64;
			do
			{
				*(_OWORD*)v9 = *(_OWORD*)v8;
				*((_OWORD*)v9 + 1) = *(_OWORD*)(v8 + 16);
				*((_OWORD*)v9 + 2) = *(_OWORD*)(v8 + 32);
				*((_OWORD*)v9 + 3) = *(_OWORD*)(v8 + 48);
				*((_OWORD*)v9 + 4) = *(_OWORD*)(v8 + 64);
				*((_OWORD*)v9 + 5) = *(_OWORD*)(v8 + 80);
				*((_OWORD*)v9 + 6) = *(_OWORD*)(v8 + 96);
				v11 = *(_OWORD*)(v8 + 112);
				v9 += 32;
				v8 += 128i64;
				*((_OWORD*)v9 - 1) = v11;
				--v10;
			} while (v10);
			*(_OWORD*)v9 = *(_OWORD*)v8;
			*((_QWORD*)v9 + 2) = *(_QWORD*)(v8 + 16);
		}
		v12 = sub_1407E2C30(4ui64);
		v3 = v12;
		if (!v12)
		{
			v13 = v4;
		LABEL_13:
			sub_1407E14C0(v13);
			return v5;
		}
		*v12 = 0;
		if (!*(_QWORD*)(a1 + 328))
		{
			v2 = 0i64;
			*v4 = off_140C0F6F0;
			v4[1] = off_140C0F6F8;
			v4[2] = off_140C0F700;
			v4[11] = off_140C0F748;
			v4[12] = off_140C0F750;
		LABEL_30:
			*v3 = 1;
			if (v2)
				*v2 = 1;
			goto LABEL_32;
		}
		v14 = sub_1407E2C30(4ui64);
		v2 = v14;
		if (!v14)
		{
		LABEL_18:
			sub_1407E14C0(v4);
			v13 = (void**)v3;
			goto LABEL_13;
		}
		*v14 = 0;
		v15 = *(_QWORD*)(a1 + 328);
		v16 = sub_1407E1FD8(&v26, 1, v15, 0xEu, v4);
		v17 = sub_1407E1FD8(&v26, 1, v15, 0xFu, v4 + 1) | v16;
		v18 = sub_1407E1FD8(&v26, 1, v15, 0x10u, v4 + 2) | v17;
		v19 = sub_1407E1FD8(&v26, 2, v15, 0xEu, v4 + 11) | v18;
		if (v19 | (unsigned int)sub_1407E1FD8(&v26, 2, v15, 0xFu, v4 + 12))
		{
			sub_1407E53C4((__int64)v4);
			v5 = -1;
			goto LABEL_18;
		}
		v20 = v4[2];
		while (1)
		{
			if (!*v20)
				goto LABEL_30;
			v21 = *v20;
			if ((unsigned __int8)(*v20 - 48) <= 9u)
				break;
			if (v21 == 59)
			{
				v22 = v20;
				do
				{
					v23 = v22[1];
					*v22++ = v23;
				} while (v23);
			}
			else
			{
			LABEL_22:
				++v20;
			}
		}
		*v20 = v21 - 48;
		goto LABEL_22;
	}
	v2 = 0i64;
	v3 = 0i64;
	v4 = &off_140C0F6F0;
LABEL_32:
	v24 = *(volatile signed __int32**)(a1 + 224);
	if (v24)
		_InterlockedDecrement(v24);
	v25 = *(volatile signed __int32**)(a1 + 216);
	if (v25)
	{
		if (!_InterlockedDecrement(v25))
		{
			sub_1407E14C0(*(LPVOID*)(a1 + 216));
			sub_1407E14C0(*(LPVOID*)(a1 + 240));
		}
	}
	*(_QWORD*)(a1 + 224) = v2;
	*(_QWORD*)(a1 + 216) = v3;
	*(_QWORD*)(a1 + 240) = v4;
	return 0i64;
}
// 140C0F6F0: using guessed type void *off_140C0F6F0;
// 140C0F6F8: using guessed type void *off_140C0F6F8;
// 140C0F700: using guessed type void *off_140C0F700;
// 140C0F748: using guessed type void *off_140C0F748;
// 140C0F750: using guessed type void *off_140C0F750;

