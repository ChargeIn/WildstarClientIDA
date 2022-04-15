//----- (00000001407918F0) ----------------------------------------------------
__int64 __fastcall sub_1407918F0(_QWORD* a1, __int64 a2, unsigned int a3)
{
	_DWORD* v6; // rax
	__int64 v7; // rax
	__int64 v8; // r14
	char* v9; // rsi
	_DWORD* v10; // rax
	const char* v11; // r10
	__int64 v12; // rax
	const char* v13; // r9
	const char* v14; // rax
	unsigned __int64 v15; // r13
	char v16; // al
	__int64 v17; // r15
	char* v18; // r12
	unsigned __int64 v19; // rbp
	__int64 v20; // r14
	__int64 v21; // rdi
	__int64 v22; // rax
	char v23; // al
	__int64 result; // rax
	char* v25; // [rsp+68h] [rbp+10h]
	__int64 v26; // [rsp+78h] [rbp+20h]

	v6 = sub_1400580E0((__int64)a1, a3);
	if (v6[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v6))
		{
		LABEL_7:
			v10 = sub_1400580E0((__int64)a1, a3);
			if (v10 == dword_140A12138 || (v12 = (int)v10[2], (_DWORD)v12 == -1))
				v13 = aNoValue;
			else
				v13 = off_140A123B0[v12];
			v14 = (const char*)sub_140058780((__int64)a1, (unsigned __int64*)"%s expected, got %s", v11, v13);
			sub_140056570(a1, a3, v14);
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v6 = sub_1400580E0((__int64)a1, a3);
	}
	v7 = *(_QWORD*)v6;
	v8 = *(_QWORD*)(v7 + 16);
	v9 = (char*)(v7 + 32);
	v25 = (char*)(v7 + 32);
	if (v7 == -32)
		goto LABEL_7;
	v15 = a2 + 536;
	if (*(_QWORD*)a2 >= (unsigned __int64)(a2 + 536) && *(_QWORD*)a2 - a2 != 24)
	{
		sub_140058710(*(_QWORD*)(a2 + 16), (unsigned __int64*)(a2 + 24), *(_QWORD*)a2 - a2 - 24);
		++* (_DWORD*)(a2 + 8);
		*(_QWORD*)a2 = a2 + 24;
		sub_1400575B0(a2);
	}
	*(_BYTE*)(*(_QWORD*)a2)++ = 34;
	if (v8)
	{
		while (1)
		{
			v16 = *v9;
			v26 = --v8;
			if (!*v9)
			{
				v17 = 4i64;
				v18 = a000;
				do
				{
					--v17;
					if (*(_QWORD*)a2 >= v15)
					{
						v19 = *(_QWORD*)a2 - a2 - 24;
						if (*(_QWORD*)a2 - a2 != 24)
						{
							v20 = *(_QWORD*)(a2 + 16);
							if (*(_QWORD*)(*(_QWORD*)(v20 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v20 + 32) + 112i64))
								sub_14005E2C0(*(_QWORD*)(a2 + 16));
							v21 = *(_QWORD*)(v20 + 16);
							v22 = sub_140062650(v20, (unsigned __int64*)(a2 + 24), v19);
							*(_DWORD*)(v21 + 8) = 4;
							*(_QWORD*)v21 = v22;
							*(_QWORD*)(v20 + 16) += 16i64;
							++* (_DWORD*)(a2 + 8);
							*(_QWORD*)a2 = a2 + 24;
							sub_1400575B0(a2);
						}
					}
					v23 = *v18++;
					*(_BYTE*)(*(_QWORD*)a2)++ = v23;
				} while (v17);
				v9 = v25;
				v8 = v26;
				goto LABEL_38;
			}
			if (v16 == 10)
				goto LABEL_21;
			if (v16 != 13)
				break;
			sub_1400576C0(a2, aR_16, 2i64);
		LABEL_38:
			v25 = ++v9;
			if (!v8)
				goto LABEL_39;
		}
		if (v16 == 34 || v16 == 92)
		{
		LABEL_21:
			if (*(_QWORD*)a2 >= v15 && *(_QWORD*)a2 - a2 != 24)
			{
				sub_140058710(*(_QWORD*)(a2 + 16), (unsigned __int64*)(a2 + 24), *(_QWORD*)a2 - a2 - 24);
				++* (_DWORD*)(a2 + 8);
				*(_QWORD*)a2 = a2 + 24;
				sub_1400575B0(a2);
			}
			*(_BYTE*)(*(_QWORD*)a2)++ = 92;
		}
		if (*(_QWORD*)a2 >= v15 && *(_QWORD*)a2 - a2 != 24)
		{
			sub_140058710(*(_QWORD*)(a2 + 16), (unsigned __int64*)(a2 + 24), *(_QWORD*)a2 - a2 - 24);
			++* (_DWORD*)(a2 + 8);
			*(_QWORD*)a2 = a2 + 24;
			sub_1400575B0(a2);
		}
		*(_BYTE*)(*(_QWORD*)a2)++ = *v9;
		goto LABEL_38;
	}
LABEL_39:
	if (*(_QWORD*)a2 >= v15 && *(_QWORD*)a2 - a2 != 24)
	{
		sub_140058710(*(_QWORD*)(a2 + 16), (unsigned __int64*)(a2 + 24), *(_QWORD*)a2 - a2 - 24);
		++* (_DWORD*)(a2 + 8);
		*(_QWORD*)a2 = a2 + 24;
		sub_1400575B0(a2);
	}
	result = *(_QWORD*)a2;
	*(_BYTE*)(*(_QWORD*)a2)++ = 34;
	return result;
}
// 1407919BA: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

