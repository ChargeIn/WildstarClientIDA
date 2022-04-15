#include "../winhttp.h"

//----- (000000014090D9A0) ----------------------------------------------------
__int64 __fastcall sub_14090D9A0(unsigned __int16* a1, unsigned __int64 a2, unsigned int a3, _QWORD* a4)
{
	unsigned int v4; // r11d
	__int64 v5; // rax
	int v7; // r10d
	unsigned __int16* v8; // rbx
	int v9; // eax
	__int64 v10; // rax
	bool v11; // zf
	__int64 v12; // rax
	__int64 v13; // rax
	unsigned __int16 v14; // si
	__int64 v15; // rax
	unsigned __int16* v16; // rcx
	unsigned __int64 v17; // r8
	__int64 v18; // rdi
	__int64 v19; // rax
	unsigned __int16* v20; // rdx
	unsigned __int16 v22; // ax
	unsigned __int16 v23; // ax
	unsigned __int16* v24; // rcx
	int v25; // edi
	int v26; // eax
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v30; // rax
	int v31; // edx
	int v32; // eax
	__int64 v33; // rax
	__int64 v34; // rax
	__int64 v35; // rax
	unsigned __int64 v36; // [rsp+48h] [rbp+10h]

	v36 = a2;
	v4 = a3;
	v5 = byte_1409CFAA0[*a1];
	v7 = a1[v5];
	v8 = &a1[v5];
	v9 = v7 - 4;
	while (2)
	{
		switch (v9)
		{
		case 0:
		case 1:
		case 108:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
			v12 = (unsigned __int16)v7;
			goto LABEL_6;
		case 116:
		case 117:
		case 118:
			do
			{
				v10 = v8[1];
				v11 = v8[v10] == 113;
				v8 += v10;
			} while (v11);
			v12 = *v8;
		LABEL_6:
			v13 = byte_1409CFAA0[v12];
			v7 = v8[v13];
			v8 += v13;
			v9 = v7 - 4;
			if ((unsigned int)(v7 - 4) > 0x87)
				goto LABEL_7;
			continue;
		default:
		LABEL_7:
			if ((unsigned __int64)v8 < a2)
			{
				while (1)
				{
					v14 = *v8;
					if (*v8 == 119)
					{
						do
						{
							v15 = v8[1];
							v11 = v8[v15] == 113;
							v8 += v15;
						} while (v11);
						v14 = *v8;
					}
					else if (v14 == 111)
					{
						v16 = (unsigned __int16*)a4[4];
						v17 = a4[9];
						if ((unsigned __int64)v16 < v17)
						{
							do
							{
								if (*v16 == (unsigned int)(((__int64)v8 - a4[5] + 2) >> 1))
									return 1i64;
								++v16;
							} while ((unsigned __int64)v16 < v17);
							a2 = v36;
						}
						v18 = a4[5] + 2i64 * v8[1];
						if (!*(_WORD*)(v18 + 2))
							return 1i64;
						while (!(unsigned int)sub_14090D9A0(v18, a2, v4, a4))
						{
							v19 = *(unsigned __int16*)(v18 + 2);
							v11 = *(_WORD*)(v18 + 2 * v19) == 113;
							v18 += 2 * v19;
							if (!v11)
								return 0i64;
							a2 = v36;
							v4 = a3;
						}
					}
					else if ((unsigned __int16)(v14 - 140) <= 2u || v14 == 155)
					{
						v8 += byte_1409CFAA0[v14];
						do
						{
							v29 = v8[1];
							v11 = v8[v29] == 113;
							v8 += v29;
						} while (v11);
						v14 = *v8;
					}
					else if ((unsigned __int16)(v14 - 130) <= 3u)
					{
						do
						{
							v28 = v8[1];
							v11 = v8[v28] == 113;
							v8 += v28;
						} while (v11);
						v14 = *v8;
					}
					else
					{
						if ((unsigned __int16)(v14 - 123) > 6u)
						{
							switch (v14)
							{
							case 6u:
							case 7u:
							case 8u:
							case 9u:
							case 0xAu:
							case 0xBu:
							case 0xCu:
							case 0xDu:
							case 0xEu:
							case 0xFu:
							case 0x10u:
							case 0x16u:
							case 0x1Du:
							case 0x1Eu:
							case 0x1Fu:
							case 0x20u:
							case 0x23u:
							case 0x24u:
							case 0x29u:
							case 0x2Bu:
							case 0x3Du:
							case 0x3Eu:
							case 0x43u:
							case 0x45u:
							case 0x57u:
							case 0x58u:
							case 0x5Du:
							case 0x5Fu:
								return 0i64;
							case 0x21u:
							case 0x22u:
							case 0x25u:
							case 0x26u:
							case 0x2Au:
							case 0x2Cu:
							case 0x2Eu:
							case 0x2Fu:
							case 0x32u:
							case 0x33u:
							case 0x37u:
							case 0x39u:
								if (v4 && (v8[1] & 0xFC00) == 0xD800)
									++v8;
								goto LABEL_57;
							case 0x27u:
							case 0x28u:
							case 0x2Du:
							case 0x34u:
							case 0x35u:
							case 0x3Au:
								if (v4 && (v8[2] & 0xFC00) == 0xD800)
									++v8;
								goto LABEL_57;
							case 0x55u:
							case 0x56u:
							case 0x59u:
							case 0x5Au:
							case 0x5Eu:
							case 0x60u:
								v22 = v8[1];
								goto LABEL_31;
							case 0x5Bu:
							case 0x5Cu:
							case 0x61u:
								v22 = v8[2];
							LABEL_31:
								if ((unsigned __int16)(v22 - 15) <= 1u)
									v8 += 2;
								goto LABEL_57;
							case 0x6Au:
							case 0x6Bu:
								v20 = v8 + 17;
								goto LABEL_27;
							case 0x6Cu:
								v8 += v8[1];
								v20 = v8;
							LABEL_27:
								switch (*v20)
								{
								case 'b':
								case 'c':
								case 'f':
								case 'g':
									goto LABEL_57;
								case 'h':
								case 'i':
									if (v20[1])
										return 0i64;
									goto LABEL_57;
								default:
									return 0i64;
								}
							case 0x71u:
							case 0x72u:
							case 0x73u:
							case 0x74u:
							case 0x75u:
								return 1i64;
							case 0x8Fu:
							case 0x91u:
							case 0x93u:
							case 0x95u:
								v8 += v8[1];
								goto LABEL_57;
							default:
								goto LABEL_57;
							}
						}
						v23 = v8[1];
						if (!v23)
							return 1i64;
						if (v14 != 129 || (v24 = &v8[v23], *v24 == 113))
						{
							v25 = 0;
							do
							{
								if (!v25)
								{
									v26 = sub_14090D9A0(v8, a2, v4, a4);
									a2 = v36;
									v4 = a3;
									if (v26)
										v25 = 1;
								}
								v27 = v8[1];
								v11 = v8[v27] == 113;
								v8 += v27;
							} while (v11);
							if (!v25)
								return 0i64;
							v14 = *v8;
						}
						else
						{
							v14 = *v24;
							v8 += v23;
						}
					}
				LABEL_57:
					v30 = byte_1409CFAA0[v14];
					v31 = v8[v30];
					v8 += v30;
					v32 = v31 - 4;
					while (2)
					{
						switch (v32)
						{
						case 0:
						case 1:
						case 108:
						case 131:
						case 132:
						case 133:
						case 134:
						case 135:
							v34 = (unsigned __int16)v31;
							goto LABEL_62;
						case 116:
						case 117:
						case 118:
							do
							{
								v33 = v8[1];
								v11 = v8[v33] == 113;
								v8 += v33;
							} while (v11);
							v34 = *v8;
						LABEL_62:
							v35 = byte_1409CFAA0[v34];
							v31 = v8[v35];
							v8 += v35;
							v32 = v31 - 4;
							if ((unsigned int)(v31 - 4) > 0x87)
								goto LABEL_63;
							continue;
						default:
						LABEL_63:
							a2 = v36;
							if ((unsigned __int64)v8 >= v36)
								return 1i64;
							v4 = a3;
							break;
						}
						break;
					}
				}
			}
			return 1i64;
		}
	}
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

