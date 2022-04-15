//----- (0000000140376790) ----------------------------------------------------
__int64 __fastcall sub_140376790(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_OWORD* a4,
	__int64 a5,
	unsigned int a6,
	unsigned int a7,
	void(__fastcall*** a8)(_QWORD))
{
	void(__fastcall * **v9)(_QWORD); // rcx
	unsigned int v13; // edi
	unsigned int v14; // eax
	int v15; // ecx
	__int64 v16; // rsi
	__int64 v17; // rcx
	int* v18; // rax
	int* v19; // rdi
	__int64 v20; // r9
	__int64 result; // rax
	__int64 v22; // rax
	unsigned int v23; // ebp
	__int64* v24; // rdi
	__int64 v25; // rax
	unsigned int v26; // ecx
	__int64 v27; // r12
	unsigned int v28; // r9d
	__int64 v29; // rax
	float v30; // xmm6_4
	__int64 v31; // rax
	int v32; // xmm6_4
	int v33; // xmm1_4
	__int64 v34; // rax
	unsigned int v35; // edi
	__int64 v36; // [rsp+38h] [rbp-40h]

	*(_QWORD*)(a1 + 32) = a2;
	v9 = *(void(__fastcall****)(_QWORD))(a2 + 24);
	*(_QWORD*)(a1 + 24) = v9;
	(**v9)(v9);
	v13 = a6;
	if (a6)
	{
		v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 216i64))(*(_QWORD*)(a1 + 24));
		v15 = *(_DWORD*)(a2 + 96);
		*(_QWORD*)(a1 + 88) = __PAIR64__(v13 & 0xFFFFFF, v14);
		LODWORD(v36) = v15;
		*(_QWORD*)(a1 + 96) = v36;
	}
	v16 = (__int64)a8;
	if (*(void(__fastcall****)(_QWORD))(a1 + 320) != a8)
	{
		if (a8)
			(**a8)(a8);
		v17 = *(_QWORD*)(a1 + 320);
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		*(_QWORD*)(a1 + 320) = v16;
	}
	v18 = sub_14018B280(64i64, 0);
	v19 = v18;
	if (v18)
	{
		*((_QWORD*)v18 + 2) = 0i64;
		v18[7] = 0;
		*(_QWORD*)v18 = off_140B660C0;
		*((_OWORD*)v18 + 2) = 0i64;
		*((_OWORD*)v18 + 3) = 0i64;
	}
	else
	{
		v19 = 0i64;
	}
	*((_QWORD*)v19 + 1) = a1;
	v20 = 2i64;
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 128i64) & 0x8000000) == 0)
		v20 = 18i64;
	result = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 40i64)
		+ 40i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 40i64),
			a3,
			v19 + 4,
			v20);
	if ((int)result >= 0)
	{
		v19[6] &= ~1u;
		*(_QWORD*)(a1 + 48) = v19;
		v22 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v19 + 56i64))(v19);
		v23 = a7;
		v24 = (__int64*)v22;
		if (v22)
		{
			v25 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 32i64))(*(_QWORD*)(a1 + 24));
			v26 = 0;
			v27 = v25;
			a6 = 0;
			if (v16)
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD, unsigned int*))(*(_QWORD*)v16 + 32i64))(
					v16,
					5i64,
					0i64,
					&a6);
				v26 = a6;
			}
			if (v27)
			{
				if (!v26 || !sub_14021A740(v26))
					(*(void(__fastcall**)(_QWORD, __int64, __int64, unsigned int*))(**(_QWORD**)(a1 + 24) + 392i64))(
						*(_QWORD*)(a1 + 24),
						5i64,
						1i64,
						&a6);
				if (!a6 || !sub_14021A740(a6))
					a6 = 1106;
				(*(void(__fastcall**)(__int64*, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*v24 + 648))(
					v24,
					sub_140379300,
					a1);
				v28 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 880i64)
					- *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 32i64))(v27) + 28);
				sub_1403793C0(a1, v24, a6, v28, 0);
			}
			else
			{
				if (!v26 || !sub_14021A740(v26))
					(*(void(__fastcall**)(_QWORD, __int64, _QWORD, unsigned int*))(**(_QWORD**)(a1 + 24) + 392i64))(
						*(_QWORD*)(a1 + 24),
						5i64,
						0i64,
						&a6);
				if (!a6 || !sub_14021A740(a6))
					a6 = *(_DWORD*)(a1 + 364);
				(*(void(__fastcall**)(__int64*, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*v24 + 648))(
					v24,
					sub_140379300,
					a1);
				sub_1403793C0(a1, v24, a6, 0, 32);
			}
			v29 = *v24;
			if ((v23 & 0x800) != 0)
				(*(void(__fastcall**)(__int64*))(v29 + 736))(v24);
			else
				(*(void(__fastcall**)(__int64*))(v29 + 744))(v24);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 304i64))(a1, a6);
		}
		sub_1403772E0(a1, a4);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 200i64))(a1, a5);
		v30 = *(float*)(a2 + 128);
		if (v30 != *(float*)(a1 + 128))
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 136i64))(*(_QWORD*)(a1 + 48));
			*(float*)(a1 + 128) = v30;
		}
		v31 = *(_QWORD*)(a1 + 40);
		v32 = 1065353216;
		if (v31)
			v33 = *(_DWORD*)(v31 + 112);
		else
			v33 = 1065353216;
		sub_140378A60(a1, *(float*)&v33);
		v34 = *(_QWORD*)(a1 + 40);
		if (v34)
			v32 = *(_DWORD*)(v34 + 120);
		sub_140378AD0(a1, *(float*)&v32);
		sub_140378B40(a1);
		sub_140378CC0(a1);
		sub_140378E70((__m128*)a1);
		v35 = *(_DWORD*)(a2 + 308);
		if (*(_DWORD*)(a1 + 308) != v35)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 48) + 184i64))(*(_QWORD*)(a1 + 48), v35);
			*(_DWORD*)(a1 + 308) = v35;
		}
		sub_1403773F0(a1, *(_QWORD*)(a2 + 312));
		(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)a1 + 280i64))(a1, (v23 & 0x20) == 0);
		(*(void(__fastcall**)(__int64, bool))(*(_QWORD*)a1 + 296i64))(a1, (v23 & 0x40) == 0);
		if ((~(v23 >> 7) & 1) != 0)
			*(_DWORD*)(a1 + 360) &= ~0x80u;
		else
			*(_DWORD*)(a1 + 360) |= 0x80u;
		if ((~(v23 >> 8) & 1) != 0)
			*(_DWORD*)(a1 + 360) &= ~0x100u;
		else
			*(_DWORD*)(a1 + 360) |= 0x100u;
		if ((v23 & 0x200) != 0)
			*(_DWORD*)(a1 + 360) |= 0x200u;
		else
			*(_DWORD*)(a1 + 360) &= ~0x200u;
		if ((v23 & 0x400) != 0)
			*(_DWORD*)(a1 + 360) |= 0x400u;
		else
			*(_DWORD*)(a1 + 360) &= ~0x400u;
		if ((v23 & 2) != 0)
			*(_DWORD*)(a1 + 360) |= 2u;
		else
			*(_DWORD*)(a1 + 360) &= ~2u;
		return 0i64;
	}
	return result;
}
// 140376802: variable 'v36' is possibly undefined
// 140B660C0: using guessed type __int64 (__fastcall *off_140B660C0[79])();

