//----- (00000001400A6EC0) ----------------------------------------------------
__int64 __fastcall sub_1400A6EC0(_QWORD* a1, _QWORD* a2, __int64 a3)
{
	int v7; // r15d
	unsigned __int64 v8; // r14
	unsigned int v9; // ebp
	int* v10; // rax
	const __m128i* v11; // rbx
	unsigned __int8* v12; // rsi
	const __m128i* v13; // rbp
	char v14; // r14
	int v15; // eax
	int v16; // ecx
	int v17; // ecx
	int v18; // eax
	unsigned __int8* v19; // rbx
	int v20; // ecx
	__int16 v21; // ax
	__int16 v22; // ax
	const __m128i* v23[2]; // [rsp+20h] [rbp-1D8h] BYREF
	char v24[16]; // [rsp+30h] [rbp-1C8h] BYREF
	int v25; // [rsp+40h] [rbp-1B8h]
	__int64 v26; // [rsp+70h] [rbp-188h]
	__int16 v27; // [rsp+78h] [rbp-180h]
	char v28; // [rsp+7Ch] [rbp-17Ch]
	unsigned __int8* v29; // [rsp+88h] [rbp-170h]
	int v30; // [rsp+B0h] [rbp-148h] BYREF
	__int64 v31; // [rsp+B4h] [rbp-144h]

	if (!a3)
		return 2147500037i64;
	v30 = 3;
	v31 = 3i64;
	v7 = 0;
	sub_1403376A0((__int64)&v30, a1, v23);
	v8 = LODWORD(v23[0]);
	v9 = LODWORD(v23[0]) + 1;
	v10 = (int*)sub_1403374E0(a2, (unsigned int)(LODWORD(v23[0]) + 1));
	v11 = (const __m128i*)v10;
	if (!v10)
	{
		v23[0] = (const __m128i*)0x141D0CF90i64;
		sub_1401A3130(11, 0, v23, v9);
		return 2147500037i64;
	}
	if ((int)sub_140337250((__int64)a1, v10, v8) < 0)
		return 2147500037i64;
	v12 = v29;
	v13 = v23[0];
	v11->m128i_i8[v8] = 0;
	v14 = v28;
	*(_QWORD*)(a3 + 32) = v11;
	*(_QWORD*)(a3 + 8) = 0i64;
	*(_DWORD*)(a3 + 24) = 0;
	*(_WORD*)(a3 + 20) = 0;
	*(_QWORD*)(a3 + 64) = 0i64;
	v25 = 0;
	while (1)
	{
		if (v7 == 5)
		{
			v16 = 5;
		}
		else
		{
			v15 = sub_1403377F0((__int64)v24, v11, v23);
			v12 = v29;
			v14 = v28;
			v7 = v25;
			v13 = v23[0];
			v16 = v15;
		}
		if (!v16)
		{
			v22 = v27;
			*(_QWORD*)(a3 + 40) = v13;
			*(_WORD*)(a3 + 18) = v22;
			*(_QWORD*)(a3 + 56) = v26;
			goto LABEL_22;
		}
		v17 = v16 - 1;
		if (v17)
			break;
		if (v14 == 108)
		{
			v11 = v13;
			*(_WORD*)(a3 + 16) = sub_1407DF3E4(v12);
		}
		else
		{
			if (v14 != 115)
				goto LABEL_22;
			v18 = sub_1407DF3E4(v12);
			*(_QWORD*)(a3 + 8) = v12;
			v19 = v12;
			*(_DWORD*)a3 = v18;
			if ((unsigned int)sub_1407DE874((char)*v12))
			{
				do
					v20 = (char)*++v19;
				while ((unsigned int)sub_1407DE874(v20));
			}
			if (*v19 == 82)
				*(_DWORD*)(a3 + 24) = 1;
			if ((unsigned int)sub_1407DE874((char)v19[1]))
			{
				v21 = sub_1407DF3E4(v19 + 1);
				v11 = v13;
				*(_WORD*)(a3 + 20) = v21;
			}
			else
			{
			LABEL_22:
				v11 = v13;
			}
		}
	}
	if (v17 == 1)
	{
		*(_QWORD*)(a3 + 48) = v13;
		return 0i64;
	}
	else
	{
		v23[0] = (const __m128i*)0x141D0CF20i64;
		sub_1401A3130(11, 0, v23);
		return 2147500037i64;
	}
}
// 1400A6EC0: using guessed type char var_1C8[16];

