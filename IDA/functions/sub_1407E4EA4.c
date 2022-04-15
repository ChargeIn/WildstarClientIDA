#include "../winhttp.h"

//----- (00000001407E4EA4) ----------------------------------------------------
__int64 __fastcall sub_1407E4EA4(unsigned __int64 a1)
{
	_DWORD* v2; // r15
	_DWORD* v3; // r12
	void** v4; // r14
	_DWORD* v6; // rax
	void** v7; // rcx
	_DWORD* v8; // rax
	__int64 v9; // rdi
	int v10; // ebx
	int v11; // ebx
	int v12; // ebx
	int v13; // ebx
	int v14; // ebx
	int v15; // ebx
	int v16; // ebx
	int v17; // ebx
	int v18; // ebx
	int v19; // ebx
	int v20; // ebx
	int v21; // ebx
	int v22; // ebx
	int v23; // ebx
	int v24; // ebx
	int v25; // ebx
	int v26; // ebx
	int v27; // ebx
	int v28; // ebx
	int v29; // ebx
	_BYTE* v30; // rdx
	char v31; // cl
	_BYTE* v32; // r8
	char v33; // al
	void** v34; // rdx
	void** v35; // rcx
	__int64 v36; // rax
	__int128 v37; // xmm1
	volatile signed __int32* v38; // rax
	volatile signed __int32* v39; // rcx
	__int128 v40; // [rsp+30h] [rbp-10h] BYREF

	v40 = a1;
	v2 = 0i64;
	if (*(_QWORD*)(a1 + 320) || *(_QWORD*)(a1 + 328))
	{
		v4 = (void**)sub_1407E2BB0(1ui64, 0x98ui64);
		if (!v4)
			return 1i64;
		v6 = sub_1407E2C30(4ui64);
		v3 = v6;
		if (!v6)
		{
			v7 = v4;
		LABEL_8:
			sub_1407E14C0(v7);
			return 1i64;
		}
		*v6 = 0;
		if (!*(_QWORD*)(a1 + 320))
		{
			v34 = &off_140C0F6F0;
			v35 = v4;
			if ((((unsigned __int8)v4 | (unsigned __int8)&off_140C0F6F0) & 0xF) != 0)
			{
				sub_1407DB590((int*)v4, (int*)&off_140C0F6F0, 0x98ui64);
			}
			else
			{
				v36 = 1i64;
				do
				{
					*(_OWORD*)v35 = *(_OWORD*)v34;
					*((_OWORD*)v35 + 1) = *((_OWORD*)v34 + 1);
					*((_OWORD*)v35 + 2) = *((_OWORD*)v34 + 2);
					*((_OWORD*)v35 + 3) = *((_OWORD*)v34 + 3);
					*((_OWORD*)v35 + 4) = *((_OWORD*)v34 + 4);
					*((_OWORD*)v35 + 5) = *((_OWORD*)v34 + 5);
					*((_OWORD*)v35 + 6) = *((_OWORD*)v34 + 6);
					v37 = *((_OWORD*)v34 + 7);
					v35 += 16;
					v34 += 16;
					*((_OWORD*)v35 - 1) = v37;
					--v36;
				} while (v36);
				*(_OWORD*)v35 = *(_OWORD*)v34;
				v35[2] = v34[2];
			}
		LABEL_29:
			*v4 = **(void***)(a1 + 240);
			v4[1] = *(void**)(*(_QWORD*)(a1 + 240) + 8i64);
			v4[2] = *(void**)(*(_QWORD*)(a1 + 240) + 16i64);
			v4[11] = *(void**)(*(_QWORD*)(a1 + 240) + 88i64);
			v4[12] = *(void**)(*(_QWORD*)(a1 + 240) + 96i64);
			*v3 = 1;
			if (v2)
				*v2 = 1;
			goto LABEL_31;
		}
		v8 = sub_1407E2C30(4ui64);
		v2 = v8;
		if (!v8)
		{
			sub_1407E14C0(v4);
			v7 = (void**)v3;
			goto LABEL_8;
		}
		*v8 = 0;
		v9 = *(_QWORD*)(a1 + 320);
		v10 = sub_1407E1FD8(&v40, 1, v9, 0x15u, v4 + 3);
		v11 = sub_1407E1FD8(&v40, 1, v9, 0x14u, v4 + 4) | v10;
		v12 = sub_1407E1FD8(&v40, 1, v9, 0x16u, v4 + 5) | v11;
		v13 = sub_1407E1FD8(&v40, 1, v9, 0x17u, v4 + 6) | v12;
		v14 = sub_1407E1FD8(&v40, 1, v9, 0x18u, v4 + 7) | v13;
		v15 = sub_1407E1FD8(&v40, 1, v9, 0x50u, v4 + 8) | v14;
		v16 = sub_1407E1FD8(&v40, 1, v9, 0x51u, v4 + 9) | v15;
		v17 = sub_1407E1FD8(&v40, 0, v9, 0x1Au, v4 + 10) | v16;
		v18 = sub_1407E1FD8(&v40, 0, v9, 0x19u, (void**)((char*)v4 + 81)) | v17;
		v19 = sub_1407E1FD8(&v40, 0, v9, 0x54u, (void**)((char*)v4 + 82)) | v18;
		v20 = sub_1407E1FD8(&v40, 0, v9, 0x55u, (void**)((char*)v4 + 83)) | v19;
		v21 = sub_1407E1FD8(&v40, 0, v9, 0x56u, (void**)((char*)v4 + 84)) | v20;
		v22 = sub_1407E1FD8(&v40, 0, v9, 0x57u, (void**)((char*)v4 + 85)) | v21;
		v23 = sub_1407E1FD8(&v40, 0, v9, 0x52u, (void**)((char*)v4 + 86)) | v22;
		v24 = sub_1407E1FD8(&v40, 0, v9, 0x53u, (void**)((char*)v4 + 87)) | v23;
		v25 = sub_1407E1FD8(&v40, 2, v9, 0x15u, v4 + 13) | v24;
		v26 = sub_1407E1FD8(&v40, 2, v9, 0x14u, v4 + 14) | v25;
		v27 = sub_1407E1FD8(&v40, 2, v9, 0x16u, v4 + 15) | v26;
		v28 = sub_1407E1FD8(&v40, 2, v9, 0x17u, v4 + 16) | v27;
		v29 = sub_1407E1FD8(&v40, 2, v9, 0x50u, v4 + 17) | v28;
		if (v29 | (unsigned int)sub_1407E1FD8(&v40, 2, v9, 0x51u, v4 + 18))
		{
			sub_1407E4D98(v4);
			sub_1407E14C0(v4);
			sub_1407E14C0(v3);
			v7 = (void**)v2;
			goto LABEL_8;
		}
		v30 = v4[7];
		while (1)
		{
			if (!*v30)
				goto LABEL_29;
			v31 = *v30;
			if ((unsigned __int8)(*v30 - 48) <= 9u)
				break;
			if (v31 == 59)
			{
				v32 = v30;
				do
				{
					v33 = v32[1];
					*v32++ = v33;
				} while (v33);
			}
			else
			{
			LABEL_17:
				++v30;
			}
		}
		*v30 = v31 - 48;
		goto LABEL_17;
	}
	v3 = 0i64;
	v4 = &off_140C0F6F0;
LABEL_31:
	v38 = *(volatile signed __int32**)(a1 + 232);
	if (v38)
		_InterlockedDecrement(v38);
	v39 = *(volatile signed __int32**)(a1 + 216);
	if (v39)
	{
		if (!_InterlockedDecrement(v39))
		{
			sub_1407E14C0(*(LPVOID*)(a1 + 240));
			sub_1407E14C0(*(LPVOID*)(a1 + 216));
		}
	}
	*(_QWORD*)(a1 + 232) = v2;
	*(_QWORD*)(a1 + 216) = v3;
	*(_QWORD*)(a1 + 240) = v4;
	return 0i64;
}
// 140C0F6F0: using guessed type void *off_140C0F6F0;

