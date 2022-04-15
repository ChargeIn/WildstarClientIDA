//----- (00000001403957D0) ----------------------------------------------------
__int64 __fastcall sub_1403957D0(__int64* a1)
{
	__int64* v2; // r14
	__int64 v3; // rsi
	int v4; // edi
	int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // rax
	unsigned __int64 v13; // rsi
	__int64 v14; // rdi
	int v15; // edi
	unsigned __int64 v16; // rsi
	unsigned __int64 v17; // rbp
	_DWORD* v18; // rax
	_DWORD* v19; // rdi
	unsigned int v20; // r8d
	int v21; // eax
	int v22; // eax
	unsigned __int64 v23; // rax
	unsigned int v24; // [rsp+20h] [rbp-48h] BYREF
	unsigned int v25; // [rsp+24h] [rbp-44h] BYREF
	__int64 v26; // [rsp+28h] [rbp-40h] BYREF
	__int64 v27[2]; // [rsp+30h] [rbp-38h] BYREF

	v2 = *(__int64**)(a1[1] + 24);
	if ((*(unsigned int(__fastcall**)(__int64*))(*v2 + 40))(v2) != 3
		|| (v3 = a1[2],
			v4 = (*(__int64(__fastcall**)(__int64*))(*v2 + 64))(v2),
			v4 == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3)))
	{
		v6 = (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, unsigned int*))(*v2 + 392))(v2, 2i64, 0i64, &v25);
		v7 = v25;
		v8 = a1[2];
		if (!v6)
			v7 = 0i64;
		v25 = v7;
		(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v8 + 224i64))(v8, v7, 0xFFFFFFFFi64, 0i64);
		v9 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, unsigned int*))(*v2 + 392))(v2, 0i64, 0i64, &v24);
		v10 = v24;
		v11 = a1[2];
		if (!v9)
			v10 = 0i64;
		v24 = v10;
		(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v11 + 448i64))(v11, v10, -1i64);
		if (a1[4])
		{
			v12 = *v2;
			v27[0] = 0i64;
			v27[1] = 0i64;
			if (!(*(unsigned int(__fastcall**)(__int64*, __int64, _QWORD, __int64*))(v12 + 392))(v2, 1i64, 0i64, v27))
				LODWORD(v27[0]) = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 24i64))(a1[2]) + 12);
			v13 = 0i64;
			if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 280i64))(a1[2]))
			{
				v14 = 0i64;
				do
				{
					sub_140391230((_QWORD*)(v14 + a1[4]), v27[0]);
					++v13;
					v14 += 336i64;
				} while (v13 < (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1[2] + 280i64))(a1[2]));
			}
		}
		v26 = 0i64;
		v15 = (*(__int64(__fastcall**)(__int64*, __int64*))(*v2 + 400))(v2, &v26);
		if (v15 >= 0)
		{
			v16 = 0i64;
			v17 = (*(__int64 (**)(void))(*(_QWORD*)v26 + 16i64))();
			if (v17)
			{
				do
				{
					v18 = (_DWORD*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v26 + 24i64))(v26, v16);
					v19 = v18;
					v20 = v18[1];
					if (v20)
					{
						v21 = *v18;
						if (v21)
						{
							v22 = v21 - 1;
							if (v22)
							{
								if (v22 == 1)
									(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)a1[2] + 224i64))(
										a1[2],
										(unsigned int)v19[2],
										-1i64,
										v20);
							}
							else
							{
								(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[2] + 472i64))(a1[2], (unsigned int)v19[2]);
								if (a1[4])
								{
									v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[2] + 296i64))(
										a1[2],
										(unsigned int)v19[1]);
									if (v23 < a1[3])
										sub_140391230((_QWORD*)(a1[4] + 336 * v23), v19[2]);
								}
							}
						}
						else
						{
							(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1[2] + 456i64))(a1[2], (unsigned int)v19[2]);
						}
					}
					++v16;
				} while (v16 < v17);
			}
			v15 = 0;
		}
		if (v26)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		return (unsigned int)v15;
	}
	else
	{
		sub_140377140(a1[1]);
		return 0i64;
	}
}

