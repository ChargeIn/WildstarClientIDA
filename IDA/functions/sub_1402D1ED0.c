//----- (00000001402D1ED0) ----------------------------------------------------
__int64 __fastcall sub_1402D1ED0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rdx
	__int64 v6; // rbp
	_DWORD* v7; // r15
	__int64 v8; // rdi
	_QWORD* v9; // rbx
	char* v10; // rsi
	void(__fastcall * **v11)(_QWORD); // rcx
	_QWORD* v12; // rbx
	__int64 v13; // rdi
	void(__fastcall * **v14)(_QWORD); // rcx
	__int128* v15; // rax
	__int64 v16; // rdx
	__int128 v17; // xmm0
	__int128* v18; // rax
	__int64 v19; // rdx
	__int128 v20; // xmm0

	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 5);
	if (v6 > 0)
	{
		v7 = (_DWORD*)(a2 + 16);
		do
		{
			a3 -= 192i64;
			v7 -= 48;
			v8 = 4i64;
			v9 = (_QWORD*)(a3 + 40);
			*(_QWORD*)a3 = *((_QWORD*)v7 - 2);
			*(_QWORD*)(a3 + 8) = *((_QWORD*)v7 - 1);
			v10 = (char*)v7 - a3 - 16;
			*(_DWORD*)(a3 + 16) = *v7;
			*(_DWORD*)(a3 + 20) = v7[1];
			*(_DWORD*)(a3 + 24) = v7[2];
			*(_DWORD*)(a3 + 28) = v7[3];
			*(_DWORD*)(a3 + 32) = v7[4];
			do
			{
				v11 = *(void(__fastcall****)(_QWORD)) & v10[(_QWORD)v9];
				if ((void(__fastcall***)(_QWORD)) * v9 != v11)
				{
					if (v11)
						(**v11)(v11);
					if (*v9)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v9 + 8i64))(*v9);
					*v9 = *(_QWORD*)&v10[(_QWORD)v9];
				}
				++v9;
				--v8;
			} while (v8);
			v12 = (_QWORD*)(a3 + 72);
			v13 = 4i64;
			do
			{
				v14 = *(void(__fastcall****)(_QWORD)) & v10[(_QWORD)v12];
				if ((void(__fastcall***)(_QWORD)) * v12 != v14)
				{
					if (v14)
						(**v14)(v14);
					if (*v12)
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
					*v12 = *(_QWORD*)&v10[(_QWORD)v12];
				}
				++v12;
				--v13;
			} while (v13);
			v15 = (__int128*)(v7 + 24);
			v16 = 2i64;
			do
			{
				v17 = *v15++;
				*(__int128*)((char*)v15 + a3 - (_QWORD)v7) = v17;
				--v16;
			} while (v16);
			v18 = (__int128*)(v7 + 32);
			v19 = 2i64;
			do
			{
				v20 = *v18++;
				*(__int128*)((char*)v18 + a3 - (_QWORD)v7) = v20;
				--v19;
			} while (v19);
			--v6;
			*(_DWORD*)(a3 + 176) = v7[40];
		} while (v6 > 0);
	}
	return a3;
}

