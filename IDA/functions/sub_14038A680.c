//----- (000000014038A680) ----------------------------------------------------
__int64 __fastcall sub_14038A680(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rbp
	__int64* v5; // r14
	__int64 v6; // rbx
	_WORD* v7; // rax
	float* v8; // rdi
	float* v9; // rbx
	__int64 v10; // rcx
	float v11; // xmm6_4
	__int64 v12; // rax
	float v13; // xmm1_4
	float v14; // xmm2_4
	__int64 v15; // rdi
	__int64 v16; // r8
	float* v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int16 v20; // ax
	float* v21; // rdi
	__int64 i; // rcx
	__int64 v23; // rax
	__int64 v24; // [rsp+88h] [rbp+10h] BYREF
	__int64 v25; // [rsp+90h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	result = sub_140350A20(*(_QWORD*)(*(_QWORD*)a1 + 16i64), 2i64, 0, (int**)(a1 + 32));
	if ((int)result >= 0)
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 16) + 72i64))(
			*(_QWORD*)(a1 + 16),
			9i64,
			&v24);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
		(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 16) + 72i64))(
			*(_QWORD*)(a1 + 16),
			10i64,
			&v25);
		v5 = *(__int64**)(*(_QWORD*)(a1 + 32) + 32i64);
		result = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, __int64))(*v5 + 56))(v5, 0i64, 0i64, 2i64);
		v6 = result;
		if (result)
		{
			v7 = (_WORD*)(*(__int64 (**)(void))(*(_QWORD*)v25 + 24i64))();
			v8 = (float*)(v6 + 4);
			v9 = (float*)(v6 + 140);
			v10 = 33i64;
			v11 = (float)((float)((float)(*v7 & 0x7FFF) * *(float*)&dword_140C41B9C) - *(float*)&dword_140C41B94)
				- *(float*)&dword_140C4458C;
			*(v9 - 35) = v11;
			while (v10)
			{
				*v8++ = v11;
				--v10;
			}
			*(v9 - 1) = v11;
			v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 24i64))(v24);
			v13 = *(float*)&dword_140C41B9C;
			v14 = *(float*)&dword_140C41B94;
			v15 = v12;
			v16 = 33i64;
			do
			{
				*v9 = v11;
				v17 = v9 + 1;
				v18 = v15 + 4;
				v19 = 11i64;
				do
				{
					v20 = *(_WORD*)(v18 - 4);
					v17 += 3;
					v18 += 6i64;
					*(v17 - 3) = (float)((float)(v20 & 0x7FFF) * v13) - v14;
					*(v17 - 2) = (float)((float)(*(_WORD*)(v18 - 8) & 0x7FFF) * v13) - v14;
					*(v17 - 1) = (float)((float)(*(_WORD*)(v18 - 6) & 0x7FFF) * v13) - v14;
					--v19;
				} while (v19);
				*v17 = v11;
				v9 = v17 + 1;
				v15 += *(int*)(v4 + 44);
				--v16;
			} while (v16);
			*v9 = v11;
			v21 = v9 + 1;
			for (i = 33i64; i; --i)
				*v21++ = v11;
			v23 = *v5;
			v9[34] = v11;
			result = (*(__int64(__fastcall**)(__int64*))(v23 + 64))(v5);
		}
		if (v24)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
			v24 = 0i64;
		}
		if (v25)
			return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	}
	return result;
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B480: using guessed type __int128 xmmword_140B7B480;
// 140B7B4B0: using guessed type __int128 xmmword_140B7B4B0;
// 140C41B94: using guessed type int dword_140C41B94;
// 140C41B9C: using guessed type int dword_140C41B9C;
// 140C4458C: using guessed type int dword_140C4458C;

