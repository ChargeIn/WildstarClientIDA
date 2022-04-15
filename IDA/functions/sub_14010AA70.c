//----- (000000014010AA70) ----------------------------------------------------
__int64* __fastcall sub_14010AA70(__int64 a1, __int64 a2, __int64 a3)
{
	__int64* v3; // r14
	__int64 v4; // rdx
	__int64 v5; // rbp
	__int64 v6; // rbx
	__int64 v7; // rcx
	_DWORD* v8; // rdi
	__int64 v9; // rdx
	void(__fastcall * **v10)(_QWORD); // rdx
	unsigned int* v11; // rsi
	unsigned __int64 v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdx
	int v15; // r9d
	unsigned int* v16; // rsi
	unsigned __int64 v17; // rax
	__int64 v18; // r8
	__int64 v19; // rdx
	int v20; // r9d
	char v21; // al

	v3 = (__int64*)a3;
	v4 = (unsigned __int128)((a2 - a1) * (__int128)0x6BCA1AF286BCA1Bi64) >> 64;
	v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
	if (v5 > 0)
	{
		v6 = a1 + 76;
		v7 = qword_140C63678;
		v8 = (_DWORD*)(a3 + 76);
		do
		{
			v9 = *v3;
			*(v8 - 17) = *(_DWORD*)(v6 - 68);
			*(v8 - 16) = *(_DWORD*)(v6 - 64);
			*(v8 - 15) = *(_DWORD*)(v6 - 60);
			*(v8 - 14) = *(_DWORD*)(v6 - 56);
			*(v8 - 13) = *(_DWORD*)(v6 - 52);
			*(v8 - 12) = *(_DWORD*)(v6 - 48);
			*(v8 - 11) = *(_DWORD*)(v6 - 44);
			*(v8 - 10) = *(_DWORD*)(v6 - 40);
			*(v8 - 9) = *(_DWORD*)(v6 - 36);
			*(v8 - 8) = *(_DWORD*)(v6 - 32);
			*(v8 - 7) = *(_DWORD*)(v6 - 28);
			*(v8 - 6) = *(_DWORD*)(v6 - 24);
			*((_BYTE*)v8 - 20) = *(_BYTE*)(v6 - 20);
			*((_BYTE*)v8 - 19) = *(_BYTE*)(v6 - 19);
			*((_BYTE*)v8 - 18) = *(_BYTE*)(v6 - 18);
			if (v9 != *(_QWORD*)(v6 - 76))
			{
				if (v9)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
					v7 = qword_140C63678;
					*v3 = 0i64;
				}
				v10 = *(void(__fastcall****)(_QWORD))(v6 - 76);
				*v3 = (__int64)v10;
				if (v10)
				{
					(**v10)(v10);
					v7 = qword_140C63678;
				}
			}
			v11 = v8 + 3;
			*(v8 - 4) = *(_DWORD*)(v6 - 16);
			*(v8 - 3) = *(_DWORD*)(v6 - 12);
			*(v8 - 2) = *(_DWORD*)(v6 - 8);
			*(v8 - 1) = *(_DWORD*)(v6 - 4);
			*v8 = *(_DWORD*)v6;
			if (v8 + 3 != (_DWORD*)(v6 + 12))
			{
				sub_1401429A0(v7, *v11);
				v12 = *(unsigned int*)(v6 + 12);
				v7 = qword_140C63678;
				*v11 = v12;
				if (v12 < *(_QWORD*)(v7 + 48))
				{
					v13 = *(_QWORD*)(v7 + 40);
					v14 = 32i64 * (unsigned int)v12;
					v15 = *(_DWORD*)(v14 + v13 + 16);
					if ((unsigned int)(v15 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v14 + v13 + 16) = v15 + 1;
				}
			}
			v16 = v8 + 4;
			if (v8 + 4 != (_DWORD*)(v6 + 16))
			{
				sub_1401429A0(v7, *v16);
				v17 = *(unsigned int*)(v6 + 16);
				v7 = qword_140C63678;
				*v16 = v17;
				if (v17 < *(_QWORD*)(v7 + 48))
				{
					v18 = *(_QWORD*)(v7 + 40);
					v19 = 32i64 * (unsigned int)v17;
					v20 = *(_DWORD*)(v19 + v18 + 16);
					if ((unsigned int)(v20 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v19 + v18 + 16) = v20 + 1;
				}
			}
			--v5;
			v8 += 76;
			*(v8 - 75) = *(_DWORD*)(v6 + 4);
			v3 += 38;
			*(v8 - 74) = *(_DWORD*)(v6 + 8);
			v21 = *(_BYTE*)(v6 + 20);
			v6 += 304i64;
			*((_BYTE*)v8 - 284) = v21;
			*(_OWORD*)(v8 - 67) = *(_OWORD*)(v6 - 268);
			*(_QWORD*)(v8 - 63) = *(_QWORD*)(v6 - 252);
			*(_QWORD*)(v8 - 61) = *(_QWORD*)(v6 - 244);
			*(_QWORD*)(v8 - 59) = *(_QWORD*)(v6 - 236);
			*(_QWORD*)(v8 - 57) = *(_QWORD*)(v6 - 228);
			*(v8 - 55) = *(_DWORD*)(v6 - 220);
			*(v8 - 54) = *(_DWORD*)(v6 - 216);
			*(v8 - 53) = *(_DWORD*)(v6 - 212);
			*(v8 - 52) = *(_DWORD*)(v6 - 208);
			*(v8 - 51) = *(_DWORD*)(v6 - 204);
			*(v8 - 50) = *(_DWORD*)(v6 - 200);
			*(v8 - 49) = *(_DWORD*)(v6 - 196);
			*(v8 - 48) = *(_DWORD*)(v6 - 192);
			*(v8 - 47) = *(_DWORD*)(v6 - 188);
			*(_OWORD*)(v8 - 43) = *(_OWORD*)(v6 - 172);
			*(_QWORD*)(v8 - 39) = *(_QWORD*)(v6 - 156);
			*(_QWORD*)(v8 - 37) = *(_QWORD*)(v6 - 148);
			*(_QWORD*)(v8 - 35) = *(_QWORD*)(v6 - 140);
			*(_QWORD*)(v8 - 33) = *(_QWORD*)(v6 - 132);
			*(v8 - 31) = *(_DWORD*)(v6 - 124);
			*(v8 - 30) = *(_DWORD*)(v6 - 120);
			*(v8 - 29) = *(_DWORD*)(v6 - 116);
			*(v8 - 28) = *(_DWORD*)(v6 - 112);
			*(v8 - 27) = *(_DWORD*)(v6 - 108);
			*(v8 - 26) = *(_DWORD*)(v6 - 104);
			*(v8 - 25) = *(_DWORD*)(v6 - 100);
			*(v8 - 24) = *(_DWORD*)(v6 - 96);
			*(v8 - 23) = *(_DWORD*)(v6 - 92);
		} while (v5 > 0);
	}
	return v3;
}
// 140C63678: using guessed type __int64 qword_140C63678;

