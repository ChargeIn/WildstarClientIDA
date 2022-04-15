#include "../winhttp.h"

//----- (00000001402D2110) ----------------------------------------------------
__int64 __fastcall sub_1402D2110(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rdx
	__int64 v5; // rbp
	_DWORD* v6; // r15
	_QWORD* v7; // rbx
	char* v8; // rsi
	__int64 v9; // rdi
	void(__fastcall * **v10)(_QWORD); // rcx
	_QWORD* v11; // rbx
	__int64 v12; // rdi
	void(__fastcall * **v13)(_QWORD); // rcx
	__int128* v14; // rax
	__int64 v15; // rdx
	__int128 v16; // xmm0
	__int128* v17; // rax
	__int64 v18; // rdx
	__int128 v19; // xmm0

	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 5);
	if (v5 > 0)
	{
		v6 = (_DWORD*)(a1 + 16);
		do
		{
			v7 = (_QWORD*)(a3 + 40);
			*(_QWORD*)a3 = *((_QWORD*)v6 - 2);
			*(_QWORD*)(a3 + 8) = *((_QWORD*)v6 - 1);
			v8 = (char*)v6 - a3 - 16;
			*(_DWORD*)(a3 + 16) = *v6;
			v9 = 4i64;
			*(_DWORD*)(a3 + 20) = v6[1];
			*(_DWORD*)(a3 + 24) = v6[2];
			*(_DWORD*)(a3 + 28) = v6[3];
			*(_DWORD*)(a3 + 32) = v6[4];
			do
			{
				v10 = *(void(__fastcall****)(_QWORD)) & v8[(_QWORD)v7];
				if ((void(__fastcall***)(_QWORD)) * v7 != v10)
				{
					if (v10)
						(**v10)(v10);
					if (*v7)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
					*v7 = *(_QWORD*)&v8[(_QWORD)v7];
				}
				++v7;
				--v9;
			} while (v9);
			v11 = (_QWORD*)(a3 + 72);
			v12 = 4i64;
			do
			{
				v13 = *(void(__fastcall****)(_QWORD)) & v8[(_QWORD)v11];
				if ((void(__fastcall***)(_QWORD)) * v11 != v13)
				{
					if (v13)
						(**v13)(v13);
					if (*v11)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
					*v11 = *(_QWORD*)&v8[(_QWORD)v11];
				}
				++v11;
				--v12;
			} while (v12);
			v14 = (__int128*)(v6 + 24);
			v15 = 2i64;
			do
			{
				v16 = *v14++;
				*(__int128*)((char*)v14 + a3 - (_QWORD)v6) = v16;
				--v15;
			} while (v15);
			v17 = (__int128*)(v6 + 32);
			v18 = 2i64;
			do
			{
				v19 = *v17++;
				*(__int128*)((char*)v17 + a3 - (_QWORD)v6) = v19;
				--v18;
			} while (v18);
			--v5;
			a3 += 192i64;
			*(_DWORD*)(a3 - 16) = v6[40];
			v6 += 48;
		} while (v5 > 0);
	}
	return a3;
}

