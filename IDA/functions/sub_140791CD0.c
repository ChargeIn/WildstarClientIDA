//----- (0000000140791CD0) ----------------------------------------------------
__int64 __fastcall sub_140791CD0(_QWORD* a1)
{
	int v1; // esi
	_DWORD* v3; // rax
	int v4; // ebx
	__int64 v5; // rax
	_BYTE* v6; // r14
	_DWORD* v7; // rax
	const char* v8; // r10
	__int64 v9; // rax
	const char* v10; // r9
	const char* v11; // rax
	_BYTE* v12; // rax
	unsigned __int64* v13; // r8
	_QWORD* v14; // rdi
	unsigned __int64 v15; // rsi
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int v18; // esi
	unsigned __int8* v19; // rax
	double v20; // xmm0_8
	__int64 v21; // rdx
	bool v22; // zf
	signed __int8 v23; // cl
	__int64 v24; // rdx
	signed __int8 v25; // cl
	double v26; // xmm0_8
	double v27; // xmm0_8
	__int64 v28; // rbx
	_DWORD* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rdi
	char* v32; // r12
	unsigned __int64 v33; // r15
	__int64 v34; // rsi
	__int64 v35; // rbx
	__int64 v36; // rax
	char v37; // al
	unsigned __int64 v38; // r8
	int v40; // [rsp+20h] [rbp-E0h]
	unsigned __int64 v41; // [rsp+28h] [rbp-D8h]
	unsigned __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
	unsigned __int64* v43; // [rsp+40h] [rbp-C0h] BYREF
	int v44; // [rsp+48h] [rbp-B8h]
	_QWORD* v45; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v46[64]; // [rsp+58h] [rbp-A8h] BYREF
	char v47[8]; // [rsp+258h] [rbp+158h] BYREF
	signed __int8 v48[32]; // [rsp+260h] [rbp+160h] BYREF
	char v49[512]; // [rsp+280h] [rbp+180h] BYREF

	v1 = 1;
	v40 = 1;
	v3 = sub_1400580E0((__int64)a1, 1);
	v4 = 0;
	if (v3[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v3))
		{
		LABEL_7:
			v7 = sub_1400580E0((__int64)a1, 1);
			if (v7 == dword_140A12138 || (v9 = (int)v7[2], (_DWORD)v9 == -1))
				v10 = aNoValue;
			else
				v10 = off_140A123B0[v9];
			v11 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v8, v10);
			sub_140056570(a1, 1u, v11);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v3 = sub_1400580E0((__int64)a1, 1);
	}
	v5 = *(_QWORD*)v3;
	v6 = (_BYTE*)(v5 + 32);
	if (v5 == -32)
		goto LABEL_7;
	v12 = &v6[*(_QWORD*)(v5 + 16)];
	v13 = v46;
	v14 = a1;
	v45 = a1;
	v44 = 0;
	v41 = (unsigned __int64)v12;
	v43 = v46;
	if (v6 < v12)
	{
		while (1)
		{
			if (*v6 == 37)
			{
				if (v6[1] == 37)
				{
					if (v13 >= (unsigned __int64*)v47 && v13 != v46)
					{
						sub_140058710((__int64)v14, v46, (char*)v13 - (char*)v46);
						++v44;
						v43 = v46;
						sub_1400575B0((__int64)&v43);
						v13 = v43;
					}
					*(_BYTE*)v13 = v6[1];
					v13 = (unsigned __int64*)((char*)v43 + 1);
					v6 += 2;
					v43 = (unsigned __int64*)((char*)v43 + 1);
				}
				else
				{
					v18 = v1 + 1;
					v40 = v18;
					v19 = sub_140791BD0(a1, v6 + 1, v48);
					v6 = v19 + 1;
					switch (*v19)
					{
					case 'E':
					case 'G':
					case 'e':
					case 'f':
					case 'g':
						v27 = sub_140056C40(a1, v18);
						sub_1407DDB98(v49, v48, v27);
						goto LABEL_42;
					case 'X':
					case 'o':
					case 'u':
					case 'x':
						v24 = -1i64;
						do
							v22 = v48[++v24] == 0;
						while (!v22);
						v25 = v47[v24 + 7];
						*(_WORD*)&v47[v24 + 7] = word_140C39824;
						v48[v24] = v25;
						v48[v24 + 1] = 0;
						v26 = sub_140056C40(a1, v18);
						sub_1407DDB98(v49, v48, (unsigned int)(int)v26);
						goto LABEL_42;
					case 'c':
						goto LABEL_26;
					case 'd':
					case 'i':
						v21 = -1i64;
						do
							v22 = v48[++v21] == 0;
						while (!v22);
						v23 = v47[v21 + 7];
						*(_WORD*)&v47[v21 + 7] = word_140C39824;
						v48[v21] = v23;
						v48[v21 + 1] = 0;
					LABEL_26:
						v20 = sub_140056C40(a1, v18);
						sub_1407DDB98(v49, v48, (unsigned int)(int)v20);
						goto LABEL_42;
					case 'q':
						sub_1407918F0(a1, (__int64)&v43, v18);
						goto LABEL_35;
					case 's':
						v28 = sub_140056BB0(a1, v18, &v42);
						if (!sub_1407DE0B4((__int64)v48, 0x2Eu) && v42 >= 0x64)
						{
							v29 = sub_1400580E0((__int64)a1, v18);
							v30 = a1[2];
							*(_QWORD*)v30 = *(_QWORD*)v29;
							*(_DWORD*)(v30 + 8) = v29[2];
							a1[2] += 16i64;
							sub_1400577A0((__int64)&v43);
						LABEL_35:
							v13 = v43;
							break;
						}
						sub_1407DDB98(v49, v48, v28);
					LABEL_42:
						v31 = -1i64;
						do
							++v31;
						while (v49[v31]);
						v32 = v49;
						if (!v31)
							goto LABEL_35;
						v13 = v43;
						do
						{
							--v31;
							if (v13 >= (unsigned __int64*)v47)
							{
								v33 = (char*)v13 - (char*)v46;
								if (v13 != v46)
								{
									v34 = (__int64)v45;
									if (*(_QWORD*)(v45[4] + 120i64) >= *(_QWORD*)(v45[4] + 112i64))
										sub_14005E2C0((__int64)v45);
									v35 = *(_QWORD*)(v34 + 16);
									v36 = sub_140062650(v34, v46, v33);
									*(_DWORD*)(v35 + 8) = 4;
									*(_QWORD*)v35 = v36;
									*(_QWORD*)(v34 + 16) += 16i64;
									++v44;
									v43 = v46;
									sub_1400575B0((__int64)&v43);
									v13 = v43;
								}
							}
							v37 = *v32++;
							*(_BYTE*)v13 = v37;
							v13 = (unsigned __int64*)((char*)v43 + 1);
							v43 = (unsigned __int64*)((char*)v43 + 1);
						} while (v31);
						break;
					default:
						sub_140056830(a1, (unsigned __int64*)"invalid option '%%%c' to 'format'", (unsigned int)(char)*v19);
					}
				}
			}
			else
			{
				if (v13 >= (unsigned __int64*)v47)
				{
					v15 = (char*)v13 - (char*)v46;
					if (v13 != v46)
					{
						if (*(_QWORD*)(v14[4] + 120i64) >= *(_QWORD*)(v14[4] + 112i64))
							sub_14005E2C0((__int64)v14);
						v16 = v14[2];
						v17 = sub_140062650((__int64)v14, v46, v15);
						*(_DWORD*)(v16 + 8) = 4;
						*(_QWORD*)v16 = v17;
						v14[2] += 16i64;
						++v44;
						v43 = v46;
						sub_1400575B0((__int64)&v43);
						v13 = v43;
					}
				}
				*(_BYTE*)v13 = *v6;
				v13 = (unsigned __int64*)((char*)v43 + 1);
				++v6;
				v43 = (unsigned __int64*)((char*)v43 + 1);
			}
			v14 = v45;
			if ((unsigned __int64)v6 >= v41)
				break;
			v1 = v40;
		}
		v4 = v44;
	}
	v38 = (char*)v13 - (char*)v46;
	if (v38)
	{
		sub_140058710((__int64)v14, v46, v38);
		v14 = v45;
		v4 = ++v44;
		v43 = v46;
	}
	sub_1400590E0(v14, v4);
	return 1i64;
}
// 140791DAE: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140C39824: using guessed type __int16 word_140C39824;
// 140791CD0: using guessed type unsigned __int64 var_458[64];
// 140791CD0: using guessed type char var_230[512];

