//----- (00000001403376A0) ----------------------------------------------------
__int64 __fastcall sub_1403376A0(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64* v3; // rbx
	__int8* v4; // rdi
	__int64 v5; // rsi
	int v6; // ebp
	__int64 v7; // rbx
	int v8; // r12d
	int v9; // r13d
	int v10; // r15d
	const __m128i* v11; // r14
	__m128i* v12; // rdx
	__int64 v13; // rcx
	__int8 v14; // al
	int v15; // eax
	int v16; // ecx
	int v17; // ecx
	char v19[16]; // [rsp+20h] [rbp-B8h] BYREF
	int v20; // [rsp+30h] [rbp-A8h]
	char v21; // [rsp+6Ch] [rbp-6Ch]
	unsigned __int8* v22; // [rsp+78h] [rbp-60h]
	const __m128i* v23; // [rsp+E0h] [rbp+8h] BYREF
	_DWORD* v24; // [rsp+F0h] [rbp+18h]

	v24 = a3;
	v3 = (__int64*)a2[6];
	v4 = (__int8*)a2[3];
	v5 = a2[2];
	v6 = 0;
	if (v3)
		v7 = *v3;
	else
		v7 = 0i64;
	if (a2[4])
		++v4;
	v8 = 0;
	v9 = 0;
	v10 = 0;
	v20 = 0;
	v11 = (const __m128i*)(a1 + 12);
	while (1)
	{
		do
		{
			v12 = (__m128i*)v11;
			v13 = 256i64;
			if (v5)
				goto LABEL_10;
			if (!v7)
				return 2147942438i64;
			v4 = *(__int8**)(v7 + 16);
			v5 = v7;
			do
			{
			LABEL_10:
				if (v4 == *(__int8**)(v5 + 32))
				{
					v7 = *(_QWORD*)(v7 + 56);
					if (!v7)
						return 2147942438i64;
					v4 = *(__int8**)(v7 + 16);
					v5 = v7;
				}
				else
				{
					v14 = *v4;
					++v6;
					--v13;
					++v4;
					v12->m128i_i8[0] = v14;
					if (v14 == 10)
						break;
					v12 = (__m128i*)((char*)v12 + 1);
				}
			} while (v13);
			v11->m128i_i8[256 - v13] = 0;
			if (v10 == 5)
			{
				v16 = 5;
			}
			else
			{
				v15 = sub_1403377F0((__int64)v19, v11, &v23);
				v10 = v20;
				v16 = v15;
			}
		} while (!v16);
		v17 = v16 - 1;
		if (v17)
			break;
		if (v21 == 108)
		{
			v8 = 1;
			v9 = sub_1407DF3E4(v22);
		}
	}
	if (v17 != 1 || !v8)
		return 2147500037i64;
	*v24 = v9 + v6;
	return 0i64;
}
// 1403376A0: using guessed type char var_B8[16];

