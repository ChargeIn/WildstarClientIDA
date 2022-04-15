#include "../winhttp.h"

//----- (00000001400C12B0) ----------------------------------------------------
void __fastcall sub_1400C12B0(__int64 a1, unsigned __int16* a2)
{
	unsigned __int16 v4; // di
	int v5; // esi
	int* v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // r15
	__int64(__fastcall * **v10)(_QWORD, _QWORD); // rcx
	void(__fastcall * *v11)(__int64, __int64, _QWORD, __int64*); // rax
	__int64 v12; // rdi
	__int64 v13; // r13
	int* v14; // rax
	__int64 v15; // rsi
	unsigned __int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rcx
	__int16* v19; // rdx
	void(__fastcall * *v20)(__int64, __int16*, _QWORD, __int64*); // rax
	__int64 v21; // rdi
	__int64 v22; // r15
	int* v23; // rax
	__int64 v24; // rsi
	unsigned __int64 v25; // rdi
	int v26; // eax
	int v27; // edi
	__int64 v28; // rdx
	__int64 v29; // rdx
	__int64 v30; // rdx
	int v31; // eax
	__int64 v32; // rax
	unsigned __int16 v33; // ax
	_QWORD* v34; // rsi
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64* v38; // rax
	__int64 v39; // [rsp+20h] [rbp-20h] BYREF
	__int64 v40; // [rsp+28h] [rbp-18h] BYREF
	__int64 v41; // [rsp+30h] [rbp-10h] BYREF
	__int64 v42; // [rsp+88h] [rbp+48h] BYREF
	__int16* v43; // [rsp+90h] [rbp+50h] BYREF
	__int64 v44; // [rsp+98h] [rbp+58h] BYREF

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
				while (2)
				{
					v6 = (int*)(a2 + 1);
					v42 = 0i64;
					v7 = sub_1400B8010((__int64*)a1, (__int64)(a2 + 1), &v42);
					v8 = v42;
					v9 = v7;
					if (v7 && v42)
					{
						v11 = *(void(__fastcall***)(__int64, __int64, _QWORD, __int64*))a1;
						v44 = 0i64;
						(*v11)(a1, v42, 0i64, &v44);
						if (v44)
						{
							v12 = *(_QWORD*)(v44 - 8);
							v13 = v42;
							v14 = sub_14018B280(2 * v12 + 18, 0);
							if (v14)
							{
								*((_QWORD*)v14 + 1) = v12;
								*(_QWORD*)v14 = off_140B55060;
							}
							else
							{
								v14 = 0i64;
							}
							v15 = (__int64)(v14 + 4);
							v16 = 2 * v12;
							sub_1407DB590(v14 + 4, (int*)v44, v16);
							*(_WORD*)(v16 + v15) = 0;
							v42 = v15;
							if (v13)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
						}
						a2 += v9 + 1;
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 48i64))(a1, v42);
						if (v44)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
						if (v42)
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16, 1i64);
					}
					else
					{
						++a2;
						switch (*(_WORD*)v6)
						{
						case 0:
							goto LABEL_25;
						case 0x24:
							if (!v5)
								goto LABEL_6;
							sub_1400A7EA0(*(_QWORD**)(a1 + 32), 36);
							a2 = (unsigned __int16*)v6 + 1;
							goto LABEL_24;
						case 0x28:
							v43 = 0i64;
							v17 = sub_1400B7780(a1, v6, (__int64*)&v43);
							v18 = *(_QWORD*)(a1 + 16);
							a2 = (unsigned __int16*)v6 + v17;
							if (!v18 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18))
							{
								if (v43)
								{
									v20 = *(void(__fastcall***)(__int64, __int16*, _QWORD, __int64*))a1;
									v44 = 0i64;
									(*v20)(a1, v43, 0i64, &v44);
									if (v44)
									{
										v21 = *(_QWORD*)(v44 - 8);
										v22 = (__int64)v43;
										v23 = sub_14018B280(2 * v21 + 18, 0);
										if (v23)
										{
											*((_QWORD*)v23 + 1) = v21;
											*(_QWORD*)v23 = off_140B55060;
										}
										else
										{
											v23 = 0i64;
										}
										v24 = (__int64)(v23 + 4);
										v25 = 2 * v21;
										sub_1407DB590(v23 + 4, (int*)v44, v25);
										*(_WORD*)(v25 + v24) = 0;
										v43 = (__int16*)v24;
										if (v22)
											(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
										if (v44)
											(*(void(__fastcall**)(__int64))(*(_QWORD*)(v44 - 16) + 8i64))(v44 - 16);
									}
								}
								if (*a2 == 93)
									++a2;
								(*(void(__fastcall**)(__int64, __int16*))(*(_QWORD*)a1 + 48i64))(a1, v43);
							}
							else
							{
								v19 = v43;
								*(_DWORD*)(a1 + 56) = 0;
								sub_1400B8980(a1, v19);
							}
							if (v43)
								(*(void(__fastcall**)(__int16*))(*((_QWORD*)v43 - 2) + 8i64))(v43 - 8);
							goto LABEL_24;
						case 0x31:
						case 0x32:
						case 0x33:
						case 0x34:
						case 0x35:
						case 0x36:
						case 0x37:
						case 0x38:
						case 0x39:
							v10 = *(__int64(__fastcall****)(_QWORD, _QWORD))(a1 + 8);
							*(_DWORD*)(a1 + 60) = 1;
							v5 = 0;
							*(_QWORD*)(a1 + 16) = (**v10)(v10, (unsigned int)*(unsigned __int16*)v6 - 49);
							if (v42)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
							continue;
						case 0x3F:
							v26 = *((unsigned __int16*)v6 + 1);
							a2 = (unsigned __int16*)v6 + 1;
							v27 = 0;
							switch (v26)
							{
							case 'b':
								LOBYTE(v27) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 128i64))(*(_QWORD*)(a1 + 8)) == 0;
								goto LABEL_68;
							case 'c':
								LOBYTE(v27) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 136i64))(*(_QWORD*)(a1 + 8)) == 0;
								goto LABEL_68;
							case 'e':
								++a2;
								v27 = 1;
								if (*a2 != 40)
									break;
								v40 = 0i64;
								a2 += sub_1400B7780(a1, (int*)a2, &v40);
								if (v40)
								{
									v27 = 0;
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
								}
								goto LABEL_69;
							case 'f':
								v30 = *(_QWORD*)(a1 + 16);
								if (v30)
								{
									v31 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v30 + 48i64))(*(_QWORD*)(a1 + 16));
									v8 = v42;
									if (v31 != 166)
									{
										LOBYTE(v27) = v31 != 167;
										++v27;
									}
								}
								++a2;
								break;
							case 'g':
								if (*++a2 == 40)
								{
									v39 = 0i64;
									a2 += sub_1400B7780(a1, (int*)a2, &v39);
									if (v39)
										(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
									v8 = v42;
								}
								v28 = *(_QWORD*)(a1 + 16);
								if (!v28)
									break;
								v27 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)v28 + 40i64))(*(_QWORD*)(a1 + 16));
								goto LABEL_69;
							case 'p':
								if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 144i64))(*(_QWORD*)(a1 + 8)))
									LOBYTE(v27) = (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 152i64))(*(_QWORD*)(a1 + 8)) != 0;
								else
									v27 = 2;
							LABEL_68:
								++a2;
							LABEL_69:
								v8 = v42;
								break;
							case 'q':
								v29 = *(_QWORD*)(a1 + 16);
								if (v29)
								{
									if ((*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v29 + 24i64))(*(_QWORD*)(a1 + 16)))
										v27 = 2
										- ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 24i64))(*(_QWORD*)(a1 + 16)) != 0);
									v8 = v42;
								}
								++a2;
								break;
							default:
								break;
							}
							if (!*a2)
								goto LABEL_25;
							if (*a2 == 47)
							{
								a2 += sub_1400B86F0(a1, v27, a2);
							LABEL_24:
								v8 = v42;
							}
							else
							{
								++a2;
							}
						LABEL_25:
							if (v8)
								(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16, 1i64);
							break;
						case 0x5E:
							*(_DWORD*)(a1 + 24) = 1;
							v5 = 0;
							goto LABEL_6;
						case 0x69:
							*(_DWORD*)(a1 + 56) = 1;
							v5 = 0;
							goto LABEL_6;
						case 0x7E:
							*(_DWORD*)(a1 + 24) = 2;
							v5 = 0;
						LABEL_6:
							if (v8)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
							continue;
						default:
							v32 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 64i64))(a1, v6);
							v8 = v42;
							if (!v32)
								v32 = 1i64;
							a2 = (unsigned __int16*)v6 + v32;
							goto LABEL_25;
						}
					}
					break;
				}
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
				v33 = sub_1400B9C90(v4);
			LABEL_88:
				v4 = v33;
			}
			else if (*(_DWORD*)(a1 + 24) == 2)
			{
				v33 = sub_140056430(v4);
				goto LABEL_88;
			}
			*(_DWORD*)(a1 + 24) = 0;
		}
		v34 = *(_QWORD**)(a1 + 32);
		v35 = v34[2];
		if (v35 + 2 == v34[3])
		{
			v36 = v35 - v34[1];
			v44 = 1i64;
			v37 = v36 >> 1;
			v38 = &v44;
			v41 = v37;
			if (v37)
				v38 = &v41;
			sub_1400A7F20(v34, v37 + *v38);
		}
		if (v34[2] != -2i64)
			*(_WORD*)(v34[2] + 2i64) = 0;
		*(_WORD*)v34[2] = v4;
		v34[2] += 2i64;
		++a2;
	}
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

