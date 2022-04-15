#include "../winhttp.h"

//----- (00000001402D1CE0) ----------------------------------------------------
_DWORD* __fastcall sub_1402D1CE0(_DWORD* a1, _DWORD* a2, __int64 a3)
{
	__int64 v4; // rbp
	_DWORD* v6; // rsi
	__int64 v7; // r14
	_QWORD* v8; // rbx
	__int64 v9; // rdi
	void(__fastcall * **v10)(_QWORD); // rcx
	_QWORD* v11; // rbx
	__int64 v12; // rdi
	void(__fastcall * **v13)(_QWORD); // rcx
	__int128* v14; // rcx
	__int64 v15; // rdx
	__int128 v16; // xmm0
	char* v17; // rax
	__int128* v18; // rcx
	__int64 v19; // rdx
	__int128 v20; // xmm0
	_DWORD* result; // rax

	if (a1 != a2)
	{
		v4 = a3 - (_QWORD)a1;
		v6 = a1 + 4;
		v7 = -16 - a3;
		do
		{
			v8 = v6 + 6;
			v9 = 4i64;
			*((_QWORD*)v6 - 2) = *(_QWORD*)a3;
			*((_QWORD*)v6 - 1) = *(_QWORD*)(a3 + 8);
			*v6 = *(_DWORD*)(a3 + 16);
			v6[1] = *(_DWORD*)(a3 + 20);
			v6[2] = *(_DWORD*)(a3 + 24);
			v6[3] = *(_DWORD*)(a3 + 28);
			v6[4] = *(_DWORD*)(a3 + 32);
			do
			{
				v10 = *(void(__fastcall****)(_QWORD))((char*)v8 + v4);
				if ((void(__fastcall***)(_QWORD)) * v8 != v10)
				{
					if (v10)
						(**v10)(v10);
					if (*v8)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 8i64))(*v8);
					*v8 = *(_QWORD*)((char*)v8 + v4);
				}
				++v8;
				--v9;
			} while (v9);
			v11 = v6 + 14;
			v12 = 4i64;
			do
			{
				v13 = *(void(__fastcall****)(_QWORD))((char*)v11 + v4);
				if ((void(__fastcall***)(_QWORD)) * v11 != v13)
				{
					if (v13)
						(**v13)(v13);
					if (*v11)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 8i64))(*v11);
					*v11 = *(_QWORD*)((char*)v11 + v4);
				}
				++v11;
				--v12;
			} while (v12);
			v14 = (__int128*)(a3 + 112);
			v15 = 2i64;
			do
			{
				v16 = *v14;
				v17 = (char*)v14++ + v7;
				*(_OWORD*)((char*)v6 + (_QWORD)v17) = v16;
				--v15;
			} while (v15);
			v18 = (__int128*)(a3 + 144);
			v19 = 2i64;
			do
			{
				v20 = *v18++;
				*(__int128*)((char*)v18 + (_QWORD)v6 + v7 - 16) = v20;
				--v19;
			} while (v19);
			v6 += 48;
			v4 -= 192i64;
			*(v6 - 8) = *(_DWORD*)(a3 + 176);
			result = v6 - 4;
		} while (v6 - 4 != a2);
	}
	return result;
}

