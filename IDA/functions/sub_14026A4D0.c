//----- (000000014026A4D0) ----------------------------------------------------
__int64 __fastcall sub_14026A4D0(__int64 a1, _QWORD* a2, unsigned int a3, int a4, int a5, __int64 a6, _DWORD* a7)
{
	__int64 result; // rax
	_QWORD* v11; // rsi
	__int64 v12; // rcx
	int v13; // r15d
	_QWORD* v14; // rdi
	__int64 v15; // rcx
	__int128 v16; // xmm1
	__int128 v17; // xmm1
	_DWORD* v18; // rax
	int v19; // r15d
	int v20; // eax
	int v21; // eax
	int v22; // eax
	int v23; // ebx
	__int128 v24[2]; // [rsp+40h] [rbp-68h] BYREF
	__int128 v25; // [rsp+60h] [rbp-48h]
	__int128 v26; // [rsp+70h] [rbp-38h]
	int v28; // [rsp+D0h] [rbp+28h]

	result = sub_14026A900(a1, 0);
	if ((int)result < 0)
		return result;
	v11 = (_QWORD*)(a1 + 6608);
	v12 = *(_QWORD*)(a1 + 6608);
	v13 = 0;
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
		*v11 = 0i64;
	}
	v14 = (_QWORD*)(a1 + 6616);
	v15 = *(_QWORD*)(a1 + 6616);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
		*v14 = 0i64;
	}
	v28 = 0;
	v16 = *(_OWORD*)(a6 + 16);
	v24[0] = *(_OWORD*)a6;
	v24[1] = v16;
	v17 = *(_OWORD*)(a6 + 48);
	v25 = *(_OWORD*)(a6 + 32);
	v26 = v17;
	if (!*(_QWORD*)(a1 + 6600))
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, int, __int128*, __int64))(**(_QWORD**)(a1 + 6592)
			+ 128i64))(
				*(_QWORD*)(a1 + 6592),
				a3,
				1i64,
				a2[3],
				80,
				v24,
				a1 + 6608);
		if ((int)result < 0)
			return result;
	LABEL_21:
		result = sub_14026A800(a1, (__int64)a2, (unsigned int*)a6);
		if ((int)result >= 0)
		{
			*(_DWORD*)(a1 + 6548) = a3;
			*(_DWORD*)(a1 + 6556) = 1;
			*(_DWORD*)(a1 + 6552) = a4;
			*(_QWORD*)(a1 + 56) = *a2;
			*(_QWORD*)(a1 + 64) = a2[1];
			*(_QWORD*)(a1 + 72) = a2[2];
			*(_QWORD*)(a1 + 80) = a2[3];
			*(_QWORD*)(a1 + 88) = a2[4];
			*(_DWORD*)(a1 + 6560) = *a7;
			*(_DWORD*)(a1 + 6564) = a7[1];
			*(_DWORD*)(a1 + 6568) = a7[2];
			*(_DWORD*)(a1 + 6572) = a7[3];
			*(_DWORD*)(a1 + 6576) = a7[4];
			v20 = a7[5];
			*(_DWORD*)(a1 + 6636) = v13;
			*(_DWORD*)(a1 + 6580) = v20;
			*(_QWORD*)(a1 + 96) = 0i64;
			*(_QWORD*)(a1 + 104) = 0i64;
			*(_QWORD*)(a1 + 112) = 0i64;
			*(_QWORD*)(a1 + 120) = 0i64;
			*(_QWORD*)(a1 + 128) = 0i64;
			*(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 6564);
			v21 = *(_DWORD*)(a1 + 6568);
			*(_DWORD*)(a1 + 104) = 1;
			*(_DWORD*)(a1 + 100) = v21;
			v22 = *(_DWORD*)(a1 + 6572);
			*(_DWORD*)(a1 + 108) = 23;
			*(_DWORD*)(a1 + 112) = v22;
			v23 = sub_14026A900(a1, 2);
			if (v23 >= 0)
			{
				return 0i64;
			}
			else
			{
				if (*v14)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 16i64))(*v14);
					*v14 = 0i64;
				}
				if (*v11)
				{
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v11 + 16i64))(*v11);
					*v11 = 0i64;
				}
				return (unsigned int)v23;
			}
		}
		return result;
	}
	if (DWORD2(v25) && !HIDWORD(v26) && (unsigned int)sub_1402649D0(*(_DWORD*)(a1 + 6240)))
	{
		HIDWORD(v26) = 0x80000000;
		v28 = 1;
	}
	v18 = a7;
	if (DWORD2(v25))
		v18 = 0i64;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, int, __int128*, _DWORD*, __int64))(**(_QWORD**)(a1 + 6600) + 160i64))(
		*(_QWORD*)(a1 + 6600),
		a3,
		1i64,
		a2[3],
		32848,
		v24,
		v18,
		a1 + 6616);
	if ((int)result >= 0)
	{
		v19 = (**(__int64(__fastcall***)(_QWORD, void*, __int64)) * v14)(*v14, &unk_140964780, a1 + 6608);
		if (v19 < 0)
		{
			if (*v14)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 16i64))(*v14);
				*v14 = 0i64;
			}
			return (unsigned int)v19;
		}
		v13 = v28;
		goto LABEL_21;
	}
	return result;
}

