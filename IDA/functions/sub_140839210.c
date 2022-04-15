#include "../winhttp.h"

//----- (0000000140839210) ----------------------------------------------------
void __fastcall sub_140839210(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rbx
	__int64 v3; // r13
	unsigned __int64 v4; // r10
	unsigned __int64 v6; // rdi
	__int64 v7; // r8
	unsigned __int64 v8; // rsi
	unsigned __int64 v9; // rbp
	unsigned __int64 v10; // r9
	__int64 v11; // rcx
	unsigned __int64 v12; // rdx
	__int64 v13; // rdx
	int v14; // r12d
	_QWORD* v15; // rdx
	__int64 v16; // rcx
	_QWORD* v17; // r9
	_QWORD* v18; // r10
	__int64 v19; // r8
	_QWORD* v20; // rdi
	_QWORD* v21; // rbp
	__int64* v22; // rdi
	int v23; // [rsp+28h] [rbp-60h]
	int v24; // [rsp+28h] [rbp-60h]

	if (a2)
	{
		LODWORD(v2) = 0;
		v3 = a1 + 3112;
		v4 = a2;
		v6 = *(_QWORD*)(a1 + 3112);
		LODWORD(v7) = 0;
		v8 = 0i64;
		if (v6)
			goto LABEL_7;
		while (1)
		{
			v7 = (unsigned int)(v7 + 1);
			if ((unsigned int)v7 >= 0xC1)
				break;
			v6 = *(_QWORD*)(v3 + 8 * v7);
			if (v6)
			{
				while (1)
				{
				LABEL_7:
					while (1)
					{
						v9 = v6;
						if (*(_QWORD*)(v6 + 24) != v4)
							break;
						v10 = *(_QWORD*)(v6 + 16);
						LODWORD(v11) = v7;
						v12 = v8;
						v23 = v7;
						v6 = v10;
						if (!v10)
						{
							do
							{
								v11 = (unsigned int)(v11 + 1);
								if ((unsigned int)v11 >= 0xC1)
									break;
								v6 = *(_QWORD*)(v3 + 8 * v11);
								v12 = 0i64;
							} while (!v6);
							v23 = v11;
						}
						if (v8)
							*(_QWORD*)(v8 + 16) = v10;
						else
							*(_QWORD*)(v3 + 8i64 * (unsigned int)v7) = v10;
						--* (_DWORD*)(v3 + 1544);
						v8 = v12;
						sub_140837930((_QWORD*)a1, v9);
						v13 = *(_QWORD*)(v9 + 40);
						v14 = dword_140C10F20;
						if (v13)
						{
							*(_QWORD*)(v9 + 48) = v13;
							sub_140881720(dword_140C10F20, v13);
							*(_QWORD*)(v9 + 40) = 0i64;
							*(_QWORD*)(v9 + 48) = 0i64;
							*(_DWORD*)(v9 + 56) = 0;
						}
						sub_140881720(v14, v9);
						LODWORD(v7) = v23;
						v4 = a2;
					LABEL_18:
						if (!v6)
							goto LABEL_19;
					}
					v8 = v6;
					v6 = *(_QWORD*)(v6 + 16);
					if (!v6)
					{
						while (1)
						{
							v7 = (unsigned int)(v7 + 1);
							if ((unsigned int)v7 >= 0xC1)
								goto LABEL_18;
							v6 = *(_QWORD*)(v3 + 8 * v7);
							v8 = 0i64;
							if (v6)
								goto LABEL_7;
						}
					}
				}
			}
		}
	LABEL_19:
		v15 = *(_QWORD**)(a1 + 1560);
		LODWORD(v16) = 0;
		v17 = 0i64;
		if (v15)
			goto LABEL_28;
		while (1)
		{
			v16 = (unsigned int)(v16 + 1);
			if ((unsigned int)v16 >= 0xC1)
				break;
			v15 = *(_QWORD**)(a1 + 8 * v16 + 1560);
			if (v15)
			{
				while (1)
				{
				LABEL_28:
					while (v15[2] == v4)
					{
						v18 = (_QWORD*)*v15;
						LODWORD(v19) = v16;
						v24 = v16;
						v20 = (_QWORD*)*v15;
						v21 = v17;
						if (!*v15)
						{
							do
							{
								v19 = (unsigned int)(v19 + 1);
								if ((unsigned int)v19 >= 0xC1)
									break;
								v20 = *(_QWORD**)(a1 + 8 * v19 + 1560);
								v21 = 0i64;
							} while (!v20);
							v24 = v19;
						}
						if (v17)
							*v17 = v18;
						else
							*(_QWORD*)(a1 + 8i64 * (unsigned int)v16 + 1560) = v18;
						sub_140881720(*(_DWORD*)(a1 + 1552), (__int64)v15);
						--* (_DWORD*)(a1 + 3104);
						v4 = a2;
						LODWORD(v16) = v24;
						v15 = v20;
						v17 = v21;
					LABEL_37:
						if (!v15)
							goto LABEL_38;
					}
					v17 = v15;
					v15 = (_QWORD*)*v15;
					if (!v15)
					{
						while (1)
						{
							v16 = (unsigned int)(v16 + 1);
							if ((unsigned int)v16 >= 0xC1)
								goto LABEL_37;
							v15 = *(_QWORD**)(a1 + 8 * v16 + 1560);
							v17 = 0i64;
							if (v15)
								goto LABEL_28;
						}
					}
				}
			}
		}
	LABEL_38:
		v22 = *(__int64**)a1;
		if (*(_QWORD*)a1)
			goto LABEL_53;
		while (1)
		{
			v2 = (unsigned int)(v2 + 1);
			if ((unsigned int)v2 >= 0xC1)
				break;
			v22 = *(__int64**)(a1 + 8 * v2);
			if (v22)
				goto LABEL_47;
		}
		if (v22)
		{
		LABEL_53:
			do
			{
			LABEL_47:
				sub_1408377F0(v22, v4);
				v22 = (__int64*)v22[1];
				v4 = a2;
			} while (v22);
			while (1)
			{
				v2 = (unsigned int)(v2 + 1);
				if ((unsigned int)v2 >= 0xC1)
					break;
				v22 = *(__int64**)(a1 + 8 * v2);
				if (v22)
				{
					v4 = a2;
					goto LABEL_47;
				}
			}
		}
	}
}
// 14083927B: conditional instruction was optimized away because rdi.8==0
// 1408393C1: conditional instruction was optimized away because rdx.8==0
// 140839508: conditional instruction was optimized away because rdi.8==0
// 140C10F20: using guessed type int dword_140C10F20;

