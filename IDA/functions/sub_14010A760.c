//----- (000000014010A760) ----------------------------------------------------
__int64* __fastcall sub_14010A760(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64* v4; // rsi
	__int64 v5; // rdx
	__int64 v6; // rbp
	__int64 v7; // rcx
	__int64 v8; // rbx
	char* v9; // rdi
	__int64 v10; // rdx
	void(__fastcall * **v11)(_QWORD); // rdx
	unsigned int* v12; // r14
	unsigned __int64 v13; // rax
	__int64 v14; // r8
	__int64 v15; // rdx
	int v16; // r9d
	unsigned int* v17; // r14
	unsigned __int64 v18; // rax
	__int64 v19; // r8
	__int64 v20; // rdx
	int v21; // r9d

	v4 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x6BCA1AF286BCA1Bi64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
	if (v6 > 0)
	{
		v7 = qword_140C63678;
		v8 = a2 + 76;
		v9 = (char*)a3 + 76;
		do
		{
			v8 -= 304i64;
			v9 -= 304;
			v4 -= 38;
			v10 = *v4;
			*((_DWORD*)v9 - 17) = *(_DWORD*)(v8 - 68);
			*((_DWORD*)v9 - 16) = *(_DWORD*)(v8 - 64);
			*((_DWORD*)v9 - 15) = *(_DWORD*)(v8 - 60);
			*((_DWORD*)v9 - 14) = *(_DWORD*)(v8 - 56);
			*((_DWORD*)v9 - 13) = *(_DWORD*)(v8 - 52);
			*((_DWORD*)v9 - 12) = *(_DWORD*)(v8 - 48);
			*((_DWORD*)v9 - 11) = *(_DWORD*)(v8 - 44);
			*((_DWORD*)v9 - 10) = *(_DWORD*)(v8 - 40);
			*((_DWORD*)v9 - 9) = *(_DWORD*)(v8 - 36);
			*((_DWORD*)v9 - 8) = *(_DWORD*)(v8 - 32);
			*((_DWORD*)v9 - 7) = *(_DWORD*)(v8 - 28);
			*((_DWORD*)v9 - 6) = *(_DWORD*)(v8 - 24);
			*(v9 - 20) = *(_BYTE*)(v8 - 20);
			*(v9 - 19) = *(_BYTE*)(v8 - 19);
			*(v9 - 18) = *(_BYTE*)(v8 - 18);
			if (v10 != *(_QWORD*)(v8 - 76))
			{
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					v7 = qword_140C63678;
					*v4 = 0i64;
				}
				v11 = *(void(__fastcall****)(_QWORD))(v8 - 76);
				*v4 = (__int64)v11;
				if (v11)
				{
					(**v11)(v11);
					v7 = qword_140C63678;
				}
			}
			v12 = (unsigned int*)(v9 + 12);
			*((_DWORD*)v9 - 4) = *(_DWORD*)(v8 - 16);
			*((_DWORD*)v9 - 3) = *(_DWORD*)(v8 - 12);
			*((_DWORD*)v9 - 2) = *(_DWORD*)(v8 - 8);
			*((_DWORD*)v9 - 1) = *(_DWORD*)(v8 - 4);
			*(_DWORD*)v9 = *(_DWORD*)v8;
			if (v9 + 12 != (char*)(v8 + 12))
			{
				sub_1401429A0(v7, *v12);
				v13 = *(unsigned int*)(v8 + 12);
				v7 = qword_140C63678;
				*v12 = v13;
				if (v13 < *(_QWORD*)(v7 + 48))
				{
					v14 = *(_QWORD*)(v7 + 40);
					v15 = 32i64 * (unsigned int)v13;
					v16 = *(_DWORD*)(v15 + v14 + 16);
					if ((unsigned int)(v16 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v15 + v14 + 16) = v16 + 1;
				}
			}
			v17 = (unsigned int*)(v9 + 16);
			if (v9 + 16 != (char*)(v8 + 16))
			{
				sub_1401429A0(v7, *v17);
				v18 = *(unsigned int*)(v8 + 16);
				v7 = qword_140C63678;
				*v17 = v18;
				if (v18 < *(_QWORD*)(v7 + 48))
				{
					v19 = *(_QWORD*)(v7 + 40);
					v20 = 32i64 * (unsigned int)v18;
					v21 = *(_DWORD*)(v20 + v19 + 16);
					if ((unsigned int)(v21 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v20 + v19 + 16) = v21 + 1;
				}
			}
			--v6;
			*((_DWORD*)v9 + 1) = *(_DWORD*)(v8 + 4);
			*((_DWORD*)v9 + 2) = *(_DWORD*)(v8 + 8);
			v9[20] = *(_BYTE*)(v8 + 20);
			*(_OWORD*)(v9 + 36) = *(_OWORD*)(v8 + 36);
			*(_QWORD*)(v9 + 52) = *(_QWORD*)(v8 + 52);
			*(_QWORD*)(v9 + 60) = *(_QWORD*)(v8 + 60);
			*(_QWORD*)(v9 + 68) = *(_QWORD*)(v8 + 68);
			*(_QWORD*)(v9 + 76) = *(_QWORD*)(v8 + 76);
			*((_DWORD*)v9 + 21) = *(_DWORD*)(v8 + 84);
			*((_DWORD*)v9 + 22) = *(_DWORD*)(v8 + 88);
			*((_DWORD*)v9 + 23) = *(_DWORD*)(v8 + 92);
			*((_DWORD*)v9 + 24) = *(_DWORD*)(v8 + 96);
			*((_DWORD*)v9 + 25) = *(_DWORD*)(v8 + 100);
			*((_DWORD*)v9 + 26) = *(_DWORD*)(v8 + 104);
			*((_DWORD*)v9 + 27) = *(_DWORD*)(v8 + 108);
			*((_DWORD*)v9 + 28) = *(_DWORD*)(v8 + 112);
			*((_DWORD*)v9 + 29) = *(_DWORD*)(v8 + 116);
			*(_OWORD*)(v9 + 132) = *(_OWORD*)(v8 + 132);
			*(_QWORD*)(v9 + 148) = *(_QWORD*)(v8 + 148);
			*(_QWORD*)(v9 + 156) = *(_QWORD*)(v8 + 156);
			*(_QWORD*)(v9 + 164) = *(_QWORD*)(v8 + 164);
			*(_QWORD*)(v9 + 172) = *(_QWORD*)(v8 + 172);
			*((_DWORD*)v9 + 45) = *(_DWORD*)(v8 + 180);
			*((_DWORD*)v9 + 46) = *(_DWORD*)(v8 + 184);
			*((_DWORD*)v9 + 47) = *(_DWORD*)(v8 + 188);
			*((_DWORD*)v9 + 48) = *(_DWORD*)(v8 + 192);
			*((_DWORD*)v9 + 49) = *(_DWORD*)(v8 + 196);
			*((_DWORD*)v9 + 50) = *(_DWORD*)(v8 + 200);
			*((_DWORD*)v9 + 51) = *(_DWORD*)(v8 + 204);
			*((_DWORD*)v9 + 52) = *(_DWORD*)(v8 + 208);
			*((_DWORD*)v9 + 53) = *(_DWORD*)(v8 + 212);
		} while (v6 > 0);
	}
	return v4;
}
// 140C63678: using guessed type __int64 qword_140C63678;

