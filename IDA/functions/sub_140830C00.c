#include "../winhttp.h"

//----- (0000000140830C00) ----------------------------------------------------
void** __fastcall sub_140830C00(__int64 a1)
{
	void** result; // rax
	int* v2; // r12
	_QWORD* v3; // rsi
	__int64 v4; // rdi
	_QWORD* v5; // r14
	__int64 v6; // rbp
	int v7; // ecx
	int v8; // ebx
	_QWORD* v9; // rdx
	__int64 v10; // rcx
	_QWORD* v11; // rbp
	_QWORD* v12; // rbx
	void** v13; // [rsp+28h] [rbp-50h]
	void* retaddr; // [rsp+78h] [rbp+0h] BYREF

	result = &retaddr;
	v2 = (int*)(a1 + 48);
	if (*(_DWORD*)(a1 + 48) != -1)
	{
		v3 = *(_QWORD**)(a1 + 56);
		LODWORD(v4) = 0;
		v5 = 0i64;
		if (v3)
			goto LABEL_7;
		while (1)
		{
			v4 = (unsigned int)(v4 + 1);
			if ((unsigned int)v4 >= 0xC1)
				break;
			v3 = *(_QWORD**)&v2[2 * v4 + 2];
			if (v3)
			{
				while (1)
				{
				LABEL_7:
					while (v3[1])
					{
						v6 = v3[2];
						v7 = *(_DWORD*)(v6 + 136) ^ (*(_DWORD*)(v6 + 136) ^ (*(_DWORD*)(v6 + 136) - 1)) & 0x3FFFFFFF;
						*(_DWORD*)(v6 + 136) = v7;
						if ((v7 & 0x3FFFFFFF) == 0)
						{
							v8 = dword_140C10F20;
							sub_14084BD30(v6);
							sub_140881720(v8, v6);
						}
						v9 = (_QWORD*)*v3;
						LODWORD(v10) = v4;
						v11 = v5;
						LODWORD(v13) = v4;
						v12 = (_QWORD*)*v3;
						if (!*v3)
						{
							do
							{
								v10 = (unsigned int)(v10 + 1);
								if ((unsigned int)v10 >= 0xC1)
									break;
								v12 = *(_QWORD**)&v2[2 * v10 + 2];
								v11 = 0i64;
							} while (!v12);
							LODWORD(v13) = v10;
						}
						if (v5)
							*v5 = v9;
						else
							*(_QWORD*)&v2[2 * (unsigned int)v4 + 2] = v9;
						sub_140881720(*v2, (__int64)v3);
						result = v13;
						--v2[388];
						LODWORD(v4) = (_DWORD)v13;
						v3 = v12;
						v5 = v11;
					LABEL_18:
						if (!v3)
							return result;
					}
					v5 = v3;
					v3 = (_QWORD*)*v3;
					if (!v3)
					{
						while (1)
						{
							v4 = (unsigned int)(v4 + 1);
							if ((unsigned int)v4 >= 0xC1)
								goto LABEL_18;
							v3 = *(_QWORD**)&v2[2 * v4 + 2];
							v5 = 0i64;
							if (v3)
								goto LABEL_7;
						}
					}
				}
			}
		}
	}
	return result;
}
// 140830C4F: conditional instruction was optimized away because rsi.8==0
// 140830CF8: variable 'v13' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

