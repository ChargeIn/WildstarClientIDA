//----- (0000000140891280) ----------------------------------------------------
__int64 __fastcall sub_140891280(_BYTE* a1, unsigned int** a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned int* v6; // rcx
	char v7; // al
	_BYTE* v8; // rdx
	__int64 v9; // xmm1_8
	int v10; // xmm0_4
	char v11; // al
	__int64 v12; // rsi
	__int64 v13; // r14
	_DWORD* v14; // rax
	__int64 v15; // rbp
	_DWORD* v16; // rdx
	int v17; // ecx
	int v18; // ecx
	int v19; // ecx
	int v20; // ecx
	int v21; // ecx
	int v22; // ecx
	unsigned int v23; // ebx
	__int64 v24[2]; // [rsp+20h] [rbp-28h] BYREF
	int v25; // [rsp+30h] [rbp-18h]
	char v26; // [rsp+34h] [rbp-14h]
	char v27; // [rsp+35h] [rbp-13h]

	++* a2;
	result = sub_1408546E0(a1, a2, a3, 0);
	if ((_DWORD)result == 1)
	{
		result = sub_140869CC0((__int64)a1, a2);
		if ((_DWORD)result == 1)
		{
			v6 = *a2 + 5;
			*a2 = v6;
			v6 = (unsigned int*)((char*)v6 + 1);
			v7 = *((_BYTE*)v6 - 1);
			*a2 = v6;
			v8 = (char*)v6 + 1;
			v9 = *(_QWORD*)((char*)v6 - 13);
			v24[0] = *(_QWORD*)((char*)v6 - 21);
			v10 = *(unsigned int*)((char*)v6 - 5);
			v24[1] = v9;
			v26 = v7;
			v11 = *(_BYTE*)v6;
			*a2 = (unsigned int*)((char*)v6 + 1);
			v25 = v10;
			LOBYTE(v6) = *((_BYTE*)v6 + 1);
			v27 = v11;
			*a2 = (unsigned int*)(v8 + 1);
			if ((_BYTE)v6)
				sub_140891010((__int64)a1, (__int64)v24);
			v12 = *(*a2)++;
			if ((_DWORD)v12)
			{
				v13 = (unsigned int)v12;
				v14 = (_DWORD*)sub_1408819F0(dword_140C10F20, 24 * v12);
				v15 = (__int64)v14;
				if (!v14)
					return 2i64;
				v16 = v14 + 2;
				do
				{
					v16 += 6;
					v17 = *(*a2)++;
					*(v16 - 8) = v17;
					v18 = *(*a2)++;
					*(v16 - 7) = v18;
					v19 = *(*a2)++;
					*(v16 - 6) = v19;
					v20 = *(*a2)++;
					*(v16 - 5) = v20;
					v21 = *(*a2)++;
					*(v16 - 4) = v21;
					v22 = *(*a2)++;
					*(v16 - 3) = v22;
					--v13;
				} while (v13);
				v23 = sub_140891430((__int64)a1, v14, v12);
				sub_140881720(dword_140C10F20, v15);
			}
			else
			{
				sub_140890CF0((__int64)a1);
				return 1;
			}
			return v23;
		}
	}
	return result;
}
// 14089136C: conditional instruction was optimized away because esi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

