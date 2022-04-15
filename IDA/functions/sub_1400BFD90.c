//----- (00000001400BFD90) ----------------------------------------------------
void __fastcall sub_1400BFD90(__int64 a1, unsigned __int16* a2)
{
	unsigned __int16 v4; // di
	int v5; // esi
	int* v6; // rdi
	__int64 v7; // r15
	__int64(__fastcall * **v8)(_QWORD, _QWORD); // rcx
	void(__fastcall * *v9)(__int64, __int64, _QWORD, __int64*); // rax
	__int64 v10; // rdi
	__int64 v11; // r13
	int* v12; // rax
	__int64 v13; // rsi
	unsigned __int64 v14; // rdi
	__int16* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	void(__fastcall * *v18)(__int64, __int16*, _QWORD, __int64*); // rax
	unsigned __int64 v19; // rdi
	__int16* v20; // r15
	int* v21; // rax
	__int16* v22; // rsi
	unsigned __int64 v23; // rdi
	int v24; // eax
	int v25; // edi
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	int v29; // eax
	__int64 v30; // rax
	unsigned __int16 v31; // ax
	_QWORD* v32; // rsi
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64* v36; // rax
	__int64 v37; // [rsp+20h] [rbp-20h] BYREF
	__int64 v38; // [rsp+28h] [rbp-18h] BYREF
	__int64 v39; // [rsp+30h] [rbp-10h] BYREF
	__int64 v40; // [rsp+88h] [rbp+48h] BYREF
	__int16* v41; // [rsp+90h] [rbp+50h] BYREF
	__int64 v42; // [rsp+98h] [rbp+58h] BYREF

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
					v40 = 0i64;
					v7 = sub_1400B8010((__int64*)a1, (__int64)(a2 + 1), &v40);
					if (v7)
					{
						if (v40)
							break;
					}
					++a2;
					switch (*(_WORD*)v6)
					{
					case 0:
						goto LABEL_20;
					case 0x24:
						if (v5)
						{
							sub_1400A7EA0(*(_QWORD**)(a1 + 32), 36);
						LABEL_23:
							++a2;
							goto LABEL_20;
						}
						if (v40)
							LABEL_7:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
						break;
					case 0x28:
						v41 = 0i64;
						v16 = sub_1400B7780(a1, v6, (__int64*)&v41);
						v17 = *(_QWORD*)(a1 + 16);
						a2 = (unsigned __int16*)v6 + v16;
						if (!v17 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17))
						{
							if (v41)
							{
								v18 = *(void(__fastcall***)(__int64, __int16*, _QWORD, __int64*))a1;
								v42 = 0i64;
								(*v18)(a1, v41, 0i64, &v42);
								if (v42)
								{
									v19 = *(_QWORD*)(v42 - 8);
									v20 = v41;
									v21 = sub_14018B280(2 * v19 + 18, 0);
									if (v21)
									{
										*((_QWORD*)v21 + 1) = v19;
										*(_QWORD*)v21 = off_140B55060;
									}
									else
									{
										v21 = 0i64;
									}
									v22 = (__int16*)(v21 + 4);
									v23 = v19;
									sub_1407DB590(v21 + 4, (int*)v42, v23 * 2);
									v22[v23] = 0;
									v41 = v22;
									if (v20)
										(*(void(__fastcall**)(__int16*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 8);
									if (v42)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
								}
							}
							if (*a2 == 93)
								++a2;
							(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)a1 + 48i64))(a1, v41);
							v15 = v41;
						}
						else
						{
							sub_1400B8980(a1, v41);
							v15 = v41;
						}
						goto LABEL_18;
					case 0x31:
					case 0x32:
					case 0x33:
					case 0x34:
					case 0x35:
					case 0x36:
					case 0x37:
					case 0x38:
					case 0x39:
						v8 = *(__int64(__fastcall****)(_QWORD, _QWORD))(a1 + 8);
						*(_DWORD*)(a1 + 56) = 1;
						*(_QWORD*)(a1 + 16) = (**v8)(v8, (unsigned int)*(unsigned __int16*)v6 - 49);
						goto LABEL_9;
					case 0x3F:
						v24 = *((unsigned __int16*)v6 + 1);
						a2 = (unsigned __int16*)v6 + 1;
						v25 = 0;
						switch (v24)
						{
						case 'b':
							LOBYTE(v25) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 128i64))(*(_QWORD*)(a1 + 8)) == 0;
							goto LABEL_59;
						case 'c':
							LOBYTE(v25) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 136i64))(*(_QWORD*)(a1 + 8)) == 0;
							goto LABEL_59;
						case 'e':
							++a2;
							v25 = 1;
							if (*a2 == 40)
							{
								v38 = 0i64;
								a2 += sub_1400B7780(a1, (int*)a2, &v38);
								if (v38)
								{
									v25 = 0;
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
								}
							}
							break;
						case 'f':
							v28 = *(_QWORD*)(a1 + 16);
							if (v28)
							{
								v29 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 48i64))(v28);
								if (v29 != 166)
								{
									LOBYTE(v25) = v29 != 167;
									++v25;
								}
							}
							goto LABEL_59;
						case 'g':
							if (*++a2 == 40)
							{
								v37 = 0i64;
								a2 += sub_1400B7780(a1, (int*)a2, &v37);
								if (v37)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
							}
							v26 = *(_QWORD*)(a1 + 16);
							if (v26)
								v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 40i64))(v26);
							break;
						case 'p':
							if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 144i64))(*(_QWORD*)(a1 + 8)))
								LOBYTE(v25) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152i64))(*(_QWORD*)(a1 + 8)) != 0;
							else
								v25 = 2;
							goto LABEL_59;
						case 'q':
							v27 = *(_QWORD*)(a1 + 16);
							if (v27 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v27 + 24i64))(v27))
								v25 = 2
								- ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 24i64))(*(_QWORD*)(a1 + 16)) != 0);
						LABEL_59:
							++a2;
							break;
						default:
							break;
						}
						if (!*a2)
							goto LABEL_20;
						if (*a2 != 47)
							goto LABEL_23;
						a2 += sub_1400B86F0(a1, v25, a2);
						goto LABEL_20;
					case 0x5E:
					case 0x7E:
					LABEL_9:
						v5 = 0;
						if (v40)
							goto LABEL_7;
						continue;
					default:
						v30 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 64i64))(a1, v6);
						if (!v30)
							v30 = 1i64;
						a2 = (unsigned __int16*)v6 + v30;
						goto LABEL_20;
					}
				}
				v9 = *(void(__fastcall***)(__int64, __int64, _QWORD, __int64*))a1;
				v42 = 0i64;
				(*v9)(a1, v40, 0i64, &v42);
				if (v42)
				{
					v10 = *(_QWORD*)(v42 - 8);
					v11 = v40;
					v12 = sub_14018B280(2 * v10 + 18, 0);
					if (v12)
					{
						*((_QWORD*)v12 + 1) = v10;
						*(_QWORD*)v12 = off_140B55060;
					}
					else
					{
						v12 = 0i64;
					}
					v13 = (__int64)(v12 + 4);
					v14 = 2 * v10;
					sub_1407DB590(v12 + 4, (int*)v42, v14);
					*(_WORD*)(v14 + v13) = 0;
					v40 = v13;
					if (v11)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				}
				a2 += v7 + 1;
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, v40);
				v15 = (__int16*)v42;
			LABEL_18:
				if (v15)
					(*(void(__fastcall**)(__int16*))(*((_QWORD*)v15 - 2) + 8i64))(v15 - 8);
			LABEL_20:
				if (v40)
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16, 1i64);
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
				v31 = sub_1400B9C90(v4);
			LABEL_77:
				v4 = v31;
			}
			else if (*(_DWORD*)(a1 + 24) == 2)
			{
				v31 = sub_140056430(v4);
				goto LABEL_77;
			}
			*(_DWORD*)(a1 + 24) = 0;
		}
		v32 = *(_QWORD**)(a1 + 32);
		v33 = v32[2];
		if (v33 + 2 == v32[3])
		{
			v34 = v33 - v32[1];
			v42 = 1i64;
			v35 = v34 >> 1;
			v36 = &v42;
			v39 = v35;
			if (v35)
				v36 = &v39;
			sub_1400A7F20(v32, v35 + *v36);
		}
		if (v32[2] != -2i64)
			*(_WORD*)(v32[2] + 2i64) = 0;
		*(_WORD*)v32[2] = v4;
		v32[2] += 2i64;
		++a2;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

