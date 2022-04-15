//----- (0000000140849350) ----------------------------------------------------
void** __fastcall sub_140849350(__int64 a1, unsigned int a2)
{
	void** result; // rax
	__int64 v3; // r15
	__int64 v5; // r8
	__int64* v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64* v9; // rax
	__int64 v10; // r14
	char v11; // bp
	__int64 v12; // r12
	int v13; // ebx
	_QWORD* v14; // rsi
	int v15; // ebx
	__int64* v16; // r12
	_QWORD* v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rcx
	_QWORD* v21; // rax
	__int64 v22; // rsi
	__int64 v23; // rax
	int v24; // edx
	int v25; // ebx
	char v26[8]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v27[3]; // [rsp+38h] [rbp-50h] BYREF
	void* retaddr; // [rsp+88h] [rbp+0h] BYREF
	__int64* v29; // [rsp+A0h] [rbp+18h] BYREF
	__int64 v30; // [rsp+A8h] [rbp+20h] BYREF

	result = &retaddr;
	v3 = (int)a2;
	if (a2 != -1)
	{
		v5 = (int)(a2 + 1);
		if (v5 >= 4)
		{
		LABEL_6:
			v7 = a1 + 704;
		}
		else
		{
			v6 = (__int64*)(a1 + 928 + 8i64 * (int)(a2 + 1));
			while (1)
			{
				v7 = *v6;
				if (*v6)
					break;
				++v5;
				++v6;
				if (v5 >= 4)
					goto LABEL_6;
			}
		}
		v8 = (int)(a2 - 1);
		if ((int)(a2 - 1) < 0)
		{
		LABEL_11:
			v10 = a1 + 480;
		}
		else
		{
			v9 = (__int64*)(a1 + 928 + 8i64 * (int)(a2 - 1));
			while (1)
			{
				v10 = *v9;
				if (*v9)
					break;
				--v9;
				if (--v8 < 0)
					goto LABEL_11;
			}
		}
		v11 = 0;
		v29 = (__int64*)(a1 + 8i64 * a2 + 928);
		v12 = *v29;
		if (*v29)
		{
			nullsub_1(v7);
			v13 = v3;
			if ((int)v3 < 4)
			{
				v14 = (_QWORD*)(a1 + 928 + 8 * v3);
				do
				{
					if (*v14 && (*(unsigned __int8(__fastcall**)(_QWORD))(*(_QWORD*)*v14 + 88i64))(*v14) && v13 != (_DWORD)v3)
						break;
					++v13;
					++v14;
				} while (v13 < 4);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 72i64))(v12);
			v15 = dword_140C10F28;
			(**(void(__fastcall***)(__int64, _QWORD))v12)(v12, 0i64);
			sub_140881720(v15, v12);
			v16 = v29;
			*v29 = 0i64;
		}
		else
		{
			v16 = (__int64*)(a1 + 8i64 * a2 + 928);
		}
		v17 = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 24i64);
		v18 = v17[20];
		v27[0] = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)v18 + 448i64))(
			v18,
			(unsigned int)v3,
			v27,
			v17[22]);
		if (!v27[0])
			goto LABEL_25;
		v29 = 0i64;
		if ((unsigned int)sub_14082FAF0((__int64)&off_140C10F70, *(_DWORD*)(v27[0] + 32), (__int64*)&v29) != 1)
			goto LABEL_25;
		(*(void(__fastcall**)(__int64*, char*))(*v29 + 24))(v29, v26);
		if (v26[5])
		{
			(*(void(__fastcall**)(__int64*, __int64(__fastcall***)()))(*v29 + 8))(v29, &off_140C10F70);
		}
		else
		{
			if (v26[4])
			{
				v21 = (_QWORD*)sub_1408819F0(dword_140C10F28, 72i64);
				v22 = (__int64)v21;
				if (!v21)
					goto LABEL_25;
				v21[1] = 0i64;
				*v21 = off_1409A3140;
			}
			else
			{
				v23 = sub_1408819F0(dword_140C10F28, 216i64);
				v22 = v23;
				if (!v23)
					goto LABEL_25;
				*(_QWORD*)(v23 + 8) = 0i64;
				*(_QWORD*)v23 = off_1409A31C0;
				*(_QWORD*)(v23 + 72) = 0i64;
				*(_WORD*)(v23 + 96) = 0;
				*(_QWORD*)(v23 + 104) = 0i64;
				*(_QWORD*)(v23 + 128) = 0i64;
				*(_WORD*)(v23 + 152) = 0;
				*(_QWORD*)(v23 + 160) = 0i64;
			}
			if (v22)
			{
				v30 = v17[24];
				v24 = HIDWORD(v30) & 0x3FFFF;
				if ((v30 & 0x3FFFF00000000i64) != 0)
				{
					do
					{
						++v11;
						v24 &= v24 - 1;
					} while (v24);
				}
				LODWORD(v30) = *(_DWORD*)(a1 + 472);
				HIDWORD(v30) = HIDWORD(v30) & 0xA003FFFF | 0x800000 | (((v11
					* (((HIDWORD(v30) & 0xFF03FFFF | 0x800000) >> 18) & 0x3F)) & 0xF8 | 0xFFFFFC00) << 21) & 0xBFFFFFFF | 0x20000000;
				if ((*(unsigned int(__fastcall**)(__int64, __int64*, __int64*, _QWORD, _QWORD*, __int64*))(*(_QWORD*)v22 + 64i64))(
					v22,
					v29,
					v27,
					(unsigned int)v3,
					v17,
					&v30) == 1)
				{
					*v16 = v22;
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 56i64))(v7, v22);
					v19 = *(_QWORD*)v22;
					v20 = v22;
				LABEL_26:
					result = (void**)(*(__int64(__fastcall**)(__int64, __int64))(v19 + 56))(v20, v10);
					if (v27[0])
						return (void**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27[0] + 16i64))(v27[0]);
					return result;
				}
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 72i64))(v22);
				v25 = dword_140C10F28;
				(**(void(__fastcall***)(__int64, _QWORD))v22)(v22, 0i64);
				sub_140881720(v25, v22);
			}
		}
	LABEL_25:
		v19 = *(_QWORD*)v7;
		v20 = v7;
		goto LABEL_26;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409A3140: using guessed type __int64 (__fastcall *off_1409A3140[8])();
// 1409A31C0: using guessed type __int64 (__fastcall *off_1409A31C0[8])();
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();

