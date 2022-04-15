#include "../winhttp.h"

//----- (000000014086A8E0) ----------------------------------------------------
__int64 __fastcall sub_14086A8E0(__int64 a1, int a2, __int64 a3)
{
	int v4; // ebx
	__int64* v6; // rax
	int v7; // esi
	__int64* v8; // rcx
	unsigned int** v9; // r14
	__int64* v10; // rcx
	unsigned int** v11; // r15
	unsigned int v12; // ebp
	_QWORD* v13; // rdi
	int v14; // eax
	char v15; // bp
	__int64 v16; // rcx
	unsigned int* v17; // rbx
	__int64* v18; // rax
	unsigned int v19; // edx
	unsigned int* v20; // rax
	unsigned int* v21; // rcx
	char v23; // [rsp+28h] [rbp-50h]
	unsigned int v24; // [rsp+80h] [rbp+8h]
	int v25; // [rsp+88h] [rbp+10h]
	__int64 v27; // [rsp+98h] [rbp+20h] BYREF

	v25 = a2;
	v4 = a2;
	sub_140830370(qword_140C61BA0, &v27, a3, *(_DWORD*)(a1 + 24));
	if (v4 == (_DWORD)v27)
		return 1i64;
	v6 = *(__int64**)(a1 + 264);
	v7 = 0;
	v8 = v6;
	if (v6)
	{
		while (*((_DWORD*)v8 + 2) != (_DWORD)v27)
		{
			v8 = (__int64*)*v8;
			if (!v8)
				goto LABEL_5;
		}
		v9 = (unsigned int**)(v8 + 2);
	}
	else
	{
	LABEL_5:
		v9 = 0i64;
	}
	v10 = *(__int64**)(a1 + 264);
	if (!v6)
		goto LABEL_12;
	while (*((_DWORD*)v10 + 2) != v4)
	{
		v10 = (__int64*)*v10;
		if (!v10)
			goto LABEL_12;
	}
	v11 = (unsigned int**)(v10 + 2);
	if (v10 == (__int64*)-16i64)
	{
	LABEL_12:
		v4 = *(_DWORD*)(a1 + 256);
		v25 = v4;
		if (v6)
		{
			while (*((_DWORD*)v6 + 2) != v4)
			{
				v6 = (__int64*)*v6;
				if (!v6)
					goto LABEL_15;
			}
			v11 = (unsigned int**)(v6 + 2);
		}
		else
		{
		LABEL_15:
			v11 = 0i64;
		}
	}
	v12 = sub_14086BD80(a1, v9, (__int64)v11, a3);
	v24 = v12;
	sub_140830190(qword_140C61BA0, *(_DWORD*)(a1 + 24), a3);
	v13 = *(_QWORD**)(a1 + 360);
	v14 = 0;
	v27 = 0i64;
	if (v13)
	{
		v15 = v23;
		v16 = a3;
		do
		{
			if (v13[5] == v16)
			{
				if (v14 == v4)
				{
					++v7;
				}
				else
				{
					v14 = v4;
					LODWORD(v27) = v4;
					v7 = 1;
				}
				HIDWORD(v27) = v7;
				if (v11)
				{
					v17 = *v11;
					if (*v11 != v11[1])
					{
						do
						{
							v18 = *(__int64**)(a1 + 312);
							v19 = *v17;
							if (!v18)
								goto LABEL_28;
							while (*((_DWORD*)v18 + 2) != v19)
							{
								v18 = (__int64*)*v18;
								if (!v18)
									goto LABEL_28;
							}
							if (v18 == (__int64*)-12i64)
								LABEL_28:
							v15 &= 0xE0u;
							else
								v15 = *((_DWORD*)v18 + 5);
							if ((v15 & 0x10) != 0 && v9 && (v20 = *v9, v21 = v9[1], *v9 != v21))
							{
								while (*v20 != v19)
								{
									if (++v20 == v21)
										goto LABEL_34;
								}
							}
							else
							{
							LABEL_34:
								v24 = sub_14086B080(a1, v19, (__int64)(v13 + 1));
							}
							++v17;
						} while (v17 != v11[1]);
						v7 = HIDWORD(v27);
						v14 = v27;
						v16 = a3;
					}
				}
			}
			v13 = (_QWORD*)*v13;
			v4 = v25;
		} while (v13);
		v12 = v24;
	}
	sub_140830AE0(qword_140C61BA0, a3, *(_DWORD*)(a1 + 24), &v27);
	return v12;
}
// 14086A9EE: variable 'v23' is possibly undefined
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

