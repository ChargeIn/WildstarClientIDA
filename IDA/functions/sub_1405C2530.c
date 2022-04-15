//----- (00000001405C2530) ----------------------------------------------------
__int64 __fastcall sub_1405C2530(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int* a7)
{
	__int64 result; // rax
	__int64 v9; // rax
	__int16* v10; // rax
	__int16* v11; // r8
	__int64 v12; // rax
	__int16* v13; // rax
	__int64 v14; // r8
	__int64 v15; // [rsp+40h] [rbp-18h] BYREF
	__int64(__fastcall * v16)(__int64, __int64, __int64, unsigned int); // [rsp+48h] [rbp-10h]

	*(_QWORD*)a2 = 0i64;
	*(_QWORD*)(a2 + 8) = 0i64;
	*(_QWORD*)(a2 + 16) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	*(_QWORD*)(a2 + 32) = 0i64;
	*(_QWORD*)(a2 + 40) = 0i64;
	*(_QWORD*)(a2 + 48) = 0i64;
	*(_QWORD*)(a2 + 56) = 0i64;
	*(_WORD*)(a2 + 64) = 0;
	if (a6)
	{
		if (a6 == 1)
		{
			v9 = sub_1403D90D0(qword_140C65898, *a7);
			if (v9)
			{
				v10 = *(__int16**)(v9 + 16);
				v11 = &word_140B7B704;
				if (v10)
					v11 = v10;
			}
			else
			{
				v12 = sub_1404835C0(qword_140C65918, a7[1]);
				if (!v12)
					goto LABEL_14;
				v11 = sub_14034BDD0(a1, *(_DWORD*)(v12 + 8));
			}
			sub_14001B2D0((_WORD*)a2, 33i64, (__int64)v11);
		}
	}
	else if (a4 >= a5)
	{
		v16 = 0i64;
		v15 = 0i64;
		sub_1403F82F0(qword_140C65898, 10, (__int64*)a7, (_WORD*)a2, 0x21u, &v15, 0i64);
	}
	else
	{
		v15 = a1;
		v16 = sub_1405C27E0;
		result = sub_1403F82F0(qword_140C65898, 10, (__int64*)a7, (_WORD*)a2, 0x21u, &v15, a5);
		if (!(_DWORD)result)
			return result;
	}
LABEL_14:
	if (!*(_WORD*)a2)
	{
		v13 = sub_14034BDD0(a1, 108);
		sub_14001B680((_WORD*)a2, 33i64, v14, (__int64)v13);
	}
	return 1i64;
}
// 1405C2655: variable 'a1' is possibly undefined
// 1405C268A: variable 'v14' is possibly undefined
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;

