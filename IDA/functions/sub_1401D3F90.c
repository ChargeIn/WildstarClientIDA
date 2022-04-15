#include "../winhttp.h"

//----- (00000001401D3F90) ----------------------------------------------------
__int64 __fastcall sub_1401D3F90(unsigned __int16* a1, unsigned __int16* a2)
{
	unsigned __int16 v2; // ax
	int v3; // r8d
	unsigned __int16* v4; // r11
	unsigned __int16* v5; // rsi
	unsigned __int16 v6; // r10
	unsigned __int16 v7; // dx
	int v8; // edi
	__int16 v9; // bx
	int v10; // ecx
	unsigned __int16 v11; // bp
	BOOL v12; // eax
	unsigned __int16 v13; // ax
	unsigned __int16 v14; // bx
	unsigned __int16 v15; // di
	unsigned __int64 v16; // rcx
	unsigned __int64 v17; // rdx
	__int64 v18; // rax
	unsigned __int16 v19; // r8
	unsigned __int16 v20; // r9
	unsigned __int64 v21; // rdx
	unsigned __int64 v22; // rcx
	__int64 v23; // rax
	unsigned __int16 v24; // r8
	unsigned __int64 v25; // rcx
	unsigned __int64 v26; // r8
	__int64 v27; // rax
	unsigned __int16 v28; // r9
	unsigned __int64 v29; // rcx
	unsigned __int64 v30; // r8
	__int64 v31; // rax
	unsigned __int16 v32; // r9
	unsigned __int16* v33; // rax
	bool v34; // sf
	__int64 result; // rax
	unsigned __int16 v36; // ax
	__int64 v37; // rcx
	int v39; // [rsp+20h] [rbp-38h]
	BOOL v40; // [rsp+60h] [rbp+8h]
	unsigned __int16* v41; // [rsp+68h] [rbp+10h]
	int v42; // [rsp+70h] [rbp+18h]
	unsigned __int16 v43; // [rsp+78h] [rbp+20h]

	v41 = a2;
	v2 = *a1;
	v3 = 0;
	v4 = a2;
	v5 = a1;
	v39 = 0;
	if (*a1)
	{
		while (1)
		{
			v6 = *v4;
			v7 = v2;
			++v5;
			v43 = *v4;
			switch (v2)
			{
			case 0x1Au:
				v36 = *v4;
				v37 = 0i64;
				if (*v4)
				{
					do
					{
						if (v36 == 46)
							break;
						v36 = v4[++v37];
						++v3;
					} while (v36);
					v39 = v3;
					if (v3 < 0)
						return 0i64;
				}
				do
				{
					result = sub_1401D3F90(v5, &v4[v3]);
					if ((_DWORD)result)
						return 1i64;
					v4 = v41;
					v34 = v39 - 1 < 0;
					v3 = --v39;
				} while (!v34);
				return result;
			case 0x21u:
				if (!*v5)
					return 0i64;
				return (unsigned int)sub_1401D3F90(v5, v4) == 0;
			case 0x2Au:
				if (*v4)
				{
					v33 = v4;
					do
					{
						++v33;
						++v3;
					} while (*v33);
					v39 = v3;
					if (v3 < 0)
						return 0i64;
				}
				while (!(unsigned int)sub_1401D3F90(v5, &v4[v3]))
				{
					v4 = v41;
					v34 = v39 - 1 < 0;
					v3 = --v39;
					if (v34)
						return 0i64;
				}
				return 1i64;
			case 0x3Fu:
				if (*v4)
					goto LABEL_82;
				return 0i64;
			case 0x5Bu:
				v10 = 1;
				v42 = 1;
				if (*v5 == 33)
				{
					v10 = 0;
					++v5;
					v42 = 0;
				}
				v11 = *v5;
				v12 = v10 == 0;
				v40 = v12;
				if (*v5 == 93)
					goto LABEL_56;
				break;
			case 0x60u:
				v8 = *v5;
				v9 = sub_140056430(*v5);
				if ((unsigned __int16)sub_140056430(v43) != v9 || !v8)
					return 0i64;
				v4 = v41 + 1;
				++v5;
				goto LABEL_83;
			default:
				if (v6 >= 0x80u)
				{
					v25 = 0i64;
					v26 = 977i64;
					while (1)
					{
						v27 = v25 + ((v26 - v25) >> 1);
						v28 = word_140A41A80[v27];
						if (v6 >= v28)
						{
							if (v6 <= v28)
							{
								v6 = word_140A40AF0[v27];
								goto LABEL_70;
							}
							v25 = v27 + 1;
						}
						else
						{
							v26 = v25 + ((v26 - v25) >> 1);
						}
						if (v25 >= v26)
							goto LABEL_70;
					}
				}
				if ((unsigned __int16)(v6 - 65) <= 0x19u)
					v6 += 32;
			LABEL_70:
				if (v7 >= 0x80u)
				{
					v29 = 0i64;
					v30 = 977i64;
					while (1)
					{
						v31 = v29 + ((v30 - v29) >> 1);
						v32 = word_140A41A80[v31];
						if (v7 >= v32)
						{
							if (v7 <= v32)
							{
								v7 = word_140A40AF0[v31];
								goto LABEL_81;
							}
							v29 = v31 + 1;
						}
						else
						{
							v30 = v29 + ((v30 - v29) >> 1);
						}
						if (v29 >= v30)
							goto LABEL_81;
					}
				}
				if ((unsigned __int16)(v7 - 65) <= 0x19u)
					v7 += 32;
			LABEL_81:
				if (v6 != v7)
					return 0i64;
			LABEL_82:
				++v4;
				goto LABEL_83;
			}
			while (v11)
			{
				if (v11 == 96)
					++v5;
				v13 = *v5;
				if (!*v5)
				{
				LABEL_54:
					v12 = v40;
					break;
				}
				++v5;
				v14 = v13;
				v15 = v13;
				if (*v5 == 45)
				{
					if (*++v5 == 96)
						++v5;
					if (!*v5)
						goto LABEL_54;
					v15 = *v5++;
				}
				v11 = *v5;
				if (!*v5)
					goto LABEL_54;
				if (v13 >= 0x80u)
				{
					v16 = 0i64;
					v17 = 977i64;
					while (1)
					{
						v18 = v16 + ((v17 - v16) >> 1);
						v19 = word_140A41A80[v18];
						if (v14 >= v19)
						{
							if (v14 <= v19)
							{
								v14 = word_140A40AF0[v18];
								goto LABEL_32;
							}
							v16 = v18 + 1;
						}
						else
						{
							v17 = v16 + ((v17 - v16) >> 1);
						}
						if (v16 >= v17)
							goto LABEL_32;
					}
				}
				if ((unsigned __int16)(v13 - 65) <= 0x19u)
					v14 = v13 + 32;
			LABEL_32:
				v20 = sub_140056430(v6);
				if (v20 < v14)
				{
					v12 = v40;
				}
				else if (v15 >= 0x80u)
				{
					v21 = 977i64;
					v22 = 0i64;
					do
					{
						v23 = v22 + ((v21 - v22) >> 1);
						v24 = word_140A41A80[v23];
						if (v15 >= v24)
						{
							if (v15 <= v24)
							{
								v15 = word_140A40AF0[v23];
								goto LABEL_48;
							}
							v22 = v23 + 1;
						}
						else
						{
							v21 = v22 + ((v21 - v22) >> 1);
						}
					} while (v22 < v21);
					v12 = v40;
					if (v20 <= v15)
						v12 = v42;
					v40 = v12;
				}
				else if ((unsigned __int16)(v15 - 65) > 0x19u)
				{
				LABEL_48:
					v12 = v40;
					if (v20 <= v15)
						v12 = v42;
					v40 = v12;
				}
				else
				{
					v12 = v40;
					if (v20 <= (unsigned __int16)(v15 + 32))
						v12 = v42;
					v40 = v12;
				}
				v6 = v43;
				if (v11 == 93)
					break;
			}
			v4 = v41;
		LABEL_56:
			if (!v12 || !*v5)
				return 0i64;
			++v4;
			++v5;
		LABEL_83:
			v2 = *v5;
			v41 = v4;
			if (!*v5)
				return *v4 == 0;
			v3 = 0;
		}
	}
	else
	{
		return *v4 == 0;
	}
}
// 140A40AF0: using guessed type __int16 word_140A40AF0[986];
// 140A41A80: using guessed type __int16 word_140A41A80[992];

