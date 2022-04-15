//----- (000000014086DCF0) ----------------------------------------------------
__int64 __fastcall sub_14086DCF0(__int64 a1, __int64 a2, int a3)
{
	__int64 result; // rax
	unsigned int* v5; // rdx
	__int16 v6; // ax
	__int16 v7; // cx
	__int16 v8; // r8
	unsigned int* v9; // rdx
	int v10; // ebx
	unsigned int v11; // xmm6_4
	unsigned int v12; // xmm7_4
	unsigned int* v13; // rdx
	int v14; // xmm8_4
	__int16 v15; // si
	unsigned __int8 v16; // r14
	unsigned __int8 v17; // r15
	int v18; // eax
	char v19; // r12
	char v20; // r13
	char v21; // cl
	unsigned int v22; // edx
	unsigned int v23; // eax
	unsigned int* v24; // rcx
	unsigned int v25; // esi
	unsigned int v26; // edx
	unsigned int v27; // r8d
	unsigned int v28; // eax
	char v29; // [rsp+20h] [rbp-19h]
	unsigned int* v30; // [rsp+A8h] [rbp+6Fh] BYREF
	int v31; // [rsp+B0h] [rbp+77h] BYREF
	char v32; // [rsp+B8h] [rbp+7Fh]

	v31 = a3;
	v30 = (unsigned int*)(a2 + 4);
	result = sub_1408546E0((_BYTE*)a1, &v30, &v31, 0);
	if ((_DWORD)result == 1)
	{
		v5 = v30;
		v6 = *(_WORD*)v30;
		v30 = (unsigned int*)((char*)v30 + 2);
		v7 = *((_WORD*)v5 + 1);
		v30 = v5 + 1;
		v8 = *((_WORD*)v5 + 2);
		v9 = (unsigned int*)((char*)v5 + 6);
		v10 = 0;
		v30 = v9;
		if (v6)
		{
			*(_WORD*)(a1 + 480) = v6;
			*(_WORD*)(a1 + 482) = v7;
			*(_WORD*)(a1 + 484) = v8;
		}
		else
		{
			*(_DWORD*)(a1 + 480) = 0;
			*(_WORD*)(a1 + 484) = 0;
		}
		v11 = *v9;
		v30 = v9 + 1;
		v12 = v9[1];
		v30 = v9 + 2;
		v13 = v9 + 3;
		v14 = *(v13 - 1);
		v30 = v13;
		v15 = *(_WORD*)v13;
		v30 = (unsigned int*)((char*)v13 + 2);
		v13 = (unsigned int*)((char*)v13 + 3);
		v16 = *((_BYTE*)v13 - 1);
		v30 = v13;
		v17 = *(_BYTE*)v13;
		v30 = (unsigned int*)((char*)v13 + 1);
		v13 = (unsigned int*)((char*)v13 + 3);
		v18 = *((unsigned __int8*)v13 - 2);
		v30 = v13;
		v19 = *(_BYTE*)v13;
		v30 = (unsigned int*)((char*)v13 + 1);
		v13 = (unsigned int*)((char*)v13 + 2);
		v20 = *((_BYTE*)v13 - 1);
		v30 = v13;
		v32 = *(_BYTE*)v13;
		v30 = (unsigned int*)((char*)v13 + 1);
		v21 = *((_BYTE*)v13 + 1);
		v30 = (unsigned int*)((char*)v13 + 2);
		v29 = v21;
		result = sub_14086D580(a1, v18);
		if ((_DWORD)result == 1)
		{
			*(_DWORD*)(a1 + 464) = v11;
			*(_DWORD*)(a1 + 468) = v12;
			*(_DWORD*)(a1 + 472) = v14;
			sub_14086C640(a1, v15);
			sub_14086DFA0(a1, v16);
			sub_14086D7F0(a1, v17);
			sub_14086D870(a1, v19 != 0);
			*(_BYTE*)(a1 + 479) &= ~0x20u;
			*(_BYTE*)(a1 + 479) |= 32 * (v20 != 0);
			sub_14086C740(a1, v32 != 0);
			sub_14086D500(a1, v29 != 0);
			result = sub_140869CC0(a1, &v30);
			if ((_DWORD)result == 1)
			{
				v22 = 1;
				v23 = *(unsigned __int16*)v30;
				v24 = (unsigned int*)((char*)v30 + 2);
				v30 = (unsigned int*)((char*)v30 + 2);
				v25 = v23;
				if (v23)
				{
					while (1)
					{
						v26 = *v24;
						v30 = v24 + 1;
						v27 = v24[1];
						v30 = v24 + 2;
						v28 = sub_14086C560(a1, v26, v27);
						v22 = v28;
						if (v28 == 15)
						{
							v22 = 1;
						}
						else if (v28 != 1)
						{
							return v22;
						}
						if (++v10 >= v25)
							break;
						v24 = v30;
					}
				}
				return v22;
			}
		}
	}
	return result;
}

