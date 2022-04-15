//----- (00000001402F7B20) ----------------------------------------------------
int* __fastcall sub_1402F7B20(_QWORD* a1, int a2, __m128* a3)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	int* result; // rax
	__m128* v8; // rcx
	int** v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // rax
	__int64 v13; // rdi
	__m128* v14; // rcx
	int* v15; // rax
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v4 = a2;
	v16[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v3 + 16))(a1, v16, 0i64))
	{
		if ((_DWORD)v4)
		{
			v12 = a1[8];
			if ((unsigned int)v4 >= *(_DWORD*)(v12 + 400))
				v11 = -1;
			else
				v11 = *(unsigned __int16*)(*(_QWORD*)(v12 + 408) + 2 * v4);
		}
		else
		{
			v11 = 0;
		}
		result = (int*)a1[8];
		if (v11 < result[96])
		{
			result = (int*)a1[105];
			v13 = 88i64 * v11;
			v14 = *(__m128**) & result[v13 + 2];
			if (!v14)
			{
				v15 = sub_14018B280(64i64, 0);
				v14 = (__m128*)v15;
				if (v15)
				{
					*v15 = 0;
					*((_OWORD*)v15 + 1) = xmmword_140B7B240;
					*((_OWORD*)v15 + 2) = xmmword_140C78450;
					*((_OWORD*)v15 + 3) = 0i64;
				}
				else
				{
					v14 = 0i64;
				}
				result = (int*)a1[105];
				*(_QWORD*)&result[v13 + 2] = v14;
			}
			v14->m128_i32[0] |= 1u;
			v14[1] = _mm_add_ps(*a3, (__m128)xmmword_140B7B240);
		}
	}
	else
	{
		result = sub_14018B280(64i64, 0);
		v8 = (__m128*)result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v9 = (int**)(a1 + 9);
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v9;
				*((_QWORD*)result + 3) = *v9;
				*v9 = result;
				v10 = *((_QWORD*)result + 3);
				if (v10)
					*(_QWORD*)(v10 + 16) = (char*)v8 + 24;
			}
			v8[2].m128_i32[0] = v4;
			result = (int*)off_140B63F98;
			v8->m128_u64[0] = (unsigned __int64)off_140B63F98;
			v8[3] = *a3;
		}
	}
	return result;
}
// 140B63F98: using guessed type __int64 (__fastcall *off_140B63F98[29])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C78450: using guessed type __int128 xmmword_140C78450;
// 1402F7B20: using guessed type int var_18[6];

