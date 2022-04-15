//----- (0000000140899A70) ----------------------------------------------------
void __fastcall sub_140899A70(__int64 a1, __int64 a2, unsigned int a3, __int64* a4)
{
	__int64 v4; // rax
	signed __int64 v6; // rbp
	__int64 v9; // rbx
	signed __int64 v10; // r15
	_QWORD* v11; // rdi
	signed __int64 v12; // rcx
	char v13; // dl
	char v14; // cl
	__int64 v15; // rax
	__int64 v16; // rcx
	int v17; // edi
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rax
	signed __int64 v21; // rax
	signed __int64 v22; // rax
	_BYTE* v23; // r10
	char v24; // al
	__int128 v25; // [rsp+20h] [rbp-58h] BYREF
	__int64 v26; // [rsp+30h] [rbp-48h] BYREF
	__int64 v27; // [rsp+38h] [rbp-40h]
	__int128 v28; // [rsp+40h] [rbp-38h]

	v4 = *(_QWORD*)(a1 + 112);
	*a4 -= v4;
	++* (_DWORD*)(a1 + 80);
	v6 = a2 - v4;
	if ((*(_BYTE*)(a1 + 98) & 2) != 0 && *(_DWORD*)(a1 + 92) != -1)
		a3 = *(_DWORD*)(a1 + 92);
	v9 = *(_QWORD*)(a1 + 160);
	v10 = v6 + a3;
	*(_QWORD*)(a1 + 184) = 0i64;
	v25 = (unsigned __int64)v9;
	v11 = 0i64;
	while (v9)
	{
		v12 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 112i64);
		if (v6 <= v12 && v10 > v12)
			sub_14089B550((_QWORD*)a1, &v25);
		v13 = *(_BYTE*)(v9 + 72);
		if ((v13 & 2) != 0
			|| (v14 = *(_BYTE*)(*(_QWORD*)(v9 + 8) + 98i64), (v14 & 3) != 0) && (v14 & 0x10) == 0
			|| (v13 & 1) != 0)
		{
			v19 = *a4;
			v20 = a4[1];
			v26 = *a4;
			v27 = v20;
			if ((v13 & 1) != 0)
			{
				v21 = *(_QWORD*)(v9 + 32);
				if (v6 <= v21 && v10 > v21)
				{
					sub_14088B940(*(_QWORD*)(v9 + 8), (int*)(v9 + 40));
					*(_BYTE*)(v9 + 72) &= ~1u;
					v19 = v26;
				}
			}
			if ((*(_BYTE*)(v9 + 72) & 2) != 0)
			{
				v22 = *(_QWORD*)(v9 + 56);
				if (v10 > v22 && v6 <= v22)
				{
					sub_14088BB90(*(_QWORD*)(v9 + 8), (int*)(v9 + 64), v22 - v6);
					*(_BYTE*)(v9 + 72) &= ~2u;
					v19 = v26;
				}
			}
			v23 = *(_BYTE**)(v9 + 8);
			v24 = v23[98];
			if ((v24 & 3) != 0 && (v24 & 0x10) == 0)
			{
				if (*(_BYTE*)(v9 + 24))
				{
					if ((_BYTE)v27)
					{
						if (*(_QWORD*)(v9 + 16) < v19)
							v19 = *(_QWORD*)(v9 + 16);
						v26 = v19;
					}
					else
					{
						v26 = *(_QWORD*)(v9 + 16);
						LOBYTE(v27) = 1;
					}
				}
				(*(void(__fastcall**)(_BYTE*, signed __int64, _QWORD, __int64*))(*(_QWORD*)v23 + 80i64))(v23, v6, a3, &v26);
			}
		}
		else if (v9 != *(_QWORD*)(a1 + 176))
		{
			v15 = *(_QWORD*)v9;
			*((_QWORD*)&v28 + 1) = v11;
			*(_QWORD*)&v28 = v15;
			if (v9 == *(_QWORD*)(a1 + 160))
				*(_QWORD*)(a1 + 160) = v15;
			else
				*v11 = v15;
			if (v9 == *(_QWORD*)(a1 + 168))
				*(_QWORD*)(a1 + 168) = v11;
			v16 = *(_QWORD*)(v9 + 8);
			v17 = dword_140C10F20;
			v25 = v28;
			*(_QWORD*)(v9 + 8) = 0i64;
			if (v16)
				sub_14088B630(v16);
			v18 = *(_QWORD*)(v9 + 8);
			if (v18)
			{
				sub_14088B630(v18);
				*(_QWORD*)(v9 + 8) = 0i64;
			}
			sub_140881720(v17, v9);
			v11 = (_QWORD*)*((_QWORD*)&v25 + 1);
			v9 = v25;
			continue;
		}
		v11 = (_QWORD*)v9;
		*((_QWORD*)&v25 + 1) = v9;
		v9 = *(_QWORD*)v9;
		*(_QWORD*)&v25 = v9;
	}
	sub_14088C480(a1, v6, a3);
}
// 140C10F20: using guessed type int dword_140C10F20;

