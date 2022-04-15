//----- (0000000140366730) ----------------------------------------------------
__int64 __fastcall sub_140366730(__int64 a1, int a2)
{
	__int64* v3; // rcx
	__int64 v4; // rax
	int v6; // r15d
	__int64 v7; // r8
	int v8; // r14d
	__int64 v10; // rsi
	_QWORD* i; // rdi
	__int64 j; // rbx
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rcx
	int v16; // esi
	__int64 v17; // rbx
	__int64 v18; // rdi
	int v19; // ebp
	__int64 k; // rbx
	int v21; // eax
	__int64 m; // rbx
	__int64 n; // rbx
	__int64 v24; // r8
	_QWORD* v25; // rbp
	__int64 v26; // rbx
	__int64 v27; // rdi
	_QWORD* v28; // rax
	int v29; // r14d
	__int64* v30; // rax
	__int64 v31; // r12
	__int64 v32; // r8
	__int64 ii; // rsi
	_QWORD* v34; // r8
	__int64 v35; // rdx
	__int64 v36; // rdx
	int v37[4]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v38; // [rsp+80h] [rbp+8h] BYREF
	int v39; // [rsp+88h] [rbp+10h]
	__int64 v40; // [rsp+90h] [rbp+18h] BYREF

	v3 = *(__int64**)(a1 + 6216);
	v37[0] = -1;
	v4 = *v3;
	v6 = 0;
	v39 = 0;
	(*(void(__fastcall**)(__int64*, int*))(v4 + 32))(v3, v37);
	v8 = a2 == 8;
	v39 = v8;
	if (a2 == 17)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65688 + 128i64))(
			qword_140C65688,
			a1 + 3504,
			0i64,
			0i64);
		return 0i64;
	}
	else
	{
		v10 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 528i64);
		for (i = *(_QWORD**)(a1 + 5464); i != *(_QWORD**)(a1 + 5448); i = (_QWORD*)i[41])
		{
			if ((unsigned int)sub_1403913A0((__int64)i, v8, v10))
			{
				if ((*(_DWORD*)(a1 + 128) & 0x400) != 0)
				{
					for (j = i[19]; j; j = *(_QWORD*)(j + 40))
					{
						if (!*(_QWORD*)(j + 64))
							break;
						sub_140390390(j, 128, v7, v10);
					}
				}
				sub_1403914B0((__int64)i, 128, v7, v10);
				v13 = i[3];
				if (v13)
					v14 = v13 + 64;
				else
					v14 = *(_QWORD*)(i[1] + 16i64) + 3504i64;
				(*(void(__fastcall**)(__int64, __int64, _QWORD*, __int64))(*(_QWORD*)qword_140C65688 + 128i64))(
					qword_140C65688,
					v14,
					i + 22,
					v10);
			}
		}
		v15 = *(_QWORD*)(a1 + 5432);
		if (!v15 || *(_QWORD*)(a1 + 5448) != *(_QWORD*)(a1 + 5440))
		{
			v16 = v15 != 0 ? 0x80 : 0;
			if (v15)
			{
				v6 = 1;
				v17 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 528i64);
				v38 = v17;
				if (v17)
					(**(void(__fastcall***)(__int64))v17)(v17);
				v15 = v38;
			}
			else
			{
				v38 = 0i64;
				v17 = 0i64;
				v6 = 2;
			}
			v18 = v38;
			if ((v6 & 2) != 0)
			{
				v6 &= ~2u;
				if (v15)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			}
			if ((v6 & 1) != 0)
			{
				v6 &= ~1u;
				if (v17)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			}
			v19 = 0;
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18);
			for (k = *(_QWORD*)(a1 + 5448); k != *(_QWORD*)(a1 + 5440); v19 |= v21)
			{
				v21 = sub_1403913A0(k, v8, 0i64);
				k = *(_QWORD*)(k + 328);
			}
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 32i64))(v18);
			if (v19 || !v16)
			{
				if ((*(_DWORD*)(a1 + 128) & 0x400) != 0)
				{
					for (m = *(_QWORD*)(a1 + 5416); m; m = *(_QWORD*)(m + 72))
						sub_140390390(m, v16, v7, v18);
				}
				for (n = *(_QWORD*)(a1 + 5448); n != *(_QWORD*)(a1 + 5440); n = *(_QWORD*)(n + 328))
					sub_1403914B0(n, v16, v7, v18);
				if (v16)
					v24 = a1 + 1872;
				else
					v24 = 0i64;
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65688 + 128i64))(
					qword_140C65688,
					a1 + 3504,
					v24,
					v18);
			}
		}
		v25 = *(_QWORD**)(a1 + 5440);
		if (v25)
		{
			v26 = v38;
			v27 = v40;
			do
			{
				v28 = *(_QWORD**)(a1 + 5432);
				v29 = 0;
				if (v28 != v25)
					v29 = 128;
				if (v28 == v25)
				{
					v6 |= 8u;
					v27 = 0i64;
					v30 = &v40;
					v40 = 0i64;
				}
				else
				{
					v6 |= 4u;
					v26 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 528i64);
					v38 = v26;
					if (v26)
						(**(void(__fastcall***)(__int64))v26)(v26);
					v30 = &v38;
				}
				v31 = *v30;
				if ((v6 & 8) != 0)
				{
					v6 &= ~8u;
					if (v27)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
				}
				if ((v6 & 4) != 0)
				{
					v6 &= ~4u;
					if (v26)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
				}
				if ((unsigned int)sub_1403913A0((__int64)v25, v39, v31) || !v29)
				{
					if ((*(_DWORD*)(a1 + 128) & 0x400) != 0)
					{
						for (ii = v25[19]; ii; ii = *(_QWORD*)(ii + 40))
						{
							if (!*(_QWORD*)(ii + 64))
								break;
							sub_140390390(ii, v29, v32, v31);
						}
					}
					sub_1403914B0((__int64)v25, v29, v32, v31);
					if (v29)
						v34 = v25 + 22;
					else
						v34 = 0i64;
					v35 = v25[3];
					if (v35)
						v36 = v35 + 64;
					else
						v36 = *(_QWORD*)(v25[1] + 16i64) + 3504i64;
					(*(void(__fastcall**)(__int64, __int64, _QWORD*, __int64))(*(_QWORD*)qword_140C65688 + 128i64))(
						qword_140C65688,
						v36,
						v34,
						v31);
				}
				v25 = (_QWORD*)v25[41];
			} while (v25);
		}
		return 0i64;
	}
}
// 14036682F: variable 'v7' is possibly undefined
// 140366B32: variable 'v32' is possibly undefined
// 140C65688: using guessed type __int64 qword_140C65688;
// 140366730: using guessed type int var_48[4];

