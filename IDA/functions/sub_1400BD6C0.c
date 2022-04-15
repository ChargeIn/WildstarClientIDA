//----- (00000001400BD6C0) ----------------------------------------------------
void __fastcall sub_1400BD6C0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int16 v4; // di
	int v5; // esi
	int* v6; // rdi
	__int64 v7; // r15
	__int64 v8; // rax
	__int64(__fastcall * **v9)(_QWORD, _QWORD); // rcx
	void(__fastcall * *v10)(__int64, __int64, _QWORD, __int64*); // rax
	__int64 v11; // rdi
	__int64 v12; // r13
	int* v13; // rax
	__int64 v14; // rsi
	unsigned __int64 v15; // rdi
	__int16* v16; // rax
	__int64 v17; // rax
	__int64 v18; // rcx
	void(__fastcall * *v19)(__int64, __int16*, _QWORD, __int64*); // rax
	unsigned __int64 v20; // rdi
	__int16* v21; // r15
	int* v22; // rax
	__int16* v23; // rsi
	unsigned __int64 v24; // rdi
	int v25; // eax
	int v26; // edi
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	int v30; // eax
	__int64 v31; // rax
	unsigned __int16 v32; // ax
	_QWORD* v33; // rsi
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64* v37; // rax
	__int64 v38; // [rsp+20h] [rbp-20h] BYREF
	__int64 v39; // [rsp+28h] [rbp-18h] BYREF
	__int64 v40; // [rsp+30h] [rbp-10h] BYREF
	__int64 v41; // [rsp+88h] [rbp+48h] BYREF
	__int16* v42; // [rsp+90h] [rbp+50h] BYREF
	__int64 v43; // [rsp+98h] [rbp+58h] BYREF

	while (1)
	{
		while (1)
		{
			while (1)
			{
				v4 = *a2;
				v5 = 1;
				if (*a2 != 36)
					break;
				while (1)
				{
					v6 = (int*)(a2 + 1);
					v41 = 0i64;
					v7 = sub_1400B8010((__int64*)a1, (__int64)(a2 + 1), &v41);
					if (v7)
					{
						if (v41)
							break;
					}
					++a2;
					switch (*(_WORD*)v6)
					{
					case 0:
						goto LABEL_23;
					case 0x24:
						if (v5)
						{
							sub_1400A7EA0(*(_QWORD**)(a1 + 32), 36);
						LABEL_26:
							++a2;
							goto LABEL_23;
						}
						if (v41)
							LABEL_7:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16);
						break;
					case 0x28:
						v42 = 0i64;
						v17 = sub_1400B7780(a1, v6, (__int64*)&v42);
						v18 = *(_QWORD*)(a1 + 16);
						a2 = (unsigned __int16*)v6 + v17;
						if (!v18 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18))
						{
							if (v42)
							{
								v19 = *(void(__fastcall***)(__int64, __int16*, _QWORD, __int64*))a1;
								v43 = 0i64;
								(*v19)(a1, v42, 0i64, &v43);
								if (v43)
								{
									v20 = *(_QWORD*)(v43 - 8);
									v21 = v42;
									v22 = sub_14018B280(2 * v20 + 18, 0);
									if (v22)
									{
										*((_QWORD*)v22 + 1) = v20;
										*(_QWORD*)v22 = off_140B55060;
									}
									else
									{
										v22 = 0i64;
									}
									v23 = (__int16*)(v22 + 4);
									v24 = v20;
									sub_1407DB590(v22 + 4, (int*)v43, v24 * 2);
									v23[v24] = 0;
									v42 = v23;
									if (v21)
										(*(void(__fastcall**)(__int16*))(*((_QWORD*)v21 - 2) + 8i64))(v21 - 8);
									if (v43)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v43 - 16) + 8i64))(v43 - 16);
								}
							}
							if (*a2 == 93)
								++a2;
							(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)a1 + 48i64))(a1, v42);
							v16 = v42;
						}
						else
						{
							sub_1400B8980(a1, v42);
							v16 = v42;
						}
						goto LABEL_21;
					case 0x31:
					case 0x32:
					case 0x33:
					case 0x34:
					case 0x35:
					case 0x36:
					case 0x37:
					case 0x38:
					case 0x39:
						v9 = *(__int64(__fastcall****)(_QWORD, _QWORD))(a1 + 8);
						*(_DWORD*)(a1 + 56) = 1;
						v5 = 0;
						*(_QWORD*)(a1 + 16) = (**v9)(v9, (unsigned int)*(unsigned __int16*)v6 - 49);
						if (!v41)
							continue;
						goto LABEL_7;
					case 0x3F:
						v25 = *((unsigned __int16*)v6 + 1);
						a2 = (unsigned __int16*)v6 + 1;
						v26 = 0;
						switch (v25)
						{
						case 'b':
							LOBYTE(v26) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 128i64))(*(_QWORD*)(a1 + 8)) == 0;
							goto LABEL_62;
						case 'c':
							LOBYTE(v26) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 136i64))(*(_QWORD*)(a1 + 8)) == 0;
							goto LABEL_62;
						case 'e':
							++a2;
							v26 = 1;
							if (*a2 == 40)
							{
								v39 = 0i64;
								a2 += sub_1400B7780(a1, (int*)a2, &v39);
								if (v39)
								{
									v26 = 0;
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
								}
							}
							break;
						case 'f':
							v29 = *(_QWORD*)(a1 + 16);
							if (v29)
							{
								v30 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 48i64))(v29);
								if (v30 != 166)
								{
									LOBYTE(v26) = v30 != 167;
									++v26;
								}
							}
							goto LABEL_62;
						case 'g':
							if (*++a2 == 40)
							{
								v38 = 0i64;
								a2 += sub_1400B7780(a1, (int*)a2, &v38);
								if (v38)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
							}
							v27 = *(_QWORD*)(a1 + 16);
							if (v27)
								v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 40i64))(v27);
							break;
						case 'p':
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 144i64))(*(_QWORD*)(a1 + 8)))
								LOBYTE(v26) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152i64))(*(_QWORD*)(a1 + 8)) != 0;
							else
								v26 = 2;
							goto LABEL_62;
						case 'q':
							v28 = *(_QWORD*)(a1 + 16);
							if (v28 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v28 + 24i64))(v28))
								v26 = 2
								- ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 24i64))(*(_QWORD*)(a1 + 16)) != 0);
						LABEL_62:
							++a2;
							break;
						default:
							break;
						}
						if (!*a2)
							goto LABEL_23;
						if (*a2 != 47)
							goto LABEL_26;
						a2 += sub_1400B86F0(a1, v26, a2);
						goto LABEL_23;
					case 0x5E:
						v8 = v41;
						*(_DWORD*)(a1 + 24) = 1;
						v5 = 0;
						if (!v8)
							continue;
						goto LABEL_9;
					case 0x7E:
						v8 = v41;
						*(_DWORD*)(a1 + 24) = 2;
						v5 = 0;
						if (!v8)
							continue;
					LABEL_9:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
						continue;
					default:
						v31 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 64i64))(a1, v6);
						if (!v31)
							v31 = 1i64;
						a2 = (unsigned __int16*)v6 + v31;
						goto LABEL_23;
					}
				}
				v10 = *(void(__fastcall***)(__int64, __int64, _QWORD, __int64*))a1;
				v43 = 0i64;
				(*v10)(a1, v41, 0i64, &v43);
				if (v43)
				{
					v11 = *(_QWORD*)(v43 - 8);
					v12 = v41;
					v13 = sub_14018B280(2 * v11 + 18, 0);
					if (v13)
					{
						*((_QWORD*)v13 + 1) = v11;
						*(_QWORD*)v13 = off_140B55060;
					}
					else
					{
						v13 = 0i64;
					}
					v14 = (__int64)(v13 + 4);
					v15 = 2 * v11;
					sub_1407DB590(v13 + 4, (int*)v43, v15);
					*(_WORD*)(v15 + v14) = 0;
					v41 = v14;
					if (v12)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
				}
				a2 += v7 + 1;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, v41);
				v16 = (__int16*)v43;
			LABEL_21:
				if (v16)
					(*(void(__fastcall**)(__int16*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 8);
			LABEL_23:
				if (v41)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16, 1i64);
			}
			if (v4 != 92 || a2[1] != 110)
				break;
			a2 += 2;
			sub_1400A7EA0(*(_QWORD**)(a1 + 32), 10);
		}
		if (!v4)
			break;
		if ((unsigned __int16)(v4 - 65) <= 0x19u
			|| (unsigned __int16)(v4 - 97) <= 0x19u
			|| (unsigned __int16)(v4 - 48) <= 9u)
		{
			if (*(_DWORD*)(a1 + 24) == 1)
			{
				v32 = sub_1400B9C90(v4);
			LABEL_80:
				v4 = v32;
			}
			else if (*(_DWORD*)(a1 + 24) == 2)
			{
				v32 = sub_140056430(v4);
				goto LABEL_80;
			}
			*(_DWORD*)(a1 + 24) = 0;
		}
		v33 = *(_QWORD**)(a1 + 32);
		v34 = v33[2];
		if (v34 + 2 == v33[3])
		{
			v35 = v34 - v33[1];
			v43 = 1i64;
			v36 = v35 >> 1;
			v37 = &v43;
			v40 = v36;
			if (v36)
				v37 = &v40;
			sub_1400A7F20(v33, v36 + *v37);
		}
		if (v33[2] != -2i64)
			*(_WORD*)(v33[2] + 2i64) = 0;
		*(_WORD*)v33[2] = v4;
		v33[2] += 2i64;
		++a2;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

