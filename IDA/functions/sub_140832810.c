//----- (0000000140832810) ----------------------------------------------------
__int64 sub_140832810()
{
	__int64 v0; // rdx
	__int64 v1; // rcx
	int v2; // eax
	__int64 v3; // r15
	__int64 v4; // rdi
	__int64 v5; // r14
	__int64 v6; // rbx
	char v7; // al
	__int64* v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rax
	int v11; // edx
	__int64 i; // rsi
	__int64 v13; // rbx
	__int64 v14; // r14
	char v15; // al
	__int64 v16; // r9
	__int64 v18; // [rsp+28h] [rbp-49h]
	__int64 v19[2]; // [rsp+48h] [rbp-29h] BYREF
	__int16 v20; // [rsp+58h] [rbp-19h]
	__int16 v21; // [rsp+5Ah] [rbp-17h]
	__int16 v22; // [rsp+60h] [rbp-11h]
	__int64 v23; // [rsp+68h] [rbp-9h]
	int v24; // [rsp+70h] [rbp-1h]
	int v25; // [rsp+80h] [rbp+Fh]
	__int16 v26; // [rsp+84h] [rbp+13h]
	__int64 v27; // [rsp+88h] [rbp+17h]
	__int64 v28; // [rsp+90h] [rbp+1Fh]
	__int64 v29; // [rsp+98h] [rbp+27h]
	__int64 v30; // [rsp+A0h] [rbp+2Fh]
	__int64 v31; // [rsp+D8h] [rbp+67h] BYREF

	if (*(_QWORD*)(qword_140C61B60 + 8) != *(_QWORD*)qword_140C61B60)
		QueryPerformanceCounter((LARGE_INTEGER*)(qword_140C61B60 + 64));
	sub_140858910(0x400u);
	sub_140831AB0();
	v0 = qword_140C61CD0;
	v1 = qword_140C61CC8;
	v2 = ((qword_140C61CD0 - qword_140C61CC8) >> 3) - 1;
	v3 = v2;
	if (v2 >= 0)
	{
		while (1)
		{
			v4 = *(_QWORD*)(v1 + 8 * v3);
			v5 = 0i64;
			v6 = *(_QWORD*)(v4 + 8);
			if (!v6)
				goto LABEL_34;
			do
			{
				v7 = *(_BYTE*)(v4 + 1124);
				v19[0] = 0i64;
				v22 = 0;
				v23 = 0i64;
				v20 = 1024;
				v26 = 0;
				v25 = 43;
				LOBYTE(v30) = (v7 & 8) != 0;
				v29 = 0i64;
				if ((v7 & 8) != 0)
					v20 = 0x5DC00u / dword_140C110B4;
				if (*(_DWORD*)(v6 + 76) == 1)
				{
					if (sub_140848CC0(v6, (__int64)v19))
					{
						v27 = v6;
						v28 = v4;
						v21 = 0;
						v22 = 0;
						v23 = 0i64;
						v24 = -1;
						sub_1408333C0((__int64)v19);
						if (v25 == 46)
							sub_140848AC0(v27);
						else
							sub_140848A20(v27);
					}
					if (v25 == 17)
					{
						if (HIBYTE(v26))
							goto LABEL_22;
						v8 = *(__int64**)(v6 + 24);
						v9 = v6;
						if (v8)
						{
							*(_QWORD*)(v6 + 24) = 0i64;
							sub_140848A40(v6, 0);
							if ((unsigned int)sub_1408472B0(v6, v8, 1) == 1 && (unsigned int)sub_140846F60(v6) == 1)
							{
								sub_1408613D0((__int64)v8);
								goto LABEL_24;
							}
						LABEL_22:
							v9 = v6;
						}
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v9);
						goto LABEL_24;
					}
					if (v25 == 2 || HIBYTE(v26))
						goto LABEL_22;
					if ((_BYTE)v26)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6);
				}
			LABEL_24:
				if (*(_DWORD*)(v6 + 76) == 2)
				{
					sub_140862D70(v4 + 32);
					sub_140858490(v6);
					v10 = *(_QWORD*)(v6 + 8);
					v18 = v10;
					if (v6 == *(_QWORD*)(v4 + 8))
						*(_QWORD*)(v4 + 8) = v10;
					else
						*(_QWORD*)(v5 + 8) = v10;
					if (v6 == *(_QWORD*)(v4 + 16))
						*(_QWORD*)(v4 + 16) = v5;
					--* (_DWORD*)v4;
					sub_140831560(v6);
					v6 = v18;
				}
				else
				{
					v5 = v6;
					v6 = *(_QWORD*)(v6 + 8);
				}
			} while (v6);
			v1 = qword_140C61CC8;
		LABEL_34:
			if (--v3 < 0)
			{
				v0 = qword_140C61CD0;
				break;
			}
		}
	}
	v11 = ((v0 - v1) >> 3) - 1;
	for (i = v11; i >= 0; --i)
	{
		v13 = *(_QWORD*)(v1 + 8 * i);
		if ((*(_BYTE*)(v13 + 1124) & 8) == 0)
		{
			sub_140862F00(v13 + 32, &v31);
			sub_1408638B0((_DWORD*)(v13 + 32));
			v14 = *(_QWORD*)(v13 + 864);
			v15 = sub_140863240(v13 + 32);
			v16 = v13 + 416;
			if (v14)
				sub_140862CD0(v14 + 32, v31, v15, v16);
			else
				sub_140863C90(qword_140C61CC0, &v31, v15, v16);
			sub_140863400(v13 + 32);
			v1 = qword_140C61CC8;
		}
	}
	return sub_140863D50(qword_140C61CC0, (__int64)&qword_140C61CE0);
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C61B60: using guessed type __int64 qword_140C61B60;
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;
// 140C61CE0: using guessed type __int64 qword_140C61CE0;

