//----- (0000000140384690) ----------------------------------------------------
__int64 __fastcall sub_140384690(_QWORD* a1)
{
	__int64 v2; // r14
	__int64 v3; // rdi
	__int64 v4; // rsi
	int v5; // eax
	__int128 v6; // xmm8
	__int128 v7; // xmm9
	int v8; // ecx
	_OWORD* v9; // rdx
	_QWORD* v10; // r8
	__int64 v11; // r10
	_OWORD* v12; // rax
	_QWORD* v13; // rcx
	__int64 v14; // r8
	__int128 v15; // xmm0
	unsigned int v16; // r12d
	int v17; // r13d
	_QWORD* v18; // rsi
	int* v19; // rdi
	unsigned int v20; // ebp
	int v21; // r15d
	__int64 v22; // rdx
	__int64 v24; // [rsp+20h] [rbp-A8h]
	__int128 v25; // [rsp+40h] [rbp-88h] BYREF
	__int128 v26; // [rsp+50h] [rbp-78h] BYREF

	if (!*((_DWORD*)a1 + 196) || !a1[94] || !a1[97])
		return 0i64;
	v2 = 4i64;
	v3 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		176i64,
		1i64,
		4i64,
		0);
	if (v3)
	{
		v4 = *a1;
		v5 = *(_DWORD*)(*a1 + 132i64);
		if ((v5 & 0x1809023) == 0)
		{
		LABEL_37:
			HIDWORD(v24) = 0;
			if ((*(_DWORD*)(*a1 + 132i64) & 0x10000) != 0)
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					10i64,
					*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 376i64));
				v15 = 0i64;
			}
			else
			{
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					10i64,
					*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[50] + 32i64) + 16i64) + 32i64),
					0i64,
					0i64);
				v15 = *(_OWORD*)(*(_QWORD*)(a1[50] + 32i64) + 32i64);
			}
			*(_OWORD*)(v3 + 96) = v15;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
			goto LABEL_41;
		}
		v25 = xmmword_140B7B240;
		v6 = xmmword_140B7B240;
		v7 = 0i64;
		v26 = 0i64;
		if ((v5 & 0x20) != 0 && (unsigned int)sub_1400F4750((_QWORD*)(v4 + 648)) != -1)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, __int128*, __int128*))(v4 + 656))(
				*(_QWORD*)(v4 + 648),
				a1[2],
				&v25,
				&v26);
			v6 = v25;
			v7 = v26;
		}
		*(_OWORD*)v3 = v6;
		*(_OWORD*)(v3 + 16) = v7;
		if ((*(_BYTE*)(*a1 + 132i64) & 2) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				11i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[161] + 32i64) + 16i64) + 32i64));
			*(_OWORD*)(v3 + 128) = *(_OWORD*)(*(_QWORD*)(a1[161] + 32i64) + 32i64);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				11i64,
				*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 360i64),
				0i64,
				0i64);
			*(_OWORD*)(v3 + 128) = 0i64;
		}
		if ((*(_BYTE*)(*a1 + 132i64) & 1) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				12i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[160] + 32i64) + 16i64) + 32i64));
			*(_OWORD*)(v3 + 112) = *(_OWORD*)(*(_QWORD*)(a1[160] + 32i64) + 32i64);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				12i64,
				*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 360i64),
				0i64,
				0i64);
			*(_OWORD*)(v3 + 112) = 0i64;
		}
		if ((*(_DWORD*)(*a1 + 132i64) & 0x1000) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				13i64,
				*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[51] + 32i64) + 16i64) + 32i64));
			*(_OWORD*)(v3 + 144) = *(_OWORD*)(*(_QWORD*)(a1[51] + 32i64) + 32i64);
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
				qword_140C65670,
				13i64,
				*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 368i64),
				0i64,
				0i64);
			*(_OWORD*)(v3 + 144) = 0i64;
		}
		v8 = *(_DWORD*)(*a1 + 132i64);
		if ((v8 & 0x800000) != 0)
		{
			v9 = (_OWORD*)(v3 + 32);
			v10 = a1 + 156;
			v11 = 4i64;
			do
			{
				if (*v10 && *(_DWORD*)(*v10 + 24i64) == *(_DWORD*)(*a1 + 808i64))
					*v9 = xmmword_140B7B240;
				else
					*v9 = xmmword_140C78440;
				++v10;
				++v9;
				--v11;
			} while (v11);
		}
		else
		{
			if ((v8 & 0x1000000) == 0)
			{
				if ((v8 & 0x8000) == 0)
				{
					*(_QWORD*)(v3 + 32) = 0i64;
					*(_QWORD*)(v3 + 40) = 0i64;
					*(_QWORD*)(v3 + 48) = 0i64;
					*(_QWORD*)(v3 + 56) = 0i64;
					*(_QWORD*)(v3 + 64) = 0i64;
					*(_QWORD*)(v3 + 72) = 0i64;
					*(_QWORD*)(v3 + 80) = 0i64;
					*(_QWORD*)(v3 + 88) = 0i64;
					(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						14i64,
						*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 360i64),
						0i64,
						0i64);
					(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
						qword_140C65670,
						15i64,
						*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 360i64));
					*(_OWORD*)(v3 + 160) = 0i64;
					goto LABEL_37;
				}
				*(_OWORD*)(v3 + 32) = xmmword_140C78410;
				*(_OWORD*)(v3 + 48) = xmmword_140C78420;
				*(_OWORD*)(v3 + 64) = xmmword_140C78430;
				*(_OWORD*)(v3 + 80) = xmmword_140C78440;
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					14i64,
					*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[52] + 32i64) + 16i64) + 32i64));
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					15i64,
					*(_QWORD*)(*a1 + 800i64));
				goto LABEL_35;
			}
			v12 = (_OWORD*)(v3 + 32);
			v13 = a1 + 156;
			v14 = 4i64;
			do
			{
				if (*v13)
					*v12 = *(_OWORD*)(*v13 + 32i64);
				else
					*v12 = 0i64;
				++v13;
				++v12;
				--v14;
			} while (v14);
		}
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			14i64,
			*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1[52] + 32i64) + 16i64) + 32i64));
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
			qword_140C65670,
			15i64,
			*(_QWORD*)(*(_QWORD*)(*a1 + 16i64) + 496i64));
	LABEL_35:
		*(_OWORD*)(v3 + 160) = *(_OWORD*)(*(_QWORD*)(a1[52] + 32i64) + 32i64);
		goto LABEL_37;
	}
LABEL_41:
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		a1[94],
		13i64);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, a1[97]);
	v16 = 0;
	v17 = 0;
	v18 = a1 + 84;
	v19 = (int*)(a1 + 92);
	do
	{
		v20 = v19[6];
		if (v20)
		{
			v21 = *v19;
			if ((*(_BYTE*)(v19 - 8) & 2) != 0)
				v22 = 0i64;
			else
				v22 = (unsigned int)((*(_DWORD*)(*a1 + 128i64) & 0x4000000) != 0) + 1;
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, v22);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
				qword_140C65670,
				0i64,
				*(v18 - 4),
				0i64);
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 360i64))(
				qword_140C65670,
				1i64,
				*v18);
			LODWORD(v24) = v17;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, __int64, int, _DWORD, int))(*(_QWORD*)qword_140C65670
				+ 656i64))(
					qword_140C65670,
					3i64,
					v16,
					v20,
					v24,
					v21,
					0,
					1);
			v16 += v20;
			v17 += v21;
		}
		++v19;
		++v18;
		--v2;
	} while (v2);
	return 0i64;
}
// 140384CA1: variable 'v24' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C78440: using guessed type __int128 xmmword_140C78440;

