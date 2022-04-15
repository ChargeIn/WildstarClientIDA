//----- (00000001402AD8C0) ----------------------------------------------------
void __fastcall sub_1402AD8C0(__int64 a1)
{
	__int64* v2; // rsi
	_DWORD* v3; // rbx
	__int64 v4; // rbp
	int v5; // edx
	int v6; // edx
	int v7; // edx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rcx
	_DWORD* v11; // rdx
	int v12; // ecx
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // edx
	__int64 v16; // rdx
	int v17; // eax
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int128 v20; // [rsp+20h] [rbp-18h] BYREF

	v2 = (__int64*)(a1 + 104);
	v3 = (_DWORD*)(a1 + 28);
	v4 = 4i64;
	do
	{
		v5 = *(v3 - 5);
		if (v5)
		{
			v6 = v5 - 1;
			if (v6)
			{
				v7 = v6 - 1;
				if (v7)
				{
					if (v7 != 1)
						goto LABEL_29;
					v8 = *(_QWORD*)(v3 - 3);
					if (!v8 || *(_DWORD*)(v8 + 52) != 5)
						goto LABEL_29;
					v9 = *(_QWORD*)(v8 + 168);
				}
				else
				{
					v8 = *(_QWORD*)(v3 - 3);
					if (!v8 || *(_DWORD*)(v8 + 52) != 5)
						goto LABEL_29;
					v9 = *(_QWORD*)(v8 + 504);
				}
				v10 = (unsigned int)(*v3 + *(_DWORD*)(v8 + 44) * *(v3 - 1));
			}
			else
			{
				v13 = *(_QWORD*)(v3 - 3);
				if (!v13 || *(_DWORD*)(v13 + 52) != 5)
					goto LABEL_29;
				v10 = (unsigned int)*v3;
				v9 = *(_QWORD*)(v13 + 224);
			}
			v11 = (_DWORD*)(v9 + 4 * v10);
			v12 = *(_DWORD*)(*(_QWORD*)a1 + 240i64);
			if (*v11 == v12)
				goto LABEL_29;
			*v11 = v12;
			goto LABEL_22;
		}
		v14 = *(_QWORD*)(v3 - 3);
		if (!v14)
			v14 = *(_QWORD*)(*(_QWORD*)a1 + 8584i64);
		v15 = *(_DWORD*)(*(_QWORD*)a1 + 240i64);
		if (*(_DWORD*)(v14 + 120) != v15)
		{
			*(_DWORD*)(v14 + 120) = v15;
		LABEL_22:
			v16 = *v2;
			if (*v2)
			{
				v17 = dword_140C40590;
				if (*(_DWORD*)qword_140C63750 < dword_140C40590)
					v17 = *(_DWORD*)qword_140C63750;
				if (byte_140C405A0[v17])
				{
					v18 = *(_QWORD*)(*(_QWORD*)a1 + 6360i64);
					if (v18)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 944i64))(v18);
					}
					else
					{
						v19 = *(_QWORD*)(*(_QWORD*)a1 + 6352i64);
						v20 = 0i64;
						(*(void(__fastcall**)(__int64, __int64, __int128*))(*(_QWORD*)v19 + 400i64))(v19, v16, &v20);
					}
				}
			}
		}
	LABEL_29:
		++v2;
		v3 += 6;
		--v4;
	} while (v4);
}
// 140C40590: using guessed type int dword_140C40590;
// 140C405A0: using guessed type _BYTE byte_140C405A0[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 1402AD8C0: using guessed type __int128 var_18;

