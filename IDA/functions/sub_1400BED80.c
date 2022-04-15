//----- (00000001400BED80) ----------------------------------------------------
_QWORD* __fastcall sub_1400BED80(__int64 a1, _QWORD* a2, int a3, int* a4)
{
	__int64 v6; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int* v11; // r15
	int* v12; // r14
	int* v13; // r12
	unsigned __int64 v14; // rax
	unsigned __int64 v15; // rdi
	unsigned __int64 v16; // rdi
	int* v17; // rdi
	__int64 v18; // rdi
	unsigned int v19; // eax
	int v20; // ecx
	__int64 v22; // rax
	int* v23; // rdi
	__int64 v24; // [rsp+20h] [rbp-38h] BYREF
	int* v25; // [rsp+28h] [rbp-30h]
	int* v26; // [rsp+30h] [rbp-28h]
	int* v27; // [rsp+38h] [rbp-20h]

	if (a4 && *(_WORD*)a4)
	{
		if (a3 == 1)
		{
			v6 = 0i64;
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			if (*(_WORD*)a4)
			{
				do
					++v6;
				while (*((_WORD*)a4 + v6));
			}
			sub_14001C1B0(a2, a4, (__int64)a4 + 2 * v6);
			return a2;
		}
		else
		{
			v8 = sub_14018B280(16i64, 0);
			v9 = 0i64;
			v25 = v8;
			v26 = v8;
			v27 = v8 + 4;
			if (v8)
				*(_WORD*)v8 = 0;
			if ((unsigned int)sub_1400B8AA0(a4, dword_1409D1E64, (__int64)&v24))
			{
				a2[1] = v25;
				a2[2] = v26;
				a2[3] = v27;
				return a2;
			}
			else
			{
				v10 = 0i64;
				if (*(_WORD*)a4)
				{
					do
						++v10;
					while (*((_WORD*)a4 + v10));
				}
				v11 = v25;
				v12 = v26;
				v13 = (int*)((char*)a4 + 2 * v10);
				v14 = ((char*)v26 - (char*)v25) >> 1;
				v15 = ((char*)v13 - (char*)a4) >> 1;
				if (v15 > v14)
				{
					v18 = 2 * v14;
					sub_1407DB590(v25, a4, 2 * v14);
					sub_14001C310(&v24, (int*)((char*)a4 + v18), v13);
					v12 = v26;
					v11 = v25;
				}
				else
				{
					v16 = 2 * v15;
					sub_1407DB590(v25, a4, v16);
					v17 = (int*)((char*)v11 + v16);
					if (v17 != v12)
					{
						sub_1407DB590(v17, v12, 2ui64);
						v12 = (int*)((char*)v12 - 2 * (((char*)v12 - (char*)v17) >> 1));
						v26 = v12;
					}
				}
				v19 = (unsigned __int16)sub_1407DF5F4(*((_WORD*)v11 + (((char*)v12 - (char*)v11) >> 1) - 1)) - 115;
				if (v19 > 7 || (v20 = 161, !_bittest(&v20, v19)))
				{
					while (*((_WORD*)&unk_1409D1ECC + ++v9) != 0)
						;
					sub_14001C310(&v24, (int*)&unk_1409D1ECC, (int*)((char*)&unk_1409D1ECC + 2 * v9));
					v12 = v26;
					v11 = v25;
				}
				v22 = (__int64)v27;
				a2[1] = v11;
				a2[3] = v22;
				a2[2] = v12;
				return a2;
			}
		}
	}
	else
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v23 = sub_14018B280(2i64, 0);
		a2[1] = v23;
		a2[3] = (char*)v23 + 2;
		a2[2] = v23;
		sub_1407DB590(v23, dword_1409D1E4C, 0i64);
		a2[2] = v23;
		if (v23)
			*(_WORD*)v23 = 0;
		return a2;
	}
}
// 1409D1E4C: using guessed type int dword_1409D1E4C[6];
// 1409D1E64: using guessed type int dword_1409D1E64[26];

