//----- (00000001403D1CE0) ----------------------------------------------------
__int64 __fastcall sub_1403D1CE0(_QWORD* a1, unsigned __int8* a2)
{
	unsigned __int64 i; // r8
	unsigned __int8 v5; // r9
	unsigned __int64 j; // rdi
	__int64 v7; // r8
	__int64 v8; // rcx
	int v9; // edx
	int* v10; // rax
	__int64 v12; // [rsp+50h] [rbp+8h] BYREF
	int* v13; // [rsp+58h] [rbp+10h] BYREF
	int* v14; // [rsp+60h] [rbp+18h] BYREF

	for (i = 0i64; i < *a2; ++i)
	{
		v5 = *(_BYTE*)(i + *((_QWORD*)a2 + 1));
		if (v5 < 4u)
			a1[2 * v5 + 3535] = 0i64;
	}
	a1[3543] = 0i64;
	sub_140008410((__int64)(a1 + 3544));
	for (j = 0i64; j < *a2; v10[9] = *(unsigned __int8*)(*((_QWORD*)a2 + 2) + j - 1))
	{
		v7 = a1[3545];
		v8 = *(_QWORD*)(v7 + 8);
		v9 = *(unsigned __int8*)(j + *((_QWORD*)a2 + 1));
		v10 = (int*)v7;
		while (v8)
		{
			if (*(_DWORD*)(v8 + 32) < v9)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v10 = (int*)v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v10 == (int*)v7 || v9 < v10[8])
		{
			v12 = *(unsigned __int8*)(j + *((_QWORD*)a2 + 1));
			v13 = v10;
			sub_1403D3E70((__int64)(a1 + 3544), &v14, (__int64*)&v13, &v12);
			v10 = v14;
		}
		++j;
	}
	sub_1400EA3E0(a1[3688], "CharacterEldanAugmentationsReset", &unk_1409D10E3);
	return 0i64;
}

