//----- (00000001400FEE50) ----------------------------------------------------
__int64* __fastcall sub_1400FEE50(__int64* a1, __int64* a2)
{
	__int64 v4; // rcx
	void(__fastcall * **v5)(_QWORD); // rcx
	unsigned int* v6; // rsi
	unsigned __int64 v7; // rax
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rcx
	int v11; // r9d
	unsigned int* v12; // rsi
	unsigned __int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rcx
	int v17; // r8d

	*((_DWORD*)a1 + 2) = *((_DWORD*)a2 + 2);
	*((_DWORD*)a1 + 3) = *((_DWORD*)a2 + 3);
	*((_DWORD*)a1 + 4) = *((_DWORD*)a2 + 4);
	*((_DWORD*)a1 + 5) = *((_DWORD*)a2 + 5);
	*((_DWORD*)a1 + 6) = *((_DWORD*)a2 + 6);
	*((_DWORD*)a1 + 7) = *((_DWORD*)a2 + 7);
	*((_DWORD*)a1 + 8) = *((_DWORD*)a2 + 8);
	*((_DWORD*)a1 + 9) = *((_DWORD*)a2 + 9);
	*((_DWORD*)a1 + 10) = *((_DWORD*)a2 + 10);
	*((_DWORD*)a1 + 11) = *((_DWORD*)a2 + 11);
	*((_DWORD*)a1 + 12) = *((_DWORD*)a2 + 12);
	*((_DWORD*)a1 + 13) = *((_DWORD*)a2 + 13);
	*((_BYTE*)a1 + 56) = *((_BYTE*)a2 + 56);
	*((_BYTE*)a1 + 57) = *((_BYTE*)a2 + 57);
	*((_BYTE*)a1 + 58) = *((_BYTE*)a2 + 58);
	v4 = *a1;
	if (v4 != *a2)
	{
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*a1 = 0i64;
		}
		v5 = (void(__fastcall***)(_QWORD)) * a2;
		*a1 = *a2;
		if (v5)
			(**v5)(v5);
	}
	v6 = (unsigned int*)(a1 + 11);
	*((_DWORD*)a1 + 15) = *((_DWORD*)a2 + 15);
	*((_DWORD*)a1 + 16) = *((_DWORD*)a2 + 16);
	*((_DWORD*)a1 + 17) = *((_DWORD*)a2 + 17);
	*((_DWORD*)a1 + 18) = *((_DWORD*)a2 + 18);
	*((_DWORD*)a1 + 19) = *((_DWORD*)a2 + 19);
	if (a1 + 11 == a2 + 11)
	{
		v8 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v6);
		v7 = *((unsigned int*)a2 + 22);
		v8 = qword_140C63678;
		*v6 = v7;
		if (v7 < *(_QWORD*)(v8 + 48))
		{
			v9 = *(_QWORD*)(v8 + 40);
			v10 = 32i64 * (unsigned int)v7;
			v11 = *(_DWORD*)(v10 + v9 + 16);
			if ((unsigned int)(v11 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v10 + v9 + 16) = v11 + 1;
		}
	}
	v12 = (unsigned int*)a1 + 23;
	if ((char*)a1 + 92 != (char*)a2 + 92)
	{
		sub_1401429A0(v8, *v12);
		v13 = *((unsigned int*)a2 + 23);
		v14 = qword_140C63678;
		*v12 = v13;
		if (v13 < *(_QWORD*)(v14 + 48))
		{
			v15 = *(_QWORD*)(v14 + 40);
			v16 = 32i64 * (unsigned int)v13;
			v17 = *(_DWORD*)(v16 + v15 + 16);
			if ((unsigned int)(v17 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v16 + v15 + 16) = v17 + 1;
		}
	}
	*((_DWORD*)a1 + 20) = *((_DWORD*)a2 + 20);
	*((_DWORD*)a1 + 21) = *((_DWORD*)a2 + 21);
	*((_BYTE*)a1 + 96) = *((_BYTE*)a2 + 96);
	*((_OWORD*)a1 + 7) = *((_OWORD*)a2 + 7);
	a1[16] = a2[16];
	a1[17] = a2[17];
	a1[18] = a2[18];
	a1[19] = a2[19];
	*((_DWORD*)a1 + 40) = *((_DWORD*)a2 + 40);
	*((_DWORD*)a1 + 41) = *((_DWORD*)a2 + 41);
	*((_DWORD*)a1 + 42) = *((_DWORD*)a2 + 42);
	*((_DWORD*)a1 + 43) = *((_DWORD*)a2 + 43);
	*((_DWORD*)a1 + 44) = *((_DWORD*)a2 + 44);
	*((_DWORD*)a1 + 45) = *((_DWORD*)a2 + 45);
	*((_DWORD*)a1 + 46) = *((_DWORD*)a2 + 46);
	*((_DWORD*)a1 + 47) = *((_DWORD*)a2 + 47);
	*((_DWORD*)a1 + 48) = *((_DWORD*)a2 + 48);
	*((_OWORD*)a1 + 13) = *((_OWORD*)a2 + 13);
	a1[28] = a2[28];
	a1[29] = a2[29];
	a1[30] = a2[30];
	a1[31] = a2[31];
	*((_DWORD*)a1 + 64) = *((_DWORD*)a2 + 64);
	*((_DWORD*)a1 + 65) = *((_DWORD*)a2 + 65);
	*((_DWORD*)a1 + 66) = *((_DWORD*)a2 + 66);
	*((_DWORD*)a1 + 67) = *((_DWORD*)a2 + 67);
	*((_DWORD*)a1 + 68) = *((_DWORD*)a2 + 68);
	*((_DWORD*)a1 + 69) = *((_DWORD*)a2 + 69);
	*((_DWORD*)a1 + 70) = *((_DWORD*)a2 + 70);
	*((_DWORD*)a1 + 71) = *((_DWORD*)a2 + 71);
	*((_DWORD*)a1 + 72) = *((_DWORD*)a2 + 72);
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

